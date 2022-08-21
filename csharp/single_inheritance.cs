using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace single_inheritance
{
    class Person
    {
        public int rno;
    }
    class Student : Person
    {
        public string name;
    }
    internal class Program
    {
        
        static void Main(string[] args)
        {
            Student s = new Student();
            s.rno = 34;
            s.name = "priyanka";
            Console.WriteLine("Student roll no = " + s.rno);
            Console.WriteLine("Student name = " + s.name);
            Console.ReadLine();
        }
    }
}
