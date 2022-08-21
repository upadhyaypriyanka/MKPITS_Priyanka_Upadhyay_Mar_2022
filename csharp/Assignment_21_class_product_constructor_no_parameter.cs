using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace constructor_no_parameters_and_method_display
{
    class Product
    {
        
        String productid, productname;
        int price, quantity;
       
        public Product()
        {
            productid = "45647";
            productname = "soap";
            price = 100;
            quantity = 2;

            price = 200;
        }
        public void display()
        {
            Console.WriteLine("product id = " + productid);
            Console.WriteLine("product name = " + productname);
            Console.WriteLine(" quantity = " + quantity);
            Console.WriteLine("price = " + price);

        }
    }
    internal class Program
    {

        static void Main(string[] args)
        {
            Product b = new Product();
            b.display();
            Console.ReadLine();
        }
    }
}
