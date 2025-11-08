//=================================
// Find Maximum of Two Numbers
//=================================
//#include <iostream>
//using namespace std;
//// Find Maximum of Two Numbers
//int findMax(int a, int b) {
//    return (a > b) ? a : b;
//}
//int main() {
//    int num1, num2;
//    cout << "Enter 1st number: ";
//    cin >> num1;
//    cout << "Enter 2st number: ";
//    cin >> num2;
//    cout << "The maximum number is: " << findMax(num1, num2);
//    return 0;
//}

//=================================
// Check if a Number is Even
//=================================
//#include <iostream>
//using namespace std;
//
//bool isEven(int num) {
//    return num % 2 == 0;
//}
//
//int main() {
//    int number;
//    cout << "Enter a number: ";
//    cin >> number;
//    if (isEven(number))
//        cout << number << " is even";
//    else
//        cout << number << " is odd";
//    return 0;
//}


//=================================
// Find Factorial of a Number
//=================================
//#include <iostream>
//using namespace std;
//
//int findFactorial(int n) {
//    int result = 1;
//    for (int i = 1; i <= n; ++i)
//        result *= i;
//    return result;
//}
//
//int main() {
//    int num;
//    cout << "Enter a number: ";
//    cin >> num;
//    cout << "The factorial of " << num << " is " << findFactorial(num);
//    return 0;
//}


//=======================================
// Analyze Number: Count and Sum Digits
//=======================================
#include <iostream>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int sumDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Count of digits: " << countDigits(number) << endl;
    cout << "Sum of digits: " << sumDigits(number);
    return 0;
}





