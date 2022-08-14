using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace print_table_using_loop
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // wap to print table for using for loop
            Console.WriteLine("Table using for loop");
            int num;
            int res=1 ;
            Console.WriteLine("Enter number");
            num = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Table of " + num);
            for (int i=1; i <= 10;i++)
            {
                res = num * i;
               
                Console.WriteLine("{0} * {1} = {2}",num ,i, res);
            }

            // wap to print table for using while loop
            Console.WriteLine("Table using while loop");
            int num1;
            int res1 = 1, j = 1; 
            Console.WriteLine("Enter number");
            num1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Table of " + num1);
            while ( j <= 10)
            {
                 res1 = num1 * j;
               
                Console.WriteLine("{0} * {1} = {2}", num1, j, res1);
                j++;
            }

            // wap to print table for using do while loop
            Console.WriteLine("Table using do while loop");
            int num2;
            int res2 = 1, k = 1;
            Console.WriteLine("Enter number");
            num2 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Table of " + num2);
            do
            {
                res2 = num2 * k;
                
                Console.WriteLine("{0} * {1} = {2}", num2, k, res2);
                k++;
            } while (k <= 10);

            Console.ReadLine();
        }
    }
}
