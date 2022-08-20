using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace declare_the_equivalent_description
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter the grade: ");
            char grade = Convert.ToChar(Console.ReadLine());
            if(grade=='e' || grade == 'E')
            {
                Console.WriteLine("You have chosen: Excellent");
            }
            else if (grade == 'v' || grade == 'V')
            {
                Console.WriteLine("You have chosen: Very Good");
            }
            else if (grade == 'g' || grade == 'G')
            {
                Console.WriteLine("You have chosen: Good");
            }
            else if (grade == 'a' || grade == 'A')
            {
                Console.WriteLine("You have chosen: Average");
            }
            else if (grade == 'f' || grade == 'F')
            {
                Console.WriteLine("You have chosen: Fail");
            }
            else
            {
                Console.WriteLine("Invalid grade");
            }
            Console.ReadLine();
        }
    }
}
