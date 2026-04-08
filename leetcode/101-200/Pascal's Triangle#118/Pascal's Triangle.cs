namespace problem
{
    public class PascalTriangle
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public IList<IList<int>> Generate(int numRows)
        {
            var ans = new List<IList<int>>
        {
            new List<int>()
        };
            ans[0].Add(1);

            for (int i = 1; i < numRows; i++)
            {
                ans.Add([]);
                ans[i].Add(1);
                for (int j = 1; j < i; j++)
                {
                    ans[i].Add(ans[i - 1][j - 1] + ans[i - 1][j]);
                }
                ans[i].Add(1);
            }

            return ans;
        }
    }
}