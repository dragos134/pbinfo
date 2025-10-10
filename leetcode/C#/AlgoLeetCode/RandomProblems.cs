using AlgoLeetCode.Common;
using System.Text;

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

        public static int RemoveDuplicates(int[] nums)
        {
            if (nums.Length == 1) return 1;
            int i = 0, k = 0;
            int numsSize = nums.Length;
            while (i < numsSize - 1)
            {
                while (i < numsSize - 1 && nums[i] == nums[i + 1])
                {
                    i++;
                }
                nums[k] = nums[i];
                k++;
                i++;
            }
            if (nums[numsSize - 1] != nums[numsSize - 2])
            {
                nums[k] = nums[numsSize - 1];
                k++;
            }
            return k;
        }

        public static int StrStr(string haystack, string needle)
        {
            int n = haystack.Length;
            int m = needle.Length;

            for (int i = 0; i < n; i++)
            {
                bool isOk = true;
                for (int j = 0; j < m; j++)
                {
                    if (haystack[i + j] != needle[j])
                    {
                        isOk = false;
                        break;
                    }
                }
                if (isOk)
                {
                    return i;
                }
            }

            return -1;
        }

        public static int SearchInsert(int[] nums, int target)
        {
            int left = 0, right = nums.Length;
            int middle = 0, middleIndex = 0;
            while (left < right)
            {
                middleIndex = (right + left) / 2;
                middle = nums[middleIndex];
                if (middle == target)
                {
                    return middleIndex;
                }
                if (target > middle)
                {
                    left = middleIndex + 1;
                }
                if (target < middle)
                {
                    right = middleIndex - 1;
                }
            }
            if (left > 0 && left < nums.Length - 1 && nums[left] < target && nums[left + 1] > target)
            {
                return left + 1;
            }

            return left;
        }

        public static int[] PlusOne(int[] digits)
        {
            int n = digits.Length;
            int carry = 0;
            digits[n - 1]++;
            carry = digits[n - 1] / 10;
            digits[n - 1] %= 10;
            for (int i = n - 2; i >= 0; i--)
            {
                digits[i] = digits[i] + carry;
                carry = digits[i] / 10;
                digits[i] = digits[i] % 10;
            }
            if (digits[0] == 0)
            {
                int[] ans = new int[n + 1];
                ans[0] = 1;
                for (int i = 0; i < n; i++)
                {
                    ans[i + 1] = digits[i];
                }
                return ans;
            }
            return digits;
        }

        public static string AddBinary(string a, string b)
        {
            int n = a.Length, m = b.Length;
            string res = "";
            if (n > m)
            {
                while (m < n)
                {
                    b = '0' + b;
                    m++;
                }
            }
            if (m > n)
            {
                while (n < m)
                {
                    a = '0' + a;
                    n++;
                }
            }

            int carry = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                int localRes = (a[i] - '0') + (b[i] - '0') + carry;
                carry = localRes / 2;
                localRes = localRes % 2;
                res = (char)(localRes + '0') + res;
            }

            if (carry == 1)
            {
                res = '1' + res;
            }

            return res;
        }

        public static int MySqrt1(int x)
        {
            int i = 0;
            while (i * i <= x)
            {
                i++;
            }
            return i - 1;
        }
        public static int MySqrt2(int x)
        {
            int left = 1;
            int right = x / 2;
            while (left < right)
            {
                int mid = (left + right) / 2;
                if (mid * mid == x || mid <= x / mid && mid + 1 > x / (mid + 1))
                {
                    return mid;
                }
                if (mid <= x / mid)
                {
                    left = mid + 1;
                }
                if (mid >= x / mid)
                {
                    right = mid - 1;
                }
            }
            return left;
        }

        public static int ClimbStairs(int n)
        {
            int ant2 = 1, ant1 = 2;
            int res = 0;
            if (n == 1) return 1;
            if (n == 2) return 2;
            for (int i = 3; i <= n; i++)
            {
                res = ant2 + ant1;
                ant2 = res;
                (ant1, ant2) = (ant2, ant1);
            }
            return res;
        }

        public static ListNode DeleteDuplicates(ListNode head)
        {
            ListNode cpy = head;
            while (head != null)
            {
                ListNode temp = head;
                while (temp.next.val == temp.val)
                {
                    temp = temp.next;
                }
                head.next = temp.next;
                head = head.next;
            }
            return cpy;
        }

        public static void Merge(int[] nums1, int m, int[] nums2, int n)
        {
            int[] nums3 = new int[m];
            for (int z = 0; z < m; z++)
            {
                nums3[z] = nums1[z];
            }
            int i = 0, j = 0;

            while (i < m && j < n)
            {
                if (nums3[i] < nums2[j])
                {
                    nums1[i + j] = nums3[i];
                    i++;
                }
                else
                {
                    nums1[i + j] = nums2[j];
                    j++;
                }
            }

            while (i < m)
            {
                nums1[i + j] = nums3[i];
                i++;
            }

            while (j < n)
            {
                nums1[i + j] = nums2[j];
                j++;
            }
        }

        public static IList<int> InorderTraversal(TreeNode root)
        {
            List<int> ans = [];
            if (root.left != null)
            {
                ans = (List<int>)InorderTraversal(root.left);
            }
            ans.Add(root.val);
            if (root.right != null)
            {
                ans = (List<int>)InorderTraversal(root.right);
            }
            return ans;
        }

        public static IList<int> GetRow(int rowIndex)
        {
            int[] ans = new int[rowIndex + 1];
            ans[0] = 1;
            ans[rowIndex] = 1;
            long numarator = rowIndex;
            long numitor = 1;
            long rez = 1;
            for (int i = 1; i <= rowIndex / 2; i++)
            {
                rez = rez * numarator / numitor;
                ans[i] = (int)rez;
                ans[rowIndex - i] = (int)rez;
                numarator--;
                numitor++;
            }
            return ans;
        }
        public static int MaxProfit1(int[] prices)
        {
            int n = prices.Length, localMax = 0, maxDif = 0;
            int[] maxPrices = new int[n];

            for (int i = n - 1; i >= 0; i--)
            {
                if (prices[i] > localMax)
                {
                    localMax = prices[i];
                }
                maxPrices[i] = localMax;
            }
            for (int i = 0; i < n; i++)
            {
                if (maxPrices[i] - prices[i] > maxDif)
                {
                    maxDif = maxPrices[i] - prices[i];
                }
            }
            return maxDif;
        }

        public static int SingleNumber(int[] nums) // # IMPORTANT
        {
            int n = nums.Length;
            int result = 0;
            for (int i = 0; i < n; i++)
            {
                result = result ^ nums[i];
            }
            return result;
        }

        public static bool HasCycle1(ListNode head)
        {
            List<ListNode> listNodes = new List<ListNode>();
            bool isCycle = false;
            int pos = -1;
            if (head == null)
            {
                pos = -1;
                return false;
            }
            while (head.next != null)
            {
                ListNode headNext = head.next;
                // check if head is in list
                for (int i = 0; i < listNodes.Count; i++)
                {
                    if (headNext == listNodes[i])
                    {
                        pos = i;
                        return true;
                    }
                }
                listNodes.Add(head);
                head = headNext;
            }
            return false;
        }

        public static bool HasCycle2(ListNode head) // # IMPORTANT
        {
            if (head == null) return false;
            ListNode slow = head, fast = head;
            while (fast.next != null)
            {
                slow = slow.next;
                if (fast.next.next != null)
                {
                    fast = fast.next.next;
                }
                else
                {
                    break;
                }
                if (slow == fast) return true;
            }
            return false;
        }

        public static ListNode GetIntersectionNode1(ListNode headA, ListNode headB)
        {
            ListNode cpyA = headA;
            ListNode cpyB = headB;
            while (cpyA != null)
            {
                cpyB = headB;
                while (cpyB != null)
                {
                    if (cpyA == cpyB)
                    {
                        return cpyA;
                    }
                    cpyB = cpyB.next;
                }
                cpyA = cpyA.next;
            }
            return null;
        }

        public static ListNode GetIntersectionNode2(ListNode headA, ListNode headB) // IMPORTANT
        {
            if (headA == null || headB == null) return null;

            ListNode p1 = headA;
            ListNode p2 = headB;

            while (p1 != p2)
            {
                p1 = (p1 != null) ? p1.next : headB;
                p2 = (p2 != null) ? p2.next : headA;
            }

            return p1;
        }

        public static string ConvertToTitle(int columnNumber)
        {
            StringBuilder sb = new StringBuilder();
            while (columnNumber > 0)
            {
                int rest = (columnNumber - 1) % 26;
                sb.Append((char)(rest + 'A'));
                columnNumber = (columnNumber - 1) / 26;
            }
            char[] ans = sb.ToString().ToCharArray();
            Array.Reverse(ans);

            return new string(ans);
        }

        public static int TitleToNumber(string columnTitle)
        {
            int p = 1, n = columnTitle.Length;
            int ans = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                ans = ans + p * (columnTitle[i] - 'A' + 1);
                p *= 26;
            }
            return ans;
        }

        public static int ReverseBits(int n)
        {
            int p = 0, k = 32;
            while (n > 0)
            {
                p = (p + n % 2) << 1;
                n /= 2;
                k--;
            }
            p = p << (k - 1);
            return p;
        }

        public static bool IsHappy(int n)
        {
            int sum = 0, cpyN = n;
            while (sum != 1)
            {
                sum = 0;
                while (n > 0)
                {
                    sum += (n % 10) * (n % 10);
                    n /= 10;
                }
                if (sum == 4)
                {
                    return false;
                }
                n = sum;
            }
            return true;
        }

        public static ListNode RemoveElements(ListNode head, int val)
        {
            while (head != null && head.val == val)
            {
                head = head.next;
            }
            ListNode cpyHead = head;
            while (head != null)
            {
                if (head.next != null && head.next.val == val)
                {
                    head.next = head.next.next;
                }
                else
                {
                    head = head.next;
                }
            }
            return cpyHead;
        }
        public static bool IsIsomorphic(string s, string t)
        {
            int[] charsS = new int[256];
            int[] charsT = new int[256];
            int n = s.Length;
            for (int i = 0; i < n; i++)
            {
                char ls = s[i];
                char lt = t[i];
                if (charsS[ls] != 0 || charsT[lt] != 0)
                {
                    if (charsS[ls] == 0 || charsT[lt] == 0)
                    {
                        return false;
                    }
                    if (charsS[ls] != lt || charsT[lt] != ls)
                    {
                        return false;
                    }
                }
                else
                {
                    charsS[ls] = lt;
                    charsT[lt] = ls;
                }
            }
            return true;
        }

        public static ListNode ReverseList1(ListNode head)
        {
            if (head == null) return null;
            if (head.next != null)
            {
                var rev = ReverseList1(head.next);

                return rev;
            }
            else
            {

                return head;
            }
        }

        public static int MissingNumber1(int[] nums)
        {
            int sum = 0, n = nums.Length;
            for (int i = 0; i < n; i++)
            {
                sum += nums[i];
            }
            return n * (n - 1) / 2 - sum;
        }

        public static int MissingNumber2(int[] nums)
        {
            return nums.Length * (nums.Length + 1) / 2 - nums.Sum();
        }

        public static bool ContainsNearbyDuplicate1(int[] nums, int k) // no extra space
        {
            int n = nums.Length;
            for (int i = 0; i < n; i++)
            {
                int limit = Math.Min(i + k, n - 1);
                for (int j = i + 1; j <= limit; j++)
                {
                    if (nums[i] == nums[j])
                    {
                        return true;
                    }
                }
            }
            return false;
        }

        public static bool ContainsNearbyDuplicate2(int[] nums, int k) // O(n) time complexity
        {
            return false;
        }

        public static IList<string> SummaryRanges(int[] nums)
        {
            List<string> ans = new List<string>();
            int start = 0, stop = 0, n = nums.Length;
            for (int i = 0; i < n - 1; i++)
            {

                if (nums[i + 1] > nums[i] + 1)
                {
                    if (start == stop)
                    {
                        ans.Add($"{nums[start]}");
                    }
                    else
                    {
                        ans.Add($"{nums[start]}->{nums[stop]}");
                    }
                    start = i + 1;
                    stop = i + 1;
                }
                else
                {
                    stop++;
                }
            }
            if (start != n)
            {
                if (start == stop)
                {
                    ans.Add($"{nums[start]}");
                }
                else
                {
                    ans.Add($"{nums[start]}->{nums[stop]}");
                }
            }
            return ans;
        }

        public static bool IsPalindrome(ListNode head)
        {
            return false;
        }

        public static bool IsAnagram(string s, string t)
        {
            int nS = s.Length, nT = t.Length;
            if (nS != nT)
            {
                return false;
            }
            int[] charsS = new int[26];
            int[] charsT = new int[26];
            for (int i = 0; i < nS; i++)
            {
                charsS[s[i] - 'a']++;
                charsT[t[i] - 'a']++;
            }
            for (int i = 0; i < 26; i++)
            {
                if (charsS[i] != charsT[i])
                {
                    return false;
                }
            }
            return true;
        }
    }
}
