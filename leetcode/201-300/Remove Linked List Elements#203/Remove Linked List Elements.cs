namespace problem
{
    // #ToRemember
    public class RemoveElement
    {
        public static void Main(String[] args)
        {

        }
    }

    public class ListNode
    {
        public int val;
        public ListNode next;
        public ListNode(int x)
        {
            val = x;
            next = null;
        }
    }

    public class Solution
    {
        public ListNode RemoveElements(ListNode head, int val)
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
    }
}