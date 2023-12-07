#include <iostream>
#include <chrono>
#include <random>

#define MAX_LENGTH 50
#define MAX_VALUE 100

using namespace std;

float mean(int* array);
void aroundMean(int* array);
void fillRand(int* array);
int min(int* array);
int max(int* array);
int moda(int* array);
void printArray(int* array, int length, const char* title = nullptr);

void printMenu(int &scelta) {
  cout << endl << endl;
  cout << "1 - Media dei valori nell'array\n";
  cout << "2 - Massimo\n";
  cout << "3 - Minimo\n";
  cout << "4 - Nuovi valori\n";
  cout << "5 - Valori distanti massimo 4 dalla media\n";
  cout << "6 - Moda\n";
  cout << "7 - Esci dal programma\n";

  bool fail = false;
  do {
    cout << "Inserisci la scelta: ";
    cin >> scelta;
    if (cin.fail() || scelta < 0 || scelta > 7) {
      cout << "Scelta non valida\n";
      cin.clear();
      fail = true;
    }
  } while (fail);
}

int main(int argc, char const *argv[])
{
  bool run = true;
  int scelta = 0;
  int array[MAX_LENGTH];

  srand((unsigned int)time(0));

  fillRand(array);
  printArray(array, MAX_LENGTH, "Il tuo array e'");

  while(run){
    printMenu(scelta);
    switch (scelta)
    {
    case 1:
      cout << "La media dei valori nell'array e': " << mean(array) << endl;
      break;
    case 2:
      cout << "il massimo e': " << max(array) << endl;
      break;
    case 3:
      cout << "il minimo e': " << min(array) << endl;
      break;
    case 4:
      fillRand(array);
      printArray(array, MAX_LENGTH, "Il nuovo array e'");
      break;
    case 5:
      aroundMean(array);
      break;
    case 6:
      cout << "La moda è: " << moda(array);
      break;
    case 7:
      run = false;
      break;
    
    default:
      break;
    }
  }

  return 0;
}

void printArray(int* array, int size, const char* title) {
  if (title != nullptr) {
    cout << title << ": ";
  }
  cout << "[";
  for (int i = 0; i < size; i++) {
    cout << " " << array[i];
  }
  cout << " ]" << endl;
}

void fill(int* array, int value) {
  for (int i = 0; i < MAX_LENGTH; i++) {
    array[i] = value;
  }
}

void fillRand(int* array) {
  for (int i = 0; i < MAX_LENGTH; i++) {
    array[i] = rand() % 100 + 1;
  }
}

float mean(int* array) {
  int sum = 0;
  for (int i = 0; i < MAX_LENGTH; i++) {
    sum += array[i];
  }
  return (float)sum / MAX_LENGTH;
}

int max(int* array) {
  int max = 0;
  for (int i = 0; i < MAX_LENGTH; i++) {
    if (max < array[i])
      max = array[i];
  }
  return max;
}

int min(int* array) {
  int min = 100;
  for (int i = 0; i < MAX_LENGTH; i++) {
    if (min > array[i])
      min = array[i];
  }
  return min;
}

void aroundMean(int* array) {
  float media = mean(array);
  float sopraMedia = media + 4;
  float sottoMedia = media - 4;
  cout << "Gli elementi che distano massimo 4 dalla media sono: [";
  for (int i = 0; i < MAX_LENGTH; i++) {
    if (array[i] <= sopraMedia && array[i] >= sottoMedia) {
      cout << array[i] << ',';
    }
  }
  cout << "]" << endl << endl;
}

int posInArray(int num, int *A, int *B)
{
  for (int i = 0; i < MAX_LENGTH * 2; i += 2)
  {
    if (num == B[i]) return i;
  }
  return -1;
}

int moda(int* array) {
  int *B = new int[MAX_LENGTH * 2];
  for (int i = 0; i < MAX_LENGTH * 2; i++) {
    B[i] = -1;
  }

  int posLibera = 0; 

  // every a
  for (int i = 0; i < MAX_LENGTH; i++)
  {
    // check if in A
    int pos = posInArray(array[i], array, B);
    if (pos == -1)
    {
      B[posLibera] = array[i];
      B[posLibera + 1] = 1;
      posLibera+=2;
    }
    else
    {
      B[pos + 1] += 1;
    }
  }

  int big = 0;
  int lastBig = 0;
  for (int i = 1; i < MAX_LENGTH *2; i+=2) {
    // std::cout << i << ": " << B[i-1] << "-" << B[i] << std::endl;
    if (B[i] > lastBig) {
      lastBig = B[i];
      big = B[i-1];
    }
  }
  // std::cout << big;

  return big;
}
