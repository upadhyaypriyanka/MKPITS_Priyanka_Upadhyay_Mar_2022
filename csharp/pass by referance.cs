using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace pass_by_reference
{
    internal class Program
    {//pass by referance
        static void display(ref int num)
        {
            num++;
            Console.WriteLine("Value inside method " + num);
        }
        static void Main(string[] args)
        {
            int n = 6;
            display(ref n);
            Console.WriteLine("value inside main " + n);
            Console.ReadLine();
        }
    }
}
