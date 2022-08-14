using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace local_and_class_variable
{// local and class variable
    internal class Program
    {
       static int gnum=20;
        static void display()
        {
            int lnum = 10;
            Console.WriteLine("local variable is = " + lnum);
            Console.WriteLine("globle variable is = " + gnum);
        }
        static void Main(string[] args)
        {
            display();
            //error since lnum is local variable
            //Console.WriteLine("local variable is = " + lnum);

            Console.WriteLine("globle variable is = " + gnum);
            Console.ReadLine();
        }
    }
}
