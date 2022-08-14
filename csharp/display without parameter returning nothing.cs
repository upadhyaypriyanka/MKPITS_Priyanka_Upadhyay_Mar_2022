using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace display_without_parameter_returning_nothing
{
    internal class Program
    {
        static void display()
        {
            Console.WriteLine("Hello from display method");
        }
        static void Main(string[] args)
        {
            display();
            Console.WriteLine("Bye");
            Console.ReadLine();
        }
    }
}
