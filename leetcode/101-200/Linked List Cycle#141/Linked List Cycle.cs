namespace problem
{
    // #ToRemember - sa gasesc un ciclu intr-o lista inlantuita, folosesc 2 noduri, 
    // unul care merge cu un pas si altul care merge cu 2 pasi
    public class LinkedListCycle
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
        public bool HasCycle(ListNode head)
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
    }
}