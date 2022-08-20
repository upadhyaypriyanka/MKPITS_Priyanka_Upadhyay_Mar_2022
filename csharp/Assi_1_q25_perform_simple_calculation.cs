using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace perform_a_simple_calculation
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int choice;
            Console.WriteLine("Enter First integer");
            Console.WriteLine("Enter Second integer");
            int firstNumber = Convert.ToInt32(Console.ReadLine());
            int SecondNumber = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Here your option");
            Console.WriteLine("1-Addition.");
            Console.WriteLine("2-Substraction.");
            Console.WriteLine("3-Multiplication.");
            Console.WriteLine("4-Division.");
            Console.WriteLine("5-Exit.");
            choice = Convert.ToByte(Console.ReadLine());
            switch (choice)
            {
                case 1:
                    int add = firstNumber + SecondNumber;
                    Console.WriteLine("The addition of {0} and {1} is: {2}", firstNumber, SecondNumber, add);
                    break;

                case 3:
                    int mul = firstNumber * SecondNumber;
                    Console.WriteLine("The multiplication of {0} and {1} is: {2}", firstNumber, SecondNumber, mul);
                    break;

                case 2:
                    int sub = firstNumber - SecondNumber;
                    Console.WriteLine("The subtraction of {0} and {1} is: {2}", firstNumber, SecondNumber, sub);
                    break;

                case 4:
                    int div = firstNumber / SecondNumber;
                    Console.WriteLine("The division of {0} and {1} is: {2}", firstNumber, SecondNumber, div);
                    break;
                case 5:
                    Console.WriteLine("Exit.");
                    break;
            }
            Console.ReadLine();
        }
    }
}
