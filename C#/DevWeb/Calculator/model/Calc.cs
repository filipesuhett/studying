using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Calculator.model
{
    public class Calc
    {
        public int calculate(int operation, int num1, int num2)
        {
            IOperation op = null;

            if (operation == 1)
            {
                op = new Sum();
            }
            else if (operation == 2)
            {
                op = new Subtraction();
            }
            else if (operation == 3)
            {
                op = new Multiplication();
            }
            else if (operation == 4)
            {
                op = new Division();
            }

            return op.calculate(num1, num2);


        }
    }
}
