#include <iostream>

void getValues(int *values, int length);

void printMenu(char &scelta) {
  std::cout << std::endl;
  std::cout << "A - somma tra n1, n2 e n3\n";
  std::cout << "B - prodotto tra n1 e n2\n";
  std::cout << "C - sottrazione tra n3 e n1\n";
  std::cout << "D - divisione tra n1 e n2\n";
  std::cout << "X - uscita dal programma\n";
  bool error = false;
  do{
    error = false;
    std::cout << "\nInserisci la tua scelta: ";
    std::cin >> scelta;
    if (std::cin.fail()){
      error = true;
      std::cin.clear();
    }
  } while (error);
}

int main(int argc, char const *argv[])
{
  bool run = true;
  int values[3] = { 0, 0, 0 };
  char scelta = 'M';
  getValues(values, 3);

  do
  {
    printMenu(scelta);
    if (scelta == 'A') {
      std::cout << values[0] << " + " << values[1] << " + " << values[2] << " = " << values[0] + values[1] + values[2];
    } else if (scelta == 'B') {
      std::cout << values[0] << " x " << values[1] << " = " << values[0] * values[1];
    } else if (scelta == 'C') {
      std::cout << values[2] << " - " << values[0] << " = " << values[2] - values[0];
    } else if (scelta == 'D') {
      std::cout << values[0] << " / " << values[1] << " = " << values[0] / values[1];
    } else if (scelta == 'X') {
      run = false;
    } else {
      std::cout << "Scelta non valida\n";
    }
  } while (run);

  return 0;
}

void getValues(int *values, int length) {
  bool error = false;
  for (int i = 0; i < length; i++) {
    do {
      error = false;
      std::cout << "Insert value " << length << ": ";
      std::cin >> values[i];
      if (std::cin.fail()) {
        error = true;
        std::cin.clear();
      }
    } while (error);
  }

}