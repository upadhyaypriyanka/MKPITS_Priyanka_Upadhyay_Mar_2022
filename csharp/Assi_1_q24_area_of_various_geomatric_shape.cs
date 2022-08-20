using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace area_of_the_various_geometrical_shape
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int choice;
            Console.WriteLine("Enter 1 for area of circle:");
            Console.WriteLine("Enter 2 for area of rectangle:");
            Console.WriteLine("Enter 3 for area of triangle:");
            choice = Convert.ToByte(Console.ReadLine());
            switch (choice)
            {
                case 1:
                    Console.Write("Enter radius of the circle: ");
                    int radius = Convert.ToInt32(Console.ReadLine());
                    float carea = 3.14f * radius * radius;
                    Console.WriteLine("Area of circle is: {0}", carea);
                    break;
                case 2:
                       Console.WriteLine("Enter length of the rectangle: ");
                    Console.WriteLine("Enter width of the rectangle: ");
                    int length = Convert.ToInt32(Console.ReadLine());
                    int width = Convert.ToInt32(Console.ReadLine());
                    float rarea = length*width;
                    Console.WriteLine("Area of rectangle is: {0}", rarea);
                    break;

                case 3:
                    Console.WriteLine("Enter height of the triangle: ");
                    Console.WriteLine("Enter base of the triangle: ");
                    float height = Convert.ToSingle(Console.ReadLine());
                    float Base = Convert.ToSingle(Console.ReadLine());
                    float tarea = (height * Base)/2;
                    Console.WriteLine("Area of triangle is: {0}", tarea);
                    break;
                default:
                    Console.WriteLine("Invalid choice");
                    break;
            }

            Console.ReadLine();
        }
    }
}
