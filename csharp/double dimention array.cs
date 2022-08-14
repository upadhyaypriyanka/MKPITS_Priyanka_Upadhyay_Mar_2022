using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace double_dimension_array
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[,] num = { { 5, 8, 8 }, { 8, 9, 4 } };
            for(int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    Console.Write(num[i,j] +"\t");
                }
                Console.WriteLine();
                
            }
            Console.ReadLine();

        }
    }
}
