using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace student_name_in_array
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] std = new string[5];
            Console.WriteLine("Enter first name");
            std[0]= Console.ReadLine();
            Console.WriteLine("Enter second name");
            std[1] = Console.ReadLine();
            Console.WriteLine("Enter third name");
            std[2] = Console.ReadLine();
            Console.WriteLine("Enter fourth name");
            std[3] = Console.ReadLine();
            Console.WriteLine("Enter fifth name");
            std[4] = Console.ReadLine();
            for(int i = 0; i < std.Length; i++)
            {
                Console.WriteLine(std[i]);
            }

            Console.ReadLine();
        }
    }
}
