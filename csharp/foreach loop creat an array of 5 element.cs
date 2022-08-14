using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace foreach_loop_create_an_array_of_5_element
{
    internal class Program
    {
        static void Main(string[] args)
        {   // integer
            int[] Array = {4,6,7,8,9};
            foreach(int k in Array)
            {
                Console.WriteLine(k);
            }
            // integer
            int[] num= new int[5];
            num[0] = 7;
            num[1] = 4;
            num[2] = 6;
            num[3] = 8;
            num[4] = 10;
            foreach( int i in num)
            {
                Console.WriteLine(i);
                  // string
            }
            string[] str = new string[5];
            str[0]= "priyanka";
            str[1] = "gayatri";
            str[2] = "mayuri";
            str[3] = "pranali";
            str[4] = "khushi";
            foreach(string j in str) {
                Console.WriteLine(j);
            }
            Console.ReadLine();
        }
    }
}
