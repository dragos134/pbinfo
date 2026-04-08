namespace problem
{
    public class FirstBadVersion
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            Console.WriteLine(test.FirstBadVersion(2126753390));
        }
    }

    public class Solution : VersionControl
    {
        public int FirstBadVersion(int n) 
        {
            int st = 1, dr = n;
            while(st <= dr)
            {
                int mij = st + (dr - st) / 2;
                if(IsBadVersion(mij) == false)
                {
                    st = mij + 1;
                }
                else
                {
                    dr = mij - 1;
                }
            }
            return st;
        }
    }

    public class VersionControl
    {
        public bool IsBadVersion(int version)
        {
            if(version >= 1702766719)
            {
                return true;
            }
            return false;
        }
    }
}