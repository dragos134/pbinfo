namespace problem
{
    // Island Perimeter - #463
    // https://leetcode.com/problems/island-perimeter

    public class IslandPerimeter
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            Console.WriteLine(test.IslandPerimeter([[0, 1, 0, 0], [1, 1, 1, 0], [0, 1, 0, 0], [1, 1, 0, 0]]));
        }
    }

    public class Solution
    {
        public int IslandPerimeter(int[][] grid)
        {
            int lines = grid.Length;
            int columns = grid[0].Length;
            int perim = 0;
            for(int i = 0; i < lines; i++)
            {
                for(int j = 0; j < columns; j++)
                {
                    if(grid[i][j] == 0)
                    {
                        continue;
                    }

                    // check upper bound
                    if(i == 0)
                    {
                        perim++;
                    }
                    else
                    {
                        if(grid[i - 1][j] == 0)
                        {
                            perim++;
                        }
                    }

                    // check left bound
                    if(j == 0)
                    {
                        perim++;
                    }
                    else
                    {
                        if(grid[i][j - 1] == 0)
                        {
                            perim++;
                        }
                    }

                    // check lower bound
                    if(i == lines - 1)
                    {
                        perim++;
                    }
                    else
                    {
                        if(grid[i + 1][j] == 0)
                        {
                            perim++;
                        }
                    }

                    // check right bound
                    if(j == columns - 1)
                    {
                        perim++;
                    }
                    else
                    {
                        if(grid[i][j + 1] == 0)
                        {
                            perim++;
                        }
                    }
                }
            }

            return perim;
        }
    }
}