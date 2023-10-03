#include <iostream> // include standard libraries

using namespace std;

int main(int argc, char *argv[])
{
  int num1, num2, sum;
  sum = 0;
  cout << endl << "Sum of 2 numbers" << endl << endl;
  cout << "Insert 2 numbers" << endl << endl;
  cout << "First number: ";
  cin >> num1;
  cout << "\nSecond number: ";
  cin >> num2;
  sum = num1 + num2;
  cout  << endl << endl << "The result is " << sum  << endl << endl;
  std::cout << "press any key to exit..."; // wait for user to hit enter or another key
}