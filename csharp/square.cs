using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace square
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num;
            Console.WriteLine("Enter Number");
            num = Convert.ToInt32(Console.ReadLine());

            int square = num * num;
            Console.WriteLine("Square of the number is: " + square);
            Console.ReadLine();
        }
    }
}
