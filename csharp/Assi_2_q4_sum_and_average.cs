using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace sum_and_average
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int sum = 0;
            Console.WriteLine("Enter any 10 number\n");
            for(int i = 1; i <= 10; i++)
            {
                Console.Write("number {0}:",i);
                
                int n = Convert.ToInt32(Console.ReadLine());
                sum = sum + n;
                
            }
            float avg= sum / 10;
            Console.WriteLine("Sum of 10 number is: {0}\n average is: {1}", sum, avg);
            Console.ReadLine();
        }
    }
}
