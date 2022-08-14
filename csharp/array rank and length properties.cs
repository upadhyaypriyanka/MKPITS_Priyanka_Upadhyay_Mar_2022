using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace array_rank_and_length_properties
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[,] array = new int[2, 3];
            Console.WriteLine("Enter six number");
            for(int i = 0; i < 2; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    array[i, j] = Convert.ToInt32(Console.ReadLine());
                }
            }
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    Console.Write(array[i, j] + "\t");
                }
                Console.WriteLine();
            }
            
            Console.WriteLine("rank" + array.Rank);
            Console.WriteLine("legth" + array.Length);
            Console.ReadLine();

        }
    }
}
