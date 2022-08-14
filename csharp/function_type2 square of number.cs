using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace function_type2_square_of_numbers
{
    internal class Program
    {  // method-2 with parameters and returning nothing
        // wap to create a methode daiplay with parameter
        static void square(int num) // called function
        {
         int squ = num * num;
            Console.WriteLine(" square of a {0} is {1}", num, squ);
        }
        static void Main(string[] args)
        {
            Console.WriteLine("Enter number");
           int num = Convert.ToInt32(Console.ReadLine());
            square(num); //calling function
            Console.ReadLine();
        }
    }
}
