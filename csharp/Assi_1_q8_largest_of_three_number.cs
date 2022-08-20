using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace largest_of_three_numbers
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num1, num2, num3;
            Console.WriteLine("Enter 1st number");
            num1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter 2nd number");
            num2 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter 3rd number");
            num3 = Convert.ToInt32(Console.ReadLine());
            if(num1>num2 && num1 > num3)
            {
                Console.WriteLine("The 1st Number is the greatest among three");
            }
            else if (num2 > num1 && num2 > num3)
            {
                Console.WriteLine("The 2nd Number is the greatest among three");
            }
            else
            {
                Console.WriteLine("The 3rd Number is the greatest among three");
            }
            Console.ReadLine();
        }
    }
}
