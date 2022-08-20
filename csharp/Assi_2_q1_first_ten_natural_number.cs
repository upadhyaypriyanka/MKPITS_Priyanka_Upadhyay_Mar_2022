using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace first_ten_natural_number
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("First ten natural numbers");
            for(int i=1;i<=10;i++){
                Console.Write(" "+i);

            }
            Console.ReadLine();
        }
    }
}
