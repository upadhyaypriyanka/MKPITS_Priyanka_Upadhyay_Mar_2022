using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment_q14__crate_a_class_customer_having_fields
{  class Customer
    {
        public int cusno;
        public string cusname;
        public string cusadd;
        public string custelno;

    }
    internal class Program
    {
        static void Main(string[] args)
        {
            Customer cus = new Customer();
            cus.cusno = 356;
            cus.cusname = "priyanka upadhyay";
            cus.cusadd = "Arya nagar jaripatka nagpur";
            cus.custelno = "9579559617";
            Console.WriteLine("Customer no = " + cus.cusno);
            Console.WriteLine("Customer name = " + cus.cusname);
            Console.WriteLine("Customer address = " + cus.cusadd);
            Console.WriteLine("Customer phone no. = " + cus.custelno);
            Console.ReadLine();
        }
    }
}
