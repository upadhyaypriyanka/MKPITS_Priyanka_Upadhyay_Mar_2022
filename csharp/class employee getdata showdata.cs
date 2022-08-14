using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace class_employee_getdata_showdata
{
    internal class Program
    {   class Employee
        {
             int empno;
              string empname;
               float salary;
            //creating methods
            public void getdata()
            {
                Console.WriteLine("Enter employee no");
                empno = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Enter employee name");
                empname = Console.ReadLine();
                Console.WriteLine("Enter employee salary");
                salary = Convert.ToSingle(Console.ReadLine());
            }
            public void showdata()
            {
                Console.WriteLine("empno = " + empno);
                Console.WriteLine("empname = " + empname);
                Console.WriteLine("empsalary = " + salary);
                Console.ReadLine();
            }
        }
       
        
        static void Main(string[] args)
        {
            Employee emp = new Employee();
            emp.getdata();
            emp.showdata();
        }
    }
}
