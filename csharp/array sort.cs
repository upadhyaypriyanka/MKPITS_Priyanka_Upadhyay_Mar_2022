using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace array_short
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] arr = { 6, 9, 3, 2, 0, 9 };
            // Array.Sort(arr);
            //Array.Clear(arr,0, 6);
            int[] arr1 = (int[])arr.Clone();
          for(int i=0;i<arr1.Length;i++)
            {
                Console.Write(arr1[i] + "\t");
            }
            Console.ReadLine();
        }
    }
}
