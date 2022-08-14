using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace example_of_2d_array
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[,] arr = new int[2,3];
            Console.WriteLine("Enter number");
            for (int i = 0; i < 2; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    
                    arr[i, j] = Convert.ToInt32(Console.ReadLine());
                }
            }
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 3; j++)
                {

                    Console.Write(arr[i, j]+"\t");
                }
                Console.WriteLine();
            }
            Console.ReadLine();
        }
    }
}
