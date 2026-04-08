namespace problem
{
    public class AddStrings
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            Console.WriteLine(test.AddStrings("9999", "1"));
        }
    }

    public class Solution
    {
        public string AddStrings(string num1, string num2)
        {
            int n1_size = num1.Length, n2_size = num2.Length;
            char[] rez = new char[10002];
            int carry = 0, i = 0;
            while(n1_size > 0 && n2_size > 0)
            {
                int int_value = num1[n1_size - 1] + num2[n2_size - 1] - 2 * '0' + carry;
                rez[i] = (char)(int_value % 10 + '0');
                carry = int_value / 10;
                n1_size--;
                n2_size--;
                i++;
            }

            while(n1_size > 0)
            {
                int int_value = num1[n1_size - 1] - '0' + carry;
                rez[i] = (char)(int_value % 10 + '0');
                carry = int_value / 10;
                n1_size--;
                i++;
            }

            while(n2_size > 0)
            {
                int int_value = num2[n2_size - 1] - '0' + carry;
                rez[i] = (char)(int_value % 10 + '0');
                carry = int_value / 10;
                n2_size--;
                i++;
            }
            
            if(carry == 1)
            {
                rez[i] = '1';
                i++;
            }

            Array.Resize(ref rez, i);
            
            return new string(rez.Reverse().ToArray());
        }
    }
}