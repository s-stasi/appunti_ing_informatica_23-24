#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int num, sum;
  sum = 0;
  num = 1;
  while (num != 0)
  {
    cout << endl << " Digit a number (digit 0 to exit): ";
    cin >> num;
    sum = sum + num;
  }
  cout << endl << "The result is " << sum << endl << endl;
  cout << "press any key to exit..."; // wait for user to hit enter or another key
  return EXIT_SUCCESS;
}