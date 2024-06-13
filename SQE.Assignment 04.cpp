#include <iostream>

 

bool isEven(int number) {

   // Check if a number is even

   if (number % 2 == 0) {

       return true;

   } else {

       return false;

   }

}

 

bool isPositive(int number) {

   // Check if a number is positive

   if (number > 0) {

       return true;

   } else {

       return false;

   }

}

 

std::string evaluateNumber(int number) {

   // Evaluate a number based on whether it is even and positive

   if (isEven(number) && isPositive(number)) {

       return "Even and Positive";

   } else if (isEven(number) && !isPositive(number)) {

       return "Even and Negative";

   } else if (!isEven(number) && isPositive(number)) {

       return "Odd and Positive";

   } else {

       return "Odd and Negative";

   }

}

 

int main() {

 

   std::cout << evaluateNumber(2) << std::endl;    // Even and Positive

   std::cout << evaluateNumber(-2) << std::endl;   // Even and Negative

   std::cout << evaluateNumber(3) << std::endl;    // Odd and Positive

   std::cout << evaluateNumber(-3) << std::endl;   // Odd and Negative

 

   return 0;

}

