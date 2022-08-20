using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace triangle_with_number_increased_by_1
{
    internal class Program
    {
        static void Main(string[] args)
        { int k=1;
            for(int i = 1; i <= 4; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    Console.Write(k++);
                }
                Console.WriteLine("\n ");
            }
            Console.ReadLine();
        }
    }
}
