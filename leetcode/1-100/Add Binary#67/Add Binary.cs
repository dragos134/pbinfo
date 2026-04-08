namespace problem
{
    // #ToReview
    public class AddBinary
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public string AddBinary(string a, string b)
        {
            int n = a.Length, m = b.Length;
            string res = "";
            if (n > m)
            {
                while (m < n)
                {
                    b = '0' + b;
                    m++;
                }
            }
            if (m > n)
            {
                while (n < m)
                {
                    a = '0' + a;
                    n++;
                }
            }

            int carry = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                int localRes = (a[i] - '0') + (b[i] - '0') + carry;
                carry = localRes / 2;
                localRes = localRes % 2;
                res = (char)(localRes + '0') + res;
            }

            if (carry == 1)
            {
                res = '1' + res;
            }

            return res;
        }
    }
}