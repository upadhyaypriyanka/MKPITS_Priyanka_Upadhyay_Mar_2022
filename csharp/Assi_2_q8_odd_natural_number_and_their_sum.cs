using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace odd_natural_number_and_their_sum
{
    internal class Program
    {
        static void Main(string[] args)
        { int n,sum=0;
            Console.WriteLine("Enter number");
            n = Convert.ToInt32(Console.ReadLine());
            for(int i=1; i <= n; i++)
            {
                Console.WriteLine("{0}", 2 * i - 1);
                int a = 2 * i - 1;
                 sum = sum + a;
            }
            Console.WriteLine("Sum of odd number is: {0}", sum);
            Console.ReadLine();
        }
    }
}
