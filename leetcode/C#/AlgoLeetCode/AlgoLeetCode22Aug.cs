namespace AlgoLeetCode
{
    public static class AlgoLeetCode22Aug
    {
        public static bool IsPowerOfThree(int n)
        {
            long p = 1;
            while (p < n)
            {
                p *= 3;
            }
            return p == n;
        }

        public static int[] Intersection1(int[] nums1, int[] nums2)
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

        public static int FirstUniqChar1(string s)
        {
            int sSize = s.Length;
            int[] duplicateChars = new int[26];
            for (int i = 0; i < sSize; i++)
            {
                if (duplicateChars[s[i] - 'a'] == 1)
                {
                    continue;
                }
                bool firstUnique = true;
                for (int j = i + 1; j < sSize; j++)
                {
                    if (s[i] == s[j])
                    {
                        duplicateChars[s[i] - 'a'] = 1;
                        firstUnique = false;
                        break;
                    }
                }
                if (firstUnique)
                {
                    return i;
                }
            }
            return -1;
        }

        public static char FindTheDifference1(string s, string t)
        {
            int s1 = 0, s2 = 0;
            for (int i = 0; i < s.Length; i++)
            {
                s1 += s[i];
            }
            for (int i = 0; i < t.Length; i++)
            {
                s2 += t[i];
            }
            return (char)(s2 - s1);
        }

        public static bool DetectCapitalUse(string word)
        {
            bool allCapital = true;
            bool allLower = true;
            bool isFirstCapital = !char.IsLower(word[0]);
            for (int i = 1; i < word.Length; i++)
            {
                if (char.IsLower(word[i]))
                {
                    allCapital = false;
                }
                else
                {
                    allLower = false;
                }
            }
            return allLower || isFirstCapital && allCapital;
        }
    }
}
