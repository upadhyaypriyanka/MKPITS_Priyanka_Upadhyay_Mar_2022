using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace function_type1_square_of_numbers
{
    internal class Program
    {  // method-1 without parameters and returning nothing
        // wap to create a methode daiplay without parameter
        static void square() // called function
        {
            int num;
            Console.WriteLine("Enter number");
            num = Convert.ToInt32(Console.ReadLine());
            int squ = num * num;
            Console.WriteLine(" square of a {0} is {1}", num, squ);
        }
        static void Main(string[] args)
        {
            square(); //calling function
            Console.ReadLine();
        }
    }
}
