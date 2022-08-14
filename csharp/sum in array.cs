using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace sum_in_array
{
    internal class Program
    {   static void display(params int[] num)
        {
            int sum = 0;
            for (int i=0; i < num.Length; i++)
            {
                
                sum = sum + num[i];
            }
            Console.WriteLine("sum = {0}",sum);
        }
        static void Main(string[] args)
        {
            display(5, 7, 8);
            Console.ReadLine();
        }
    }
}
