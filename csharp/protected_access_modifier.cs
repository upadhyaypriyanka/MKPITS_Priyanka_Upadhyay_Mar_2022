using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace protected_access_modifier
{
    internal class Program
    {
       
        class Car
        {
            protected  string name,color;
            protected int price;
             
            protected void PrintcarInformation()
            {
                Console.WriteLine("Car name = " + name);
                Console.WriteLine("Car color = " + color);
                Console.WriteLine("Car price = " + price);
            }
            class Maruti:Car
            {
                 public float mileage;

               public void MarutiMileage()
                {
                    Console.WriteLine("car mileage = " + mileage);
                }
                static void Main(string[] args)
                {
                    Maruti mycar = new Maruti();
                    mycar.mileage = 456.8f;
                    mycar.price = 7865;
                    mycar.name = "feraari";
                    mycar.color = "red";
                    mycar.MarutiMileage();
                    mycar.PrintcarInformation();
                    Console.ReadLine();


                }
            }

        }
    }
}
