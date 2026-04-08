namespace problem
{
    // ToRemember - cautare binare pt a gasi radical
    public class SqrtX
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public int MySqrt(int x)
        {
            if (x == 0) return 0;
            if (x > 0 && x < 4) return 1;
            int left = 2;
            int right = x / 2;
            while (left < right)
            {
                int mid = (left + right) / 2;
                if (mid * mid == x || mid <= x / mid && mid + 1 > x / (mid + 1))
                {
                    return mid;
                }
                if (mid <= x / mid)
                {
                    left = mid + 1;
                }
                if (mid >= x / mid)
                {
                    right = mid - 1;
                }
            }
            return left;
        }
    }
}