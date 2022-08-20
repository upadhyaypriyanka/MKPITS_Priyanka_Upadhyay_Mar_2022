using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace alphabet_is_a_vowel_or_consonant
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter alphabet(A-Z) (a-z):");
            char ch = Convert.ToChar(Console.ReadLine());
            if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'o' || ch == 'O' || ch == 'i' || ch == 'I' || ch == 'u' || ch == 'U' )
            {
                Console.WriteLine("The Alphabet is vowel.");
            }
            else
            {
                Console.WriteLine("The alphabet is a consonant.");
            }
            Console.ReadLine();
        }
    }
}
