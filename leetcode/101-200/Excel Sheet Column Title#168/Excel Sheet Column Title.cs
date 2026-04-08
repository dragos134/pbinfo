namespace problem
{
    public class ExcelSheet
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public string ConvertToTitle(int columnNumber)
        {
            StringBuilder sb = new StringBuilder();
            while (columnNumber > 0)
            {
                int rest = (columnNumber - 1) % 26;
                sb.Append((char)(rest + 'A'));
                columnNumber = (columnNumber - 1) / 26;
            }
            char[] ans = sb.ToString().ToCharArray();
            Array.Reverse(ans);

            return new string(ans);
        }
    }
}