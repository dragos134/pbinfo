namespace problem
{
    public class RemoveDuplicates
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
        public ListNode DeleteDuplicates(ListNode head)
        {
            ListNode cpy = head;
            while (head != null)
            {
                ListNode temp = head;
                while (temp.next != null && temp.next.val == temp.val)
                {
                    temp = temp.next;
                }
                head.next = temp.next;
                head = head.next;
            }
            return cpy;
        }
    }
}