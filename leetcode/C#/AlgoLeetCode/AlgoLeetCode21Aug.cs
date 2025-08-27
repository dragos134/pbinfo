using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AlgoLeetCode
{
    public static class AlgoLeetCode21Aug
    {
        public static int MajorityElement1(int[] nums)
        {
            Dictionary<int, int> numsCount = new Dictionary<int, int>();
            int n = nums.Length;
            for (int i = 0; i < n; i++)
            {
                numsCount.TryAdd(nums[i], 0);
            }

            for (int i = 0; i < n; i++)
            {
                numsCount[nums[i]]++;
            }

            var maxCount = 0;
            var maxNum = 0;
            foreach (var (key, value) in numsCount)
            {
                if (value > maxCount)
                {
                    maxCount = value;
                    maxNum = key;
                }
            }
            return maxNum;
        }

        public static int LengthOfLastWord1(string s)
        {
            int sSize = s.Length;
            int k = sSize - 1;
            int count = 0;
            while (k >= 0 && s[k] == ' ')
            {
                k--;
            }
            while (k >= 0 && s[k] != ' ')
            {
                count++;
                k--;
            }
            return count;
        }

        public static void MoveZeroes1(int[] nums)
        {
            int k = 0;
            for (int i = 0; i < nums.Length; i++)
            {
                if (nums[i] != 0)
                {
                    int aux = nums[i];
                    nums[i] = nums[k];
                    nums[k] = aux;
                    k++;
                }
            }
        }

        public static bool CanWinNim1(int n)
        {
            return false;
        }

        public static string ReverseVowels1(string s)
        {
            var sSize = s.Length;
            char[] chars = s.ToCharArray();
            var vowels = "aeiou";
            int a = 0;
            int b = sSize - 1;
            while (a < b)
            {
                while (!vowels.Contains(char.ToLower(chars[a])))
                {
                    a++;
                }
                while (!vowels.Contains(char.ToLower(chars[b])))
                {
                    b--;
                }
                if (a < b)
                {
                    (chars[a], chars[b]) = (chars[b], chars[a]);
                }
                a++;
                b--;
            }
            return chars.ToString() ?? "";
        }
    }
}
