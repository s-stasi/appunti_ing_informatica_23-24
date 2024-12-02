#include <iostream> // include standard libraries

using namespace std;

int main(int argc, char *argv[])
{

  int num, max;
  max = 0;
  num = 1;
  while (num != 0)
  {
    cout << "Digit a number (digit 0 to exit):";
    cin >> num;
    if (num > max)
      max = num;
  }
  cout << "\nThe max is " << max << "\n";
  cout << "press any key to exit..."; // wait for user to hit enter or another key

  return EXIT_SUCCESS;
}