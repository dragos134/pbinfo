namespace problem
{
    // Keyboard Row - #500
    // https://leetcode.com/problems/keyboard-row

    public class KeyboardRow
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            var rez = test.FindWords(["Hello", "Alaska", "Dad", "Peace"]);
            foreach (var w in rez)
            {
                Console.WriteLine(w);
            }
        }
    }

    public class Solution
    {
        public string[] FindWords(string[] words)
        {
            string[] ret = new string[words.Length];
            int ret_size = 0;
            Dictionary<char, short> mapping = new Dictionary<char, short>()
            {
                {'a', 2},
                {'A', 2},
                {'b', 3},
                {'B', 3},
                {'c', 3},
                {'C', 3},
                {'d', 2},
                {'D', 2},
                {'e', 1},
                {'E', 1},
                {'f', 2},
                {'F', 2},
                {'g', 2},
                {'G', 2},
                {'h', 2},
                {'H', 2},
                {'i', 1},
                {'I', 1},
                {'j', 2},
                {'J', 2},
                {'k', 2},
                {'K', 2},
                {'l', 2},
                {'L', 2},
                {'m', 3},
                {'M', 3},
                {'n', 3},
                {'N', 3},
                {'o', 1},
                {'O', 1},
                {'p', 1},
                {'P', 1},
                {'q', 1},
                {'Q', 1},
                {'r', 1},
                {'R', 1},
                {'s', 2},
                {'S', 2},
                {'t', 1},
                {'T', 1},
                {'u', 1},
                {'U', 1},
                {'v', 3},
                {'V', 3},
                {'w', 1},
                {'W', 1},
                {'x', 3},
                {'X', 3},
                {'y', 1},
                {'Y', 1},
                {'z', 3},
                {'Z', 3},
            };

            for (int i = 0; i < words.Length; i++)
            {
                bool ok = true;
                for (int j = 1; j < words[i].Length; j++)
                {
                    if (mapping[words[i][j]] != mapping[words[i][0]])
                    {
                        ok = false;
                        break;
                    }
                }
                if (ok)
                {
                    ret[ret_size++] = words[i];
                }
            }

            Array.Resize(ref ret, ret_size);
            return ret;
        }
    }

}