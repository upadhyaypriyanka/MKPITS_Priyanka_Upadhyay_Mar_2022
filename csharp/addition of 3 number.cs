using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace q4.Addition_of_three_number
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num1, num2, num3;
            Console.WriteLine("Enter number1 ");
            num1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter number2 ");
            num2 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter number3 ");
            num3 = Convert.ToInt32(Console.ReadLine());
            int add = num1 + num2 + num3;
            Console.WriteLine("Addition of three numbers is: " + add);
            Console.ReadLine();



        }
    }
}
