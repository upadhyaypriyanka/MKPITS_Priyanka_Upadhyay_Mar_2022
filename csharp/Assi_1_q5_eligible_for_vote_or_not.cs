using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace eligible_for_casting_your_vote_or_not
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int age;
            Console.WriteLine("Enter  age");
            age = Convert.ToInt32(Console.ReadLine());

            if ( age >=18)
            {
                Console.WriteLine("Congratulation! You are eligible for casting your vote");
            }
            else
            {
                Console.WriteLine("Sorry! You are not eligible for casting your vote. your age is less than 18");
            }
            Console.ReadLine();
        }
    }
}
