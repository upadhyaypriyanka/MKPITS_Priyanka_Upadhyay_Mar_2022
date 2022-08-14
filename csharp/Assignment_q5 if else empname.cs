using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace emno_empname_empdesignation
{
    internal class Program
    {
        static void Main(string[] args)

        { // wap to empno,empname,designation calculaye and display bonus i.e 10000 for manager 5000 for clerk 2000 for peon
            
            int bonus = 0;
            string n,name, designation;
            Console.WriteLine("Enter employee phone number");
            n = Console.ReadLine();
            Console.WriteLine("Employee phone number= " + n);
            Console.WriteLine("Enter employee name");
            name = Console.ReadLine();
            Console.WriteLine("Employee Name= " + name);
            Console.WriteLine("Enter Designation");
            designation = Console.ReadLine();
            if (designation == "manager")
            {
                bonus = 10000;
            }
            else if (designation == "clerk")
            {
                bonus = 5000;
            }
            else if (designation == "peon")
            {
                bonus = 2000;
            }
            else
            {
                Console.WriteLine("Invalid designation");
            }
            Console.WriteLine("your bonus is= " + bonus);
            Console.ReadLine();



        }
    }
}
