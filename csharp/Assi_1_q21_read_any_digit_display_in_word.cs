﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace display_number_in_the_word
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter number(1-10):");
            int num = Convert.ToInt32(Console.ReadLine());
            if (num == 1)
            {
                Console.WriteLine("One");
            }
            else if (num == 2)
            {
                Console.WriteLine("Two");
            }
            else if (num == 3)
            {
                Console.WriteLine("Three");
            }
            else if (num == 4)
            {
                Console.WriteLine("Four");
            }
            else if (num == 5)
            {
                Console.WriteLine("Five");
            }
            else if (num == 6)
            {
                Console.WriteLine("Six");
            }
            else if (num == 7)
            {
                Console.WriteLine("Seven");
            }
            else if (num == 8)
            {
                Console.WriteLine("Eight");
            }
            else if (num == 9)
            {
                Console.WriteLine("Nine");
            }
            else if (num == 10)
            {
                Console.WriteLine("Ten");
            }


            else
            {
                Console.WriteLine("Invalid choice");
            }
            Console.ReadLine();
        }
    }
}
