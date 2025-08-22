using System.Text;

namespace AlgoLeetCode
{
    public static class AlgoLeetCode20Aug
    {
        public static IList<IList<int>> Generate1(int numRows)
        {
            var ans = new List<IList<int>>
            {
                new List<int>()
            };
            ans[0].Add(1);

            for (int i = 1; i < numRows; i++)
            {
                ans.Add([]);
                ans[i].Add(1);
                for (int j = 1; j < i; j++)
                {
                    ans[i].Add(ans[i - 1][j - 1] + ans[i - 1][j]);
                }
                ans[i].Add(1);
            }

            return ans;
        }

        public static int AddDigits1(int num)
        {
            var sum = num;
            while (num > 9)
            {
                var cpyNum = num;
                sum = 0;
                while (cpyNum > 0)
                {
                    sum = sum + cpyNum % 10;
                    cpyNum /= 10;
                }
                num = sum;
            }

            return sum;
        }

        public static bool IsPerfectSquare1(int num)
        {
            int i = 0;
            while (i * i < num)
            {
                i++;
            }
            return i * i == num;
        }

        public static int[] CountBits1(int n)
        {
            int[] ans = new int[n + 1];
            for (int i = 0; i <= n; i++)
            {
                var cpyNr = i;
                ans[i] = 0;
                while (cpyNr > 0)
                {
                    ans[i] = ans[i] + cpyNr % 2;
                    cpyNr /= 2;
                }
            }

            return ans;
        }

        public static bool IsPalindrome1(string s)
        {
            string letters = "abcdefghijklmnopqrstuvwxyz0123456789";
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < s.Length; i++)
            {
                var l = char.ToLower(s[i]);
                if (letters.Contains(l))
                {
                    sb.Append(l);
                }
            }
            var newS = sb.ToString();

            var sLen = newS.Length;
            for (int i = 0; i < sLen / 2; i++)
            {
                if (newS[i] != newS[sLen - i - 1])
                {
                    return false;
                }
            }

            return true;
        }
    }
}
