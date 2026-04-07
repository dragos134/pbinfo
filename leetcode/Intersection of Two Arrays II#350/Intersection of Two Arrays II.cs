namespace problem
{
    public class IntersectionOfTwoArrays
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            var rez = [];
            Console.WriteLine(test.Intersect([1, 2, 2, 1], [2, 2]));
        }
    }

    public class Solution
    {
        public int[] Intersect(int[] nums1, int[] nums2)
        {
            int n1_size = nums1.Length;
            int n2_size = nums2.Length;
            int[] intersect = new int[n1_size + n2_size];
            int i_size = 0;
            for(int i = 0; i < n1_size; i++)
            {
                for(int j = 0; j < n2_size; j++)
                {
                    if(nums1[i] == nums2[j])
                    {
                        intersect[i_size++] = nums2[j];
                        nums2[j] = -1;
                        break;
                    }
                }
            }

            return Array.Resize(ref intersect, i_size);
        }
    }
}