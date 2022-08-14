using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace pass_by_reference
{
    internal class Program
    {//pass by referance
        static void display(out int num)
        {
            num = 8;
            Console.WriteLine("Value inside method " + num);
        }
        static void Main(string[] args)
        {
            int n=9;
            display(out n);
            Console.WriteLine("value inside main " + n);
            Console.ReadLine();
        }
    }
}
