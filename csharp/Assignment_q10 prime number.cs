using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace prime_number { 
    internal class Program
    {
        static void Main(string[] args)
        {
            // wap to accept a no. and print whether it is prime no. or not 
            int num ,m=0;
            Console.WriteLine("Enter number");
            num = Convert.ToInt32(Console.ReadLine());
            for(int i = 1; i <= num; i++)
            {
                if (num % i == 0)
                {
                    m = m + 1;
                }
               // Console.WriteLine(m);
              
            }
            if (m == 2)
            {
                Console.WriteLine(" {0} is prime number  " , num);
            }
            else
            {
                Console.WriteLine(" {0} is not prime number  " , num);
            }
            Console.ReadLine();
        }
    }
}
