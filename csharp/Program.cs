using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Addition
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num1,num2;
            Console.WriteLine("Enter first number");
            num1=Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter second number");
            num2=Convert.ToInt32(Console.ReadLine());
            int add=num1+num2;
            Console.WriteLine("Addition of two number is: "+add);
            Console.ReadLine();
        }
    }
}
