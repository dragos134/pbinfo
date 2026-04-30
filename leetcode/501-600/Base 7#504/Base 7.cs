namespace problem
{
    // Base 7 - #504
    // https://leetcode.com/problems/base-7

    public class BaseSeven
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            Console.WriteLine(test.ConvertToBase7(7));
        }
    }

    public class Solution
    {
        public string ConvertToBase7(int num)
        {
            char[] ret = new char[14];
            int ret_size = 0;
            bool is_negative = false;

            if (num == 0)
            {
                return "0";
            }

            if (num < 0)
            {
                num = -num;
                is_negative = true;
            }

            while (num > 0)
            {
                ret[ret_size++] = (char)(num % 7 + '0');
                num /= 7;
            }

            if (is_negative)
            {
                ret[ret_size++] = '-';
            }

            Array.Resize(ref ret, ret_size);

            // reversing the char array
            for (int i = 0; i < ret_size / 2; i++)
            {
                char aux = ret[i];
                ret[i] = ret[ret_size - i - 1];
                ret[ret_size - i - 1] = aux;
            }

            return new string(ret);
        }
    }
}