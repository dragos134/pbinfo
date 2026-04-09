namespace problem
{
    // Construct the Rectangle - #492
    // https://leetcode.com/problems/construct-the-rectangle

    public class Rectangle
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            var rez = test.ConstructRectangle(122122);
            Console.WriteLine($"[{rez[0]}, {rez[1]}]");

            var test2 = new BetterSolution();
            var rez2 = test2.ConstructRectangle(122122);
            Console.WriteLine($"[{rez2[0]}, {rez2[1]}]");
        }
    }

    public class Solution
    {
        public int[] ConstructRectangle(int area)
        {
            int i = 1, min_l = int.MaxValue, min_w = int.MaxValue, min_dif = int.MaxValue;
            for (; i * i <= area; i++)
            {
                if (area % i != 0)
                {
                    continue;
                }

                int l = area / i, w = i;
                if (l - w < min_dif)
                {
                    min_l = l;
                    min_w = w;
                    min_dif = l - w;
                }
            }

            return [min_l, min_w];
        }
    }

    public class BetterSolution
    {
        public int[] ConstructRectangle(int area)
        {
            int start = (int)Math.Sqrt(area), w = 0, l = 0;
            while (start > 0)
            {
                if (area % start == 0)
                {
                    w = start;
                    l = area / start;
                    break;
                }
                start--;
            }

            return [l, w];
        }
    }
}