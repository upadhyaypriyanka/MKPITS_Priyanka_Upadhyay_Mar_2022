using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace create_a_method_and_print_table
{
    internal class Program
    {
        
        static void table(int num) {
            
            for(int i = 1; i <= 10; i++)
            {
                int t = num * i;
                Console.WriteLine("{0} * {1} = {2} ", num, i,t);
            }
            
        }

        static void Main(string[] args)
        {
            Console.WriteLine("Enter number");
            int num = Convert.ToInt32(Console.ReadLine());
             table(num);
           
            Console.ReadLine();
        }
    }
}
