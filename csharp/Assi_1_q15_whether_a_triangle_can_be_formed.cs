using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace whether_a_triangle_can_be_formed
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter first side of triangle:");  
            int sidea = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter second side of triangle:");
            int sideb= Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter third side of triangle:");
            int sidec = Convert.ToInt32(Console.ReadLine());
            if(sidea==sideb && sideb == sidec)
            {
                Console.WriteLine("This is an equilateral triangle.");
            }
           else if (sidea == sideb || sideb == sidec || sidec==sidea)
            {
                Console.WriteLine("This is an isosceles triangle.");
            }
            else
            {
                Console.WriteLine("This is a scalene triangle.");
            }
            Console.ReadLine();
        }
    }
}
