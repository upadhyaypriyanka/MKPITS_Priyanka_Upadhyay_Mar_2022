using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace roll_no_name_per
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int rollNo;
            string name;
            int phyMarks,chemarks,mathmarks;
            Console.Write("Enter roll no:");
            rollNo = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter your name:");
            name = Console.ReadLine();
            Console.Write("Enter physics marks:");
           phyMarks = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter chemistry marks:");
            chemarks = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter maths name:");
           mathmarks = Convert.ToInt32(Console.ReadLine());
            int total = phyMarks + chemarks + mathmarks;
            Console.WriteLine("Total= " + total);
            float per = (total / 300.0f) * 100.0f;
            Console.WriteLine("Percentage= " + per);
            if (per >= 65)
            {
                Console.WriteLine("Division= First");
            }
            else if (per < 65 && per>=50)
            {
                Console.WriteLine("Division= Second");
            }
            else if (per < 50 && per >= 40)
            {
                Console.WriteLine("Division= Third");
            }
            else
            {
                Console.WriteLine("You are fail");
            }
            Console.ReadLine();

        }
    }
}
