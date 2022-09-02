using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections;

namespace _30_august_arraylist_display_value
{
    internal class Program
    {
        static void Main(string[] args)
        {
            ArrayList ar = new ArrayList();
            ar.Add(12);
            ar.Add(14);
            ar.Add(17);
            ar.Add(13);
            Console.WriteLine("array list colection with sorting");
            Console.WriteLine("Student Roll No. ");
            ar.Sort();
            foreach(int obj in ar)
            {
                Console.WriteLine(obj);
            }
            Console.WriteLine("Capacity = {0}" , ar.Capacity);
            Console.WriteLine("Count = {0}" , ar.Count );
            Console.ReadLine();
        }
    }
}
