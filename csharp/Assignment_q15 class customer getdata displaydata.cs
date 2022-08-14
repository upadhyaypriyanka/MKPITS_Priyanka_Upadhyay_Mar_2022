using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace crate_a_class_customer_having_fields
{
    class Customer
    {
        public int cusno;
        public string cusname;
        public string cusadd;
        public string custelno;

       public void getcustomerdata()
        {
            Console.WriteLine("Enter customer no ");
            cusno = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter customer name");
            cusname = Console.ReadLine();
            Console.WriteLine("Enter customer address");
            cusadd = Console.ReadLine();
            Console.WriteLine("Enter customer phone no.");
            custelno = Console.ReadLine();

        }
        public void displaycustomerdata()
        {
            Console.WriteLine("Customer no = " + cusno);
            Console.WriteLine("Customer name = " + cusname);
            Console.WriteLine("Customer address = " + cusadd);
            Console.WriteLine("Customer phone no. = " +custelno);
        }

    }
    internal class Program
    {
        static void Main(string[] args)
        {
            Customer cus = new Customer();
            cus.getcustomerdata();
            cus.displaycustomerdata();
          
            Console.ReadLine();
        }
    }
}
