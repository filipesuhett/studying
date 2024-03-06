using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Calculator.controller;

namespace Calculator.view
{
    public class Menu
    {
        public void showMenu()
        {
            Console.WriteLine("Calculator");
            Console.WriteLine("1. Sum");
            Console.WriteLine("2. Subtraction");
            Console.WriteLine("3. Multiplication");
            Console.WriteLine("4. Division");
            Console.WriteLine("5. Exit");

            int option = Convert.ToInt32(Console.ReadLine());

            while (option != 5)
            {

                Console.WriteLine("Enter the first number");
                int num1 = Convert.ToInt32(Console.ReadLine());

                Console.WriteLine("Enter the second number");
                int num2 = Convert.ToInt32(Console.ReadLine());

                ControllerCalc calcController = new ControllerCalc();

                int result = calcController.calculate(option, num1, num2);

                Console.WriteLine("The result is: " + result);
                Console.WriteLine("");

                Console.WriteLine("Calculator");
                Console.WriteLine("1. Sum");
                Console.WriteLine("2. Subtraction");
                Console.WriteLine("3. Multiplication");
                Console.WriteLine("4. Division");
                Console.WriteLine("5. Exit");

                option = Convert.ToInt32(Console.ReadLine());
            }

        }
    }
}
