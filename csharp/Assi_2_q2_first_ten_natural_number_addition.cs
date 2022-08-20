using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace first_ten_natural_number_addition
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int add = 0;
            Console.WriteLine("First ten natural numbers\n");
            for (int i = 1; i <= 10; i++)
            {
                Console.Write(" " + i);
                add = add + i;
            }
            Console.Write("\n\nThe addition of first ten number is: {0}", add);
            Console.ReadLine();
        }
    }
}
