namespace problem
{
    public class ExcelSheetNumber
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public int TitleToNumber(string columnTitle)
        {
            int p = 1, n = columnTitle.Length;
            int ans = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                ans = ans + p * (columnTitle[i] - 'A' + 1);
                p *= 26;
            }
            return ans;
        }
    }
}