using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace multiplication_table_of_a_given_integer
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int table = 1;
            Console.Write("Enter number which table you want: ");
            int num = Convert.ToInt32(Console.ReadLine());
            for (int i = 1; i <= 10; i++)
            {
                table = num * i;
                Console.Write("{0} * {1} = {2}\n", num, i, table);
            }
            Console.ReadLine();
        }
    }
}
