namespace problem
{
    public class MergeSortedArray
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public void Merge(int[] nums1, int m, int[] nums2, int n)
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
    }
}