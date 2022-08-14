using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Prime_number_between_1to20_using_loop
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //wap to print prime no. between 1 and 20
            int temp = 0;
            for (int i = 1; i <= 20; i++)
            {
                for (int j = 2; j <= i - 1; j++)
                {
                    if (i % j == 0)
                    {
                        temp = temp + 1;
                    }
                }
                if (temp == 0)
                {
                    Console.WriteLine(i);
                }
                else
                {
                    temp = 0;
                }
            
            }
               
                Console.ReadLine();
            }
        }
    }

