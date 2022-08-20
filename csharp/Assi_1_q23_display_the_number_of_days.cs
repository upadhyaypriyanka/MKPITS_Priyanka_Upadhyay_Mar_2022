using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace the_number_of_days_for_this_month
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter number(1-12):");
            int num = Convert.ToInt32(Console.ReadLine());
            if (num == 1)
            {
                Console.WriteLine("Month have 31 days");
            }
            else if (num == 2)
            {
                Console.WriteLine("Month have 28 days");
            }
            else if (num == 3)
            {
                Console.WriteLine("Month have 31 days");
            }
            else if (num == 4)
            {
                Console.WriteLine("Month have 30 days");
            }
            else if (num == 5)
            {
                Console.WriteLine("Month have 31 days");
            }
            else if (num == 6)
            {
                Console.WriteLine("Month have 30 days");
            }
            else if (num == 7)
            {
                Console.WriteLine("Month have 31 days");
            }
            else if (num == 8)
            {
                Console.WriteLine("Month have 31 days");
            }
            else if (num == 9)
            {
                Console.WriteLine("Month have 30 days");
            }
            else if (num == 10)
            {
                Console.WriteLine("Month have 31 days");
            }
            else if (num == 11)
            {
                Console.WriteLine("Month have 30 days");
            }
            else if (num == 12)
            {
                Console.WriteLine("Month have 31 days");
            }


            else
            {
                Console.WriteLine("Invalid choice");
            }
            Console.ReadLine();
        }
    }
}
