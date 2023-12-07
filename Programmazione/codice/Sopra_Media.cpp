#include <iostream>

using namespace std;

void printMenu() {
  cout << "Inserisci 10 numeri. Dopo ogni numero premi invio" << endl;
  cout << "Scrivi 0 per uscire" << endl;
}

void initArray(int (&array)[10]) {
  for (int i = 0; i < 10; i++) {
    array[i] = 0;
  }
}

int main() {
  int array[10];
  
  while (true) {
    initArray(array);
    int sum = 0;
    float media = .0;


    printMenu();
    for (int i = 0; i<10; i++) {
      int number = 0;
      cout << "Inserisci un numero: (" << i+1 << "-10) ";
      cin >> number;
      if (!number) return 0;
      array[i] = number;
    }
    
    for (int i = 0; i<10; i++) {
      sum += array[i];
    }

    media = (float)sum / (float)10;

    cout << "La media è " << media << endl;

      cout << "Gli elementi sopra la media sono: [";
    for (int i = 10; i > 0; i--) {
      if (media < array[i - 1]) {
        cout << array[i - 1] << ',';
      }
    }
      cout << "]" << endl << endl;
  }

  return 0;
}

