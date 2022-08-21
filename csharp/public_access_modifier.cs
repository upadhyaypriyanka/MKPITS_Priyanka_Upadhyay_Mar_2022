using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace public_access_modifier
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Car mycar = new Car();
            mycar.name = "ferrari";
            mycar.color = "red";
            mycar.model = 675899;
            mycar.PrintCarInformation();
            Console.ReadLine();
        }

    }
    class Car
    {
        public string name, color;// by default private
        public int model;

        public void PrintCarInformation() // by default private
        {
            Console.WriteLine("Car name = " + name);
            Console.WriteLine("Car color = " + color);
            Console.WriteLine("Car model = " + model);
        }
       
    }
}
