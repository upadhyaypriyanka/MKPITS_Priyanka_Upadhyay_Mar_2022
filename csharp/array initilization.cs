using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace array_inititialization
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] num = { 5, 7, 8, 9, 3, };
            for(int i = 0; i < 5; i++)
            {
                Console.WriteLine(" num [{0}] = {1} ", i, num[i]);
                Console.ReadLine();
            }
        }
    }
}
