using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace params_in_array
{
    
    internal class Program
    {
        static void display(params int[] num)
        {
         
            Console.WriteLine(num[0]);
            Console.WriteLine(num[1]);
            Console.WriteLine(num[2]);
            Console.WriteLine(num[3]);
        

        }
        static void Main(string[] args)
        {
            display(3, 5, 7, 9);
            Console.ReadLine();
        }
    }
}
