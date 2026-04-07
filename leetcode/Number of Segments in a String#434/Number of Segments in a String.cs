namespace problem
{
    public class SegmentInString
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            Console.WriteLine(test.CountSegments("Hello, my name is John"));
        }
    }

    public class Solution
    {
        public int CountSegments(string s)
        {
            int s_size = s.Length;
            int i = 0;
            int res = 0;
            while(i < s_size)
            {
                while(i < s_size && s[i] == ' ')
                {
                    i++;
                }
                if(i >= s_size)
                {
                    break;
                }
                res++;
                while(i < s_size && s[i] != ' ')
                {
                    i++;
                }
            }
            return res;
        }
    }
}