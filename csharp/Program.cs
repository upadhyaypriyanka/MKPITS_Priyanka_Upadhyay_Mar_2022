using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace accept_character_and_name_from_the_user
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // wap to accept character from the user and print it

            char ch;
            Console.WriteLine("Enter character");
            ch = Convert.ToChar(Console.ReadLine());
            Console.WriteLine("character entered: " + ch);

            // wap to accept name from the user and print it

            string name;
            Console.WriteLine("Enter your name");
            name = Console.ReadLine();
            Console.WriteLine("Name entered: " + name);
            Console.ReadLine();
        }
    }
}
