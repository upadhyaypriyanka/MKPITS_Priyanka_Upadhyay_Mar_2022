using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace number_positive_or_negative
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num1;
            Console.WriteLine("Enter  number");
            num1 = Convert.ToInt32(Console.ReadLine());

            if (num1>0)
            {
                Console.WriteLine("{0} is a positive number",num1);
            }
            else
            {
                Console.WriteLine("{0} is a negative number",num1);
            }
            Console.ReadLine();
        }
    }
}
