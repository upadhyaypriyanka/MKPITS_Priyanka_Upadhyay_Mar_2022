using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace pass_the_data_to_class_methods
{
    class Employee
    {
        public int empno;
        public string empname;
        public float salary;
        //creating methods getdata() and showdata()
        public void getdata(int eno,string en,float es)
        {
            empno = eno;
            empname = en;
            salary = es;
        }
       public void showdata()
        {
            Console.WriteLine("Employee No. = " + empno);
            Console.WriteLine("Employee Name = " + empname);
            Console.WriteLine("Employee Salary = " + salary);
        }
        

    }
    internal class Program
    {
        static void Main(string[] args)
        {
            Employee emp = new Employee();
            emp.getdata(567,"priyanka",45000 );
            emp.showdata();
            Console.ReadLine();
            
        }
    }
}
