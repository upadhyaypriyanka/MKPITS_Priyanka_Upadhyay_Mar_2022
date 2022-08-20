using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace number_even_or_odd
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num1;
            Console.WriteLine("Enter first number");
            num1 = Convert.ToInt32(Console.ReadLine());
            
            if (num1%2==0)
            {
                Console.WriteLine("{0} is an even integer",num1);
            }
            else
            {
                Console.WriteLine("{0} is an odd integer",num1);
            }
            Console.ReadLine();
        }
    }
}
