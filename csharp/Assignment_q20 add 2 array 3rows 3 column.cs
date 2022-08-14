using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Addition_of_2_array_3rows_3colums
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[,] num = new int[3, 3];
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    Console.WriteLine("Enter numbers");
                    num[i, j] = Convert.ToInt32(Console.ReadLine());
                }
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    Console.Write(num[i, j] + "\t");
                }
                Console.WriteLine();
            }

            int[,] num1 = new int[3, 3];
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    Console.WriteLine("Enter numbers");
                    num1[i, j] = Convert.ToInt32(Console.ReadLine());
                }
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    Console.Write(num1[i, j] + "\t");
                }
                Console.WriteLine();
            }
            Console.WriteLine("Addition of two array ");

            int[,] num3 = new int[3, 3];
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    num3[i, j] = num[i, j] + num1[i, j];
                    //Console.WriteLine("Enter numbers");
                    //num[i, j] = Convert.ToInt32(Console.ReadLine());
                }
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    Console.Write(num3[i, j] + "\t");
                }
                Console.WriteLine();
            }
            Console.ReadLine();
        }
    }
}
