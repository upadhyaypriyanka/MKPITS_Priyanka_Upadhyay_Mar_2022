using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace year_leap_year_or_not
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int year;
            Console.WriteLine("Enter  year");
            year = Convert.ToInt32(Console.ReadLine());

            if ((year%100==0 && year%400==0) || year%4==0)
            {
                Console.WriteLine("{0} is leap year", year);
            }
            else
            {
                Console.WriteLine("{0} is not leap year", year);
            }
            Console.ReadLine();
        }
    }
}
