using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Calculator.model;

namespace Calculator.controller {
    public class ControllerCalc {
        public int calculate(int operation, int num1, int num2) {
            Calc calculator = new Calc();
            return calculator.calculate(operation, num1, num2);

        }
        
    }
}
