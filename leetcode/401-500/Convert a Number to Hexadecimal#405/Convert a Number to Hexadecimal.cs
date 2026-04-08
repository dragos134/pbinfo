namespace problem
{
    // Convert a Number to Hexadecimal - #405
    // https://leetcode.com/problems/convert-a-number-to-hexadecimal

    // #ToRemember - two's complement for negative numbers
    public class NumberToHex
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            Console.WriteLine(test.ToHex(-1));
        }
    }

    public class Solution
    {
        public string ToHex(int num)
        {
            uint my_num;
            if(num >= 0)
            {
                my_num = (uint)num;
            }
            else
            {
                my_num = (uint)(uint.MaxValue + num + 1);
            }
            uint cpy_num = my_num;
            int digits_size = 1;

            while(my_num > 15)
            {
                digits_size++;
                my_num /= 16;
            }
            my_num = cpy_num;

            char[] digits_hex = new char[digits_size];
            for(int i = digits_size - 1; i >= 0; i--)
            {
                digits_hex[i] = IntToChar((int)(my_num % 16));
                my_num /= 16;
            }

            return new string(digits_hex);
        }

        public char IntToChar(int n)
        {
            if(n > 15 || n < 0)
            {
                return '\0';
            }

            if(n < 10)
            {
                return (char)((char)n + '0');
            }

            // if n > 9 <==> n >= 10
            return (char)((char)(n - 10) + 'a');
        }
    }


}