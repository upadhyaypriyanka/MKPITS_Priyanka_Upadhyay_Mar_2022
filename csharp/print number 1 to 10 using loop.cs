using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace print_no_1_to_10
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // wap to print number from 1 to 10 using while loop
            int i=1;
            Console.WriteLine("numbers 1 to 10 using while loop");
            while (i <= 10)
            {
                Console.WriteLine(i);
                i++;
            }
            

            // wap to print number from 1 to 10 using do while loop
            int j = 1;
            Console.WriteLine("numbers 1 to 10 using do while loop");
            do
            {
                Console.WriteLine(j);
                j++;
            } while (j <= 10);

            // wap to print number from 1 to 10 using for loop
            int k;
            Console.WriteLine("numbers 1 to 10 using for loop");
            for (k = 1; k <= 10; k++)
            {
                Console.WriteLine(k);
            }
            Console.ReadLine();
        }
    }
}
