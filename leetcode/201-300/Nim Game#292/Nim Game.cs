namespace problem
{
    // Nim Game - #292
    // https://leetcode.com/problems/nim-game

    public class NimGame
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public bool CanWinNim(int n)
        {
            return (n % 4 != 0);
        }
    }
}