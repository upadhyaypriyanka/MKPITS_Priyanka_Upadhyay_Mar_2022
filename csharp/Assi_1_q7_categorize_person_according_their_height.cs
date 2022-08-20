using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace categorize_the_person_according_to_thier_height
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int height;
            Console.WriteLine("Enter height in centimeter");
            height = Convert.ToInt32(Console.ReadLine());
            if (height<150)
            {
                Console.WriteLine("The person is Dwarf.");
            }
            else if(height>=150 && height <= 165){
                Console.WriteLine("The person is  average heighted.");
            }
            else if (height>=165 && height<=195)
            {
                Console.WriteLine("The person is taller.");
            }
            else
            {
                Console.WriteLine("Abnormal height.");
            }
            Console.ReadLine();
        }
    }
}
