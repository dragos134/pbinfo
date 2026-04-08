namespace problem
{
    public class PlusOne
    {
        public static void Main(String[] args)
        {

        }
    }
    public class Solution
    {
        public int[] PlusOne(int[] digits)
        {
            int n = digits.Length;
            int carry = 0;
            digits[n - 1]++;
            carry = digits[n - 1] / 10;
            digits[n - 1] %= 10;
            for (int i = n - 2; i >= 0; i--)
            {
                digits[i] = digits[i] + carry;
                carry = digits[i] / 10;
                digits[i] = digits[i] % 10;
            }
            if (digits[0] == 0)
            {
                int[] ans = new int[n + 1];
                ans[0] = 1;
                for (int i = 0; i < n; i++)
                {
                    ans[i + 1] = digits[i];
                }
                return ans;
            }
            return digits;
        }
    }
}