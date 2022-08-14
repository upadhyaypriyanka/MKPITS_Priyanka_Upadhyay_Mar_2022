using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace even_number
{
    internal class Program
    {
        static void Main(string[] args)
            // wap to accept a no. and print whether it is even no. or odd no.
        {
            int num;
            Console.WriteLine("Enter number ");
            num = Convert.ToInt32(Console.ReadLine());

            if (num % 2 == 0)
            {
                Console.WriteLine("Even number = " + num);
            }
            else
            {
                Console.WriteLine("Odd number = " + num);
            }
            Console.ReadLine();

        }
    }
}
