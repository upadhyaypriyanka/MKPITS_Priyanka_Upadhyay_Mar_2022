using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace class_employee_accept_value_from_the_user
{
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
            Employee emp = new Employee();
            Console.WriteLine("Enter empno ");
            emp.empno = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter empname ");
            emp.empname = Console.ReadLine();
            Console.WriteLine("Enter empsalary ");
            emp.salary = Convert.ToSingle(Console.ReadLine());
            Console.WriteLine("Empno = " + emp.empno);
            Console.WriteLine("Empname = " + emp.empname);
            Console.WriteLine("empsalary = " + emp.salary);
            Console.ReadLine();

        }
    }
}
