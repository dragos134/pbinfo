using AlgoLeetCode.Common;

namespace AlgoLeetCode
{
    public static class RandomProblems
    {
        public static int[] RunningSum(int[] nums)
        {
            int[] ans = new int[nums.Length];
            ans[0] = nums[0];
            for (int i = 1; i < nums.Length; i++)
            {
                ans[i] = nums[i] + ans[i - 1];
            }
            return ans;
        }

        public static string LongestCommonPrefix(string[] strs)
        {
            string longestPrefix = strs[0];
            for (int i = 1; i < strs.Length; i++)
            {
                var minLen = Math.Min(longestPrefix.Length, strs[i].Length);
                bool isBreak = false;
                for (int j = 0; j < minLen; j++)
                {
                    if (longestPrefix[j] != strs[i][j])
                    {
                        longestPrefix = strs[i].Substring(0, j);
                        isBreak = true;
                        break;
                    }
                }
                if (!isBreak)
                {
                    if (longestPrefix.Length > strs[i].Length)
                    {
                        longestPrefix = strs[i];
                    }
                }
            }
            return longestPrefix;
        }

        public static ListNode MergeTwoLists(ListNode list1, ListNode list2)
        {
            if (list1 == null && list2 == null) return null;
            ListNode ans = new ListNode();
            ListNode cpy = ans;
            while (list1 != null && list2 != null)
            {
                if (list1.val < list2.val)
                {
                    ans.val = list1.val;
                    list1 = list1.next;
                }
                else
                {
                    ans.val = list2.val;
                    list2 = list2.next;
                }
                ans.next = new ListNode();
                ans = ans.next;
            }
            while (list1 != null)
            {
                ans.val = list1.val;
                if (list1.next != null)
                {
                    ans.next = new ListNode();
                    ans = ans.next;
                }
                list1 = list1.next;
            }
            while (list2 != null)
            {
                ans.val = list2.val;
                if (list2.next != null)
                {
                    ans.next = new ListNode();
                    ans = ans.next;
                }
                list2 = list2.next;
            }

            return cpy;
        }
    }
}
