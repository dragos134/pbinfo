namespace problem
{
    // Intersection of Two Arrays - #349
    // https://leetcode.com/problems/intersection-of-two-arrays

    public class IntersectionTwoArrays
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public int[] Intersection(int[] nums1, int[] nums2)
        {
            int n = nums1.Length, m = nums2.Length;
            List<int> nums3 = new List<int>();
            for (int i = 0; i < n; i++)
            {
                bool intersects = false, exists = false;
                for (int j = 0; j < m; j++)
                {
                    if (nums1[i] == nums2[j])
                    {
                        intersects = true;
                        break;
                    }
                }
                if (intersects)
                {
                    int k = nums3.Count;
                    for (int z = 0; z < k; z++)
                    {
                        if (nums1[i] == nums3[z])
                        {
                            exists = true;
                        }
                    }
                    if (!exists)
                    {
                        nums3.Add(nums1[i]);
                    }
                }
            }
            return nums3.ToArray();
        }
    }
}