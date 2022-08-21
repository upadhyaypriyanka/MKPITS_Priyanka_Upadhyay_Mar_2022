using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace default_constructor_practice
{
    class Student
    {
        public int no;
        public string name;

        public void display()
        {
            Console.WriteLine("Student no = " + no);
            Console.WriteLine("Student name = " + name);
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            Student std = new Student();
            std.no = 23;
            std.name = "priyanka";
            std.display();
            Console.ReadLine();
        }
    }
}
