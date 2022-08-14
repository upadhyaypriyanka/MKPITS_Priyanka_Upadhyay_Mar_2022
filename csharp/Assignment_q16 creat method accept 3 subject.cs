using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace create_a_method_accept_3_subject
{
    internal class Program
    {    static void subject(int s1,int s2,int s3)
        {
            int total = s1 + s2 + s3;
            Console.WriteLine("Total = " + total);
            float per = (total / 300.0f) * 100.0f;
            Console.WriteLine("Percentage = " + per);
            string grade = "";
            if (per >= 75)
            {
                grade = "distinction";
            }
            else if (per >= 60 && per < 70)
            {
                grade = "first";

            }
            else
            {
                grade = "fail";
            }
            Console.WriteLine("Grade= " + grade);

        }
        static void Main(string[] args)
        {
            Console.WriteLine("Enter first subject marks");
            int sub1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter first subject marks");
            int sub2 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter first subject marks");
            int sub3 = Convert.ToInt32(Console.ReadLine());
            subject(sub1, sub2, sub3);
            Console.ReadLine();

        }
    }
}
