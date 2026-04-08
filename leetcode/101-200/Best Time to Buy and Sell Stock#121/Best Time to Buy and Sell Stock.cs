namespace problem
{
    // #ToReview - need to increase time efficiency
    public class BestTimeStocks
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public int MaxProfit(int[] prices)
        {
            int n = prices.Length, localMax = 0, maxDif = 0;
            int[] maxPrices = new int[n];

            for (int i = n - 1; i >= 0; i--)
            {
                if (prices[i] > localMax)
                {
                    localMax = prices[i];
                }
                maxPrices[i] = localMax;
            }
            for (int i = 0; i < n; i++)
            {
                if (maxPrices[i] - prices[i] > maxDif)
                {
                    maxDif = maxPrices[i] - prices[i];
                }
            }
            return maxDif;
        }
    }
}