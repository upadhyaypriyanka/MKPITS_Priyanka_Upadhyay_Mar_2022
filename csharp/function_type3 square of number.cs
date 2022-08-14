using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace function_type3_square_of_numbers
{
    internal class Program
    {  // method-3 with parameters and returning value
    
        static int square(int num) // called function
        {
            int squ = num * num;
            return squ;
         
        }
        static void Main(string[] args)
        {
            Console.WriteLine("Enter number");
            int num = Convert.ToInt32(Console.ReadLine());
           int res= square(num); //calling function
            Console.WriteLine(" square of a {0} is {1}", num, res);
            Console.ReadLine();
        }
    }
}
