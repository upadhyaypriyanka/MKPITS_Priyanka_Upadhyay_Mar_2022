using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace find_hra_da
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // wap to accept empno,empname,basicsalary and calculate hra ie 32% of basic, da ie 45% of basic display empno,empname,hra,da,tatal salary
            string no,name;
            int salary;

            Console.WriteLine("Enter employee no.");
            no = Console.ReadLine();
            Console.WriteLine("Employee no. " + no);

            Console.WriteLine("Enter employee name");
            name = Console.ReadLine();
            Console.WriteLine("Employee no. " + name);

            Console.WriteLine("Enter employee basic salary");
            salary = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Employee basic salary " + salary);

            float hra = salary * 0.32f;
            Console.WriteLine("hra = " + hra);
            float da = salary * 0.45f;
            Console.WriteLine("da = " + da);
            float total = salary + hra + da;
            Console.WriteLine(" Total salary = " + total);
            Console.ReadLine();

        }
    }
}
