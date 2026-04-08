namespace problem
{
    public class HappyNumber
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public bool IsHappy(int n)
        {
            int sum = 0, cpyN = n;
            while (sum != 1)
            {
                sum = 0;
                while (n > 0)
                {
                    sum += (n % 10) * (n % 10);
                    n /= 10;
                }
                if (sum == 4)
                {
                    return false;
                }
                n = sum;
            }
            return true;
        }
    }
}