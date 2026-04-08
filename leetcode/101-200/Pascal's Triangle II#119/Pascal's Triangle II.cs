namespace problem
{
    public class PascalTriangleII
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public IList<int> GetRow(int rowIndex)
        {
            int[] ans = new int[rowIndex + 1];
            ans[0] = 1;
            ans[rowIndex] = 1;
            long numarator = rowIndex;
            long numitor = 1;
            long rez = 1;
            for (int i = 1; i <= rowIndex / 2; i++)
            {
                rez = rez * numarator / numitor;
                ans[i] = (int)rez;
                ans[rowIndex - i] = (int)rez;
                numarator--;
                numitor++;
            }
            return ans;
        }
    }
}