#include <iostream> // include standard libraries

using namespace std;

int main(int argc, char *argv[])
{
  int num1, num2;
  cout << "\nMax from 2 numbers\n\n";
  cout << "Digit the first number \n\n";
  cout << "First number: ";
  cin >> num1;
  cout << "Second number: ";
  cin >> num2;
  if (num1 < num2)
  {
    cout << "\n"
         << num1 << " is greater than " << num2 << "\n\n";
  }
  else
  {
    cout << endl
         << num1 << " is less or equal than";
    cout << num2 << endl
         << endl;
  }
  cout << "press any key to exit... "; // wait for user to hit enter or another key
  char x = -2;
  while (x == -2)
    cin.get(x);
  return EXIT_SUCCESS;
}
