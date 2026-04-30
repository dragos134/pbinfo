namespace problem
{
    // Relative Ranks - #506
    // https://leetcode.com/problems/relative-ranks

    public class RelativeRanks
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            var result = test.FindRelativeRanks([10, 3, 8, 9, 4]);

            foreach (var rank in result)
            {
                Console.Write($"{rank} ");
            }

        }
    }

    public class Solution
    {
        public string[] FindRelativeRanks(int[] score)
        {
            int s_size = score.Length;
            Dictionary<int, string> clasament = new Dictionary<int, string>();
            int[] score_cpy = new int[s_size];
            string[] ret = new string[s_size];
            for (int i = 0; i < s_size; i++)
            {
                score_cpy[i] = score[i];
            }
            score.Sort();

            for (int i = 0; i < s_size; i++)
            {
                clasament[score[i]] = (s_size - i).ToString();
            }

            for (int i = 0; i < s_size; i++)
            {
                if (clasament[score_cpy[i]] == "1")
                {
                    ret[i] = "Gold Medal";
                }
                else if (clasament[score_cpy[i]] == "2")
                {
                    ret[i] = "Silver Medal";
                }
                else if (clasament[score_cpy[i]] == "3")
                {
                    ret[i] = "Bronze Medal";
                }
                else
                {
                    ret[i] = clasament[score_cpy[i]];
                }
            }

            return ret;
        }
    }
}