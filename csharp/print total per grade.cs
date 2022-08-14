using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace print_total_per_grade
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // wap to accept 3 subject marks and print total, per and grade
            int s1, s2, s3;
            string grade = "";
            Console.WriteLine("Enter subject 1 marks");
            s1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter subject 2 marks");
            s2 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter subject 3 marks");
            s3 = Convert.ToInt32(Console.ReadLine());
            int total = s1 + s2 + s3;
            float per = (total / 300.0f) * 100.0f;
            Console.WriteLine("total= " + total);
            Console.WriteLine("percentage= " + per);

            if (per >= 75)
            {
                grade= "distinction";
            }
            else if (per >= 60 && per < 70)
            {
                grade= "first";

            }
            else
            {
            grade= "fail";
            }
            Console.WriteLine("Grade= " + grade);
            Console.ReadLine();


        }
    }
}
