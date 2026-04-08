namespace problem
{
    public class MergeSortedLists
    {
        public static void Main(String[] args)
        {

        }
    }

    public class ListNode
    {
        public int val;
        public ListNode next;
        public ListNode(int val = 0, ListNode next = null)
        {
            this.val = val;
            this.next = next;
        }
    }

    public class Solution
    {
        public ListNode MergeTwoLists(ListNode list1, ListNode list2)
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