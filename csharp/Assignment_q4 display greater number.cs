using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace display_greater_number
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // wap to accept 3 number from the user and display greater number
            Console.WriteLine("Find greatest number");
            int num1, num2, num3;
            Console.WriteLine("Enter number1");
            num1 = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter number2");
            num2 = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter number3");
            num3 = Convert.ToInt32(Console.ReadLine());

            if(num1>num2 && num1 > num3)
            {
                Console.WriteLine("greater number is= " + num1);
            }
           else if (num2 > num3)
            {
                Console.WriteLine("greater number is= " + num2);

            }
            else
            {
                Console.WriteLine("greater number is= " + num3);
            }


            // wap to accept 3 number from the user and display smallest number
            Console.WriteLine("Find smallest number");
            int num4, num5, num6;
            Console.WriteLine("Enter number1");
            num4 = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter number2");
            num5 = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter number3");
            num6 = Convert.ToInt32(Console.ReadLine());

            if (num4 < num5 && num4 < num5)
            {
                Console.WriteLine("smallest number is= " + num4);
            }
            else if (num5 < num6)
            {
                Console.WriteLine("smallest number is= " + num5);

            }
            else
            {
                Console.WriteLine("smallest number is= " + num6);
            }
            Console.ReadLine();



        }
    }
}
