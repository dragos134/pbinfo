namespace problem
{
    // Next Greater Element I - #496
    // https://leetcode.com/problems/next-greater-element-i

    public class NextGreater
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            var rez = test.NextGreaterElement([4, 1, 2], [1, 3, 4, 2]);
            foreach (var i in rez)
            {
                Console.Write($"{i} ");
            }
        }
    }

    public class Solution
    {
        public int[] NextGreaterElement(int[] nums1, int[] nums2)
        {
            int[] freq = new int[10001];
            int[] stack = new int[1001];
            for (int i = 0; i < nums2.Length; i++)
            {
                if (stack[0] == 0 || nums2[i] <= stack[stack[0]])
                {
                    stack[++stack[0]] = nums2[i];
                }
                else
                {
                    while (nums2[i] > stack[stack[0]] && stack[0] > 0)
                    {
                        freq[stack[stack[0]]] = nums2[i];
                        stack[0]--;
                    }
                    stack[++stack[0]] = nums2[i];
                }
            }

            for (int i = 0; i < nums1.Length; i++)
            {
                nums1[i] = freq[nums1[i]];
                if (nums1[i] == 0)
                {
                    nums1[i] = -1;
                }
            }

            return nums1;
        }
    }
}