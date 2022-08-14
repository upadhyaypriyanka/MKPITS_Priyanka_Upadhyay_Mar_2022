using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace example_of_method_overloading
{
    internal class Program
    {
        static int add(int num1, int num2)
        {
            return num1 + num2;
        }
        static int add(int num1, int num2,int num3)
        {
            return num1 + num2+num3;
        }

        static void Main(string[] args)
        {
            Console.WriteLine(add(2, 6));
            Console.WriteLine(add(2, 6,9));
            Console.ReadLine();
        }
    }
}
