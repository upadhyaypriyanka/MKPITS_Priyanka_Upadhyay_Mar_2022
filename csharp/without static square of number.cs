using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace function_type4_square_of_numbers
{
    internal class Program
    {  // method-4 without parameters and returning value

         int square() // called function
        {
            Console.WriteLine("Enter number");
            int num = Convert.ToInt32(Console.ReadLine());
            int squ = num * num;
            return squ;

        }
        static void Main(string[] args)
        {
            Program p = new Program();
            int res = p.square(); //calling function
            Console.WriteLine(" square = {0}", res);
            Console.ReadLine();
        }
    }
}
