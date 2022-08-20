using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace eligibility_of_admission
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int mathmarks, phymarks, chemmarks;
            Console.Write(" marks obtained in maths :");
            mathmarks = Convert.ToInt32(Console.ReadLine());
            Console.Write(" marks obtained in physics :");
            phymarks = Convert.ToInt32(Console.ReadLine());
            Console.Write(" marks obtained in chemistry :");
            chemmarks = Convert.ToInt32(Console.ReadLine());
            int total = mathmarks + phymarks + chemmarks;
            if(total==180||(mathmarks>=65 && phymarks>=55 && chemmarks >= 50))
            {
                Console.WriteLine("The candidate eligible for admission");
            }
            else
            {
                Console.WriteLine("The candidate not eligible for admission");
            }
            Console.ReadLine();
        }
    }
}
