namespace problem
{
    // #ToRemember
    public class IntersectionTwoLLists
    {
        public static void Main(String[] args)
        {

        }
    }

    public class ListNode
    {
        public int val;
        public ListNode next;
        public ListNode(int x) { val = x; }
    }

    public class Solution
    {
        public ListNode GetIntersectionNode(ListNode headA, ListNode headB)
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
    }
}