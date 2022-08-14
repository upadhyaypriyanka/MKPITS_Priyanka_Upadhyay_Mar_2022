using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace datatypes
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //byte(0-225)
            byte b1;
            Console.WriteLine("Enter bite");
            b1 = Convert.ToByte(Console.ReadLine());
            Console.WriteLine("byte entered= "+b1);

            //sbyte(singed byte -128 to 127)
            sbyte b2;
            Console.WriteLine("Enter sbite");
            b2 = Convert.ToSByte(Console.ReadLine());
            Console.WriteLine("sbyte entered= " + b2);

            // short( singed 16-bit integer -32,768 to 32,767)
            short b3;
            Console.WriteLine("Enter short number");
            b3 = Convert.ToInt16(Console.ReadLine());
            Console.WriteLine("short entered= " + b3);

            // ushort( unsinged 16-bit integer 0 to 65,535)
            ushort b4;
            Console.WriteLine("Enter ushort number");
            b4 = Convert.ToUInt16(Console.ReadLine());
            Console.WriteLine("ushort entered= " + b4);

            // int( singed 32-bit integer -2,147,483,648 to 2,147,483,647)
            int b5;
            Console.WriteLine("Enter int number");
            b5 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("int entered= " + b5);


            // uint( unsinged 32-bit integer 0 to 4,294,967,295)
            uint b6;
            Console.WriteLine("Enter uint number");
            b6 = Convert.ToUInt32(Console.ReadLine());
            Console.WriteLine("uint entered= " + b6);

            // long( signed 64-bit)
            long b7;
            Console.WriteLine("Enter long number");
            b7 = Convert.ToInt64(Console.ReadLine());
            Console.WriteLine("long entered= " + b7);

            // ulong( unsinged 64-bit )
           ulong b8;
            Console.WriteLine("Enter ulong number");
            b8 = Convert.ToUInt64(Console.ReadLine());
            Console.WriteLine("ulong entered= " + b8);

            // float
            float b9;
            Console.WriteLine("Enter float number");
            b9 = Convert.ToSingle(Console.ReadLine());
            Console.WriteLine("float entered= " + b9);


            // double
            double b10;
            Console.WriteLine("Enter double number");
            b10 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("double entered= " + b10);

            Console.ReadLine();


        }
    }
}
