using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace single_dimension_array
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] num = new int[5];
            //creating a num array of 5 elements
            for (int i=0; i < 5; i++)
            {
                Console.WriteLine("Enter number");
                num[i] = Convert.ToInt32(Console.ReadLine());
            }
            //display the values of array
            for (int i = 0; i < 5; i++)
            {
                Console.WriteLine("num[{0}] = {1}", i, num[i]);
                Console.ReadLine();
            }
        }
    }
}
