using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace n_terms_natural_number_addition
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int add = 0,naturalNumber;
            Console.WriteLine("Enter any natural number");
            naturalNumber = Convert.ToInt32(Console.ReadLine());
            
            for (int i = 1; i <= naturalNumber; i++)
            {
                Console.Write(" " + i);
                add = add + i;
            }
            Console.Write("\n\nThe addition of first {0} natural number is: {1}", naturalNumber, add);
            Console.ReadLine();
        }
    }
}
