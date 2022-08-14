using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace eligible_to_vote_or_not
{
    internal class Program
    {
        static void Main(string[] args)
        { // wap to accept a age from the user and print whether eligible to vote or not
            byte age;
            Console.WriteLine("Enter age");
            age = Convert.ToByte(Console.ReadLine());
            if (age <= 17)
            {
                Console.WriteLine("You are not eligible for vote");
            }
            else
            {
                Console.WriteLine("You are eligible for vote");
            }
            Console.ReadLine();
        }
    }
}
