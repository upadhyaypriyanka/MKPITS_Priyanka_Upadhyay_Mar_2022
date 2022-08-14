using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace greater_number
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // wap to accept two number and print greater number
            int num1, num2;
            Console.WriteLine("Enter first number");
            num1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter Second number");
            num2 = Convert.ToInt32(Console.ReadLine());
            if (num1 > num2)
            {
                Console.WriteLine(" greater number is " + num1);
            }
            else
            {
                Console.WriteLine(" greater number is " + num2);
            }
            Console.ReadLine();

        }
    }
}
