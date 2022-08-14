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
            string n, name, designation;
            Console.WriteLine("Enter employee phone number");
            n = Console.ReadLine();
            Console.WriteLine("Employee phone number= " + n);
            Console.WriteLine("Enter employee name");
            name = Console.ReadLine();
            Console.WriteLine("Employee Name= " + name);
            Console.WriteLine("Enter Designation");
            designation = Console.ReadLine();
           switch (designation)
            {
                case "manage":
                bonus = 10000;
            break;
            
             case "clerk":
            
                bonus = 5000;
                    break;

                case "peon":
            
                bonus = 2000;
                    break;
            default:
                Console.WriteLine("Invalid designation");
                break;
            }
            Console.WriteLine("your bonus is= " + bonus);
            Console.ReadLine();



        }
    }
}
