using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace cube_of_the_number
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter number of terms");
            int num = Convert.ToInt32(Console.ReadLine());
            for(int i = 1; i <= num; i++)
            {
                int cube = i * i * i;
                Console.WriteLine("Number is : {0} and cube of the {0} is :{1}", i, cube);
            }
            Console.ReadLine();
        }
    }
}
