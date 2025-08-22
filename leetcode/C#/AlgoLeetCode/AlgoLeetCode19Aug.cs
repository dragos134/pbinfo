namespace AlgoLeetCode
{
    public static class AlgoLeetCode19Aug
    {
        public static int FindKthLargest(int[] nums, int k)
        {
            var numsSize = nums.Length;
            for (int i = 0; i < numsSize - 1; i++)
            {
                for (int j = i + 1; j < numsSize; j++)
                {
                    if (nums[i] < nums[j])
                    {
                        var aux = nums[i];
                        nums[i] = nums[j];
                        nums[j] = aux;
                    }
                }
            }

            return nums[k];
        }

        public static int FindKthLargest2(int[] nums, int k)
        {
            Array.Sort(nums, (a, b) => b.CompareTo(a));
            return nums[k - 1];
        }

        public static int MaxProduct1(string[] words)
        {
            int maxProd = 0;
            for (int i = 0; i < words.Length - 1; i++) {
                for (int j = i + 1; j < words.Length; j++) {
                    if (!Intersects(words[i], words[j]))
                    {
                        int currProd = words[i].Length * words[j].Length;
                        if(currProd > maxProd)
                        {
                            maxProd = currProd;
                        }
                    }
                }
            }

            return maxProd;
        }

        public static int MaxProduct2(string[] words)
        {
            int maxProd = 0;
            int n = words.Length;
            int[][] vec = new int[n][];
            for (int i = 0; i < n; i++) {
                vec[i] = new int[26];
                for (int k = 0; k < words[i].Length; k++)
                {
                    var ltr = words[i][k];
                    vec[i][ltr - 'a'] = 1;
                }

                for(int j = 0; j < i; j++)
                {
                    if (!CheckCommon(vec[i], vec[j]))
                    {
                        maxProd = Math.Max(maxProd, words[i].Length * words[j].Length);
                    }
                }

            }

            return maxProd;
        }

        public static bool ContainsDuplicate1(int[] nums)
        {
            Array.Sort(nums);
            for (int i = 0; i < nums.Length - 1; i++) 
            {
                if (nums[i] == nums[i + 1]) return true;
            }
            return false;
        }

        private static bool CheckCommon(int[] a, int[] b)
        {
            for(int i = 0; i < 26; i++)
            {
                if(a[i] + b[i] == 2)
                {
                    return true;
                }
            }
            return false;
        }

        private static bool Intersects(string word1, string word2)
        {
            for (int i = 0; i < word1.Length; i++) {
                if(word2.Contains(word1[i]))
                {  return true; }
            }
            return false;
        }
    }
}
