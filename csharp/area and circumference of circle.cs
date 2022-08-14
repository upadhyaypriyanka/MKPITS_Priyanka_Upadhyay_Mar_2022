using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Area_and_circumference_of_circle
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int radius;
            Console.WriteLine("Enter radius");
            radius = Convert.ToInt32(Console.ReadLine());
            float area = 3.14f * radius * radius;
            Console.WriteLine("Area of circle is: " + area);
            float circ = 2 * 3.14f * radius;
            Console.WriteLine("Circumference of circle is: " + circ);
            Console.ReadLine();
        }
    }
}
