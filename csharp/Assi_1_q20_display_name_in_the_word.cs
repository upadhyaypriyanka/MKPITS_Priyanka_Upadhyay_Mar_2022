using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace display_day_name_in_the_word
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter number(1-7):");
            int daynum = Convert.ToInt32(Console.ReadLine());
            if(daynum==1)
            {
                Console.WriteLine("Monday");
            }
            else if (daynum == 2)
            {
                Console.WriteLine("Tuesday");
            }
            else if (daynum == 3)
            {
                Console.WriteLine("Wednesday");
            }
            else if (daynum == 4)
            {
                Console.WriteLine("Thusday");
            }
            else if (daynum == 5)
            {
                Console.WriteLine("Friday");
            }
            else if (daynum == 6)
            {
                Console.WriteLine("Saturday");
            }
            else if (daynum == 7)
            {
                Console.WriteLine("Sunday");
            }
            else
            {
                Console.WriteLine("Invalid choice");
            }
            Console.ReadLine();
        }
    }
}
