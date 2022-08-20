using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace which_quadrant_the_coordinate_point_lies
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int qua1, qua2;
            Console.Write("the value for X coordinate:");
            qua1 = Convert.ToInt32(Console.ReadLine());
            Console.Write("the value for Y coordinate:");
            qua2 = Convert.ToInt32(Console.ReadLine());
            if (qua1 > 0 && qua2 > 0)
            {
                Console.WriteLine("The coordinate point ({0},{1}) lies in the First quadrant.", qua1, qua2);
            }
            else if (qua1 < 0 && qua2 > 0)
            {
                Console.WriteLine("The coordinate point ({0},{1}) lies in the Second quadrant.", qua1, qua2);
            }
            else if (qua1 < 0 && qua2 < 0)
            {
                Console.WriteLine("The coordinate point ({0},{1}) lies in the Third quadrant.", qua1, qua2);
            }
            else if (qua1 > 0 && qua2 < 0)
            {
                Console.WriteLine("The coordinate point ({0},{1}) lies in the Fourth quadrant.", qua1, qua2);
            }
            Console.ReadLine();
        }
    }
}
