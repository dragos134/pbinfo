namespace problem
{
    // Add Digits - #258
    // https://leetcode.com/problems/add-digits

    public class AddDigits
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public int AddDigits(int num)
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
    }
}