using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace profit_and_loss
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int pcost, pselling;
            Console.Write("Enter cost price: ");
            pcost = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter selling price: ");
            pselling = Convert.ToInt32(Console.ReadLine());
            if (pcost < pselling)
            {
                int profit =  pselling-pcost;
                Console.WriteLine("You can booked your profit amount : {0}", profit);
            }
            else if (pcost > pselling)
            {
                int loss =  pcost-pselling;
                Console.WriteLine("You got a loss of amount : {0}", loss);
            }
            else
            {
                Console.WriteLine("You are running in no profit no loss condition");
            }
            Console.ReadLine();
        }
    }
}
