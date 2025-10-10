namespace AlgoLeetCode
{
    public static class AlgoPbInfo
    {
        public static void f()
        {
            int n = int.Parse(Console.ReadLine());
            int cifMin = 10, nrMax = 0;
            while (true)
            {
                string[] line = Console.ReadLine().Split();
                if (line == null)
                {
                    break;
                }

                foreach (string stringVal in line)
                {
                    int numVal = int.Parse(stringVal);
                    int cpyNumVal = numVal;
                    while (numVal >= 10)
                    {
                        numVal /= 10;
                    }

                    if (numVal < cifMin)
                    {
                        nrMax = cpyNumVal;
                        cifMin = numVal;
                    }
                    if (numVal == cifMin && cpyNumVal > nrMax)
                    {
                        nrMax = cpyNumVal;
                    }
                }
            }
            Console.WriteLine(nrMax);
        }
    }
}
