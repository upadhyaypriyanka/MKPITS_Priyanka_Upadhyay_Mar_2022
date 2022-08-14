using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace factorial_using_loop
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //wap to accept a number and print factorial of a number using for loop
            Console.WriteLine(" Factorial using for loop");
            int i,num,fact=1;
            Console.WriteLine(" Enter number");
            num = Convert.ToInt32(Console.ReadLine());
       
            for (i = num; i > 0; i--)
            {
                fact = fact * i;
                
            }
            Console.WriteLine(" Factorial of {0} = {1} ", num, fact);

            //wap to accept a number and print factorial of a number using while loop
            Console.WriteLine(" Factorial using while loop");
            int j, num1, fact1 = 1;
            Console.WriteLine(" Enter number");
            num1 = Convert.ToInt32(Console.ReadLine());

            for (j = num1; j > 0; j--)
            {
                fact1 = fact1 * j;

            }
            Console.WriteLine(" Factorial of {0} = {1} ", num1, fact1);

            //wap to accept a number and print factorial of a number using do while loop
            Console.WriteLine("Factorial using do while loop");
            int k, num2, fact2 = 1;
            Console.WriteLine("Enter number");
            num2 = Convert.ToInt32(Console.ReadLine());

            for (k = num2; k > 0; k--)
            {
                fact2 = fact2 * k;

            }
            Console.WriteLine(" Factorial of {0} = {1} ", num2, fact2);


            Console.ReadLine();
        }
    }
}
