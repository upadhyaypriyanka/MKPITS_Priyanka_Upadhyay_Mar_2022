using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace class_employee_having_fields_empno_empname_and_salary
{
    //create a class employee having fields empno,empname and salary
     class Employee
    {
        public int empno;
        public string empname;
        public float salary;
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            //creating an object(instance) of employee class
            //syntax classname objectname =new classname();
            Employee emp = new Employee();
            emp.empno = 234;
            emp.empname = "priyanka";
            emp.salary = 7657.9f;
            Console.WriteLine("empno = " + emp.empno);
            Console.WriteLine("empname = " + emp.empname);
            Console.WriteLine("empsalary = " + emp.salary);
            Console.ReadLine();
        }
    }
}
