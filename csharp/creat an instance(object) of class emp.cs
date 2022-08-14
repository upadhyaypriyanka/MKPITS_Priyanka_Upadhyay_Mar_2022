using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace creating_an_instance_object__of_class_employee
{
    class Employee
    {
        public int empno;
        public string empname;
        public float salary;
        public void getdata(int eno, string ename, float esalary)
        {
            empno = eno;
            empname = ename;
            salary = esalary;

        }
        public void showdata()
        {
            Console.WriteLine("Employee No = " + empno);
            Console.WriteLine("Employee Name = " + empname);
            Console.WriteLine("Employee Salary = " + salary);

        }



        internal class Program
        {
            static void Main(string[] args)
            {
                Employee emp = new Employee();
                Console.WriteLine("Enter empno");
                int en = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Enter empname");
                string ena = Console.ReadLine();
                Console.WriteLine("Enter empsalary");
                float es = Convert.ToSingle(Console.ReadLine());
                emp.getdata(en, ena, es);
                emp.showdata();
                Console.ReadLine();
            }
        }
    }
}

