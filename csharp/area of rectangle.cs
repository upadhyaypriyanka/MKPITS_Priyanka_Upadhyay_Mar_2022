using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace q3.area_of_rectangle
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int length, breadth;
            Console.WriteLine("Enter length");
            length = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter breadth");
            breadth = Convert.ToInt32(Console.ReadLine());
            int rect = length * breadth;
            Console.WriteLine("Area of rectangle is: " + rect);
            Console.ReadLine();

        }
    }
}
