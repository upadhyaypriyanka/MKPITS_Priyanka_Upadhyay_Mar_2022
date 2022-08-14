using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace pass_by_value
{
    internal class Program
    {
        static void display(int num)
        {
            num++;
            Console.WriteLine("value inside method " + num);
        }
        static void Main(string[] args)
        {
            int n = 7;
            display(n);
            Console.WriteLine("value inside main " + n);
            Console.ReadLine();
        }
    }
}
