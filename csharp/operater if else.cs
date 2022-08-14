using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace operator_if_else
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // wap to accept 2 no and operator like +,-,*,/ and display the result
            int num1, num2, res=0;
            char op;
            Console.WriteLine("Enter number 1");
            num1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter number 2");
            num2 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter any operator like +,-,*,/");
            op = Convert.ToChar(Console.ReadLine());
           
            if (op == '+')
            {
                res = num1 + num2;
            }
            else if (op == '-')
            {
                res = num1 - num2;
            }
            else if (op == '*')
            {
                res = num1 * num2;
            }
            else if (op == '/')
            {
                res = num1 / num2;
            }
            else
            {
                Console.WriteLine("Invalid operator");
            }
            Console.WriteLine("result= " + res);
            Console.ReadLine();
        }
    }
}
