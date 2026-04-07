namespace problem
{
    public class ReverseString
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public void ReverseString(char[] s)
        {
            int s_size = s.Length;
            for(int i = 0; i < s_size / 2; i++)
            {
                char aux = s[i];
                s[i] = s[s_size - i - 1];
                s[s_size - i - 1] = aux;
            }
        }
    }
}