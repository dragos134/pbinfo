namespace problem
{
    public class GuessNumber
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            Console.WriteLine(test.GuessNumber(1690815734));
        }
    }

    public class Solution : GuessGame
    {
        public int GuessNumber(int n)
        {
            int st = 1, dr = n;
            while(st <= dr)
            {
                int mij = st + (dr - st) / 2;
                int guessed = guess(mij);
                if(guessed == 0)
                {
                    return mij;
                }
                else if (guessed == 1)
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

    public class GuessGame
    {
        public int guess(int n)
        {
            int to_guess = 1049889538;
            if(n > to_guess)
            {
                return -1;
            }
            if(n < to_guess)
            {
                return 1;
            }
            return 0;
        }
    }
}