using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace product
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // wap to accept productname,pruductrate,quantity calculate totalamount,discount ie 50% if totalamount>2000 else discount=10% of total amount
            string pname;
            int prate, qua, total;
            Console.WriteLine("Enter product name");
            pname = Console.ReadLine();
            Console.WriteLine("product name = " + pname);
            Console.WriteLine("Enter product rate");
            prate = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("product rate = " + prate);
            Console.WriteLine("Enter product rate");
            qua = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("product quantity = " + qua);
            total = prate * qua;
            Console.WriteLine("Total = " + total);
            if (total >= 2000)
            {
                float a = total - (total * 50.0f / 100.0f);
                Console.WriteLine("Total Amount = " + a +"(50% discount) ");
            }
             else
            {
               float b = total - (total * 10.0f / 100.0f);
                Console.WriteLine("Total Amount = " + b + (" (10% discount)"));
            }
            Console.ReadLine();

        }
    }
}
