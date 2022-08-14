using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace productname_productrate_productquantity
{
    internal class Program
    {
        static void Main(string[] args)
// wap to accept productname,productrate,quantity display total amount
        {
            string pname;
            int prate, qua,total;
            Console.WriteLine("Enter product name");
            pname=Console.ReadLine();
            Console.WriteLine("Product name = " + pname);
            Console.WriteLine("Enter product rate");
            prate = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Product rate = " + prate);
            Console.WriteLine("Enter quantity");
            qua = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Quantity = " + qua);
            total = prate * qua;
            Console.WriteLine("Total amount = " + total);
            Console.ReadLine();




        }
    }
}
