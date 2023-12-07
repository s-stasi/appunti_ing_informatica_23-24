#include <iostream>

using namespace std;

void printReverseString(char*, int);
void printMaiuscString(char*, int);
void printNoSpacesString(char*, int);
void countWords(char*, int);
void replaceChar(char*, int);
void countChar(char*, int);

void printMenu(int &scelta) {
  cout << endl << endl;
  cout << "1 - Stampa la stringa\n";
  cout << "2 - Stampa la stringa invertita\n";
  cout << "3 - Stampa la stringa in maiuscolo\n";
  cout << "4 - Stampa eliminando gli spazi\n";
  cout << "5 - Conta il numero di parole presenti\n";
  cout << "6 - Sostituisci un carattere con un altro\n";
  cout << "7 - Calcola la ricorrenza di una determinata lettera dell'alfabeto sia essa minuscola o maiuscola\n";
  cout << "8 - Esci dal programma\n";

  bool fail = false;
  do {
    fail = false;
    cout << "Inserisci la scelta: ";
    cin >> scelta;

    if (cin.fail() || scelta < 0 || scelta > 8) {
      cout << "Scelta non valida\n";
      cin.clear();
      fail = true;
    }
  } while (fail);
}

char* getInput(int &bufferSize) {
  cout << "inserisci una frase: ";

  bufferSize = 0;
  char* phrase = nullptr;

  int c;
  while ((c = cin.get()) != '\n' && c != -1) {
      char* newBuffer = new char[bufferSize + 2];
      copy(phrase, phrase + bufferSize, newBuffer);
      newBuffer[bufferSize++] = static_cast<char>(c);
      newBuffer[bufferSize] = '\0';

      delete[] phrase;
      phrase = newBuffer; 
  }
  return phrase;
}

int main(int argc, char const *argv[])
{
  bool run = true;
  int scelta = 0;
  int strLength = 0;
  char* stringa = getInput(strLength);

  while(run){
    printMenu(scelta);
    switch (scelta)
    {
    case 1:
      cout << stringa << endl;
      break;
    case 2:
      printReverseString(stringa, strLength);
      break;
    case 3:
      printMaiuscString(stringa, strLength);
      break;
    case 4:
      printNoSpacesString(stringa, strLength);
      break;
    case 5:
      countWords(stringa, strLength);
      break;
    case 6:
      replaceChar(stringa, strLength);
      break;
    case 7:
      countChar(stringa, strLength);
      break;
    case 8:
      run = false;
      break;
    
    default:
      break;
    }
  }

  return 0;
}

void printReverseString(char* string, int length) {
  for (; length-1 >= 0; length--) {
    cout << string[length -1];
  }
  cout << endl;
}

void printMaiuscString(char* string, int length) {
  for(int i = 0; i < length; i++) {
    int charValue = (int)string[i];
    if (charValue >= 97 && charValue <= 122) {
      cout << (char)(charValue - 32);
    } else {
      cout << string[i];
    }
  }
  cout << endl;
}

void printNoSpacesString(char* string, int length) {
  for (int i = 0; i < length; i++) {
    if (string[i] != ' ') {
      cout << string[i];
    }
  }
  cout << endl;
}

void countWords(char* string, int length) {
  bool inWord = false;
  int count = 0;

  for (int i = 0; i < length; i++) {
    if (string[i] == ' ') {
      inWord = false;
    } else {
      if (!inWord) {
        count++;
        inWord = true;
      }
    }
  }

  cout << count << " parole";
}

void replaceChar(char* string, int length) {
  char toSubstitute;
  char substitute;
  bool fail = false;
  do {
    fail = false;
    cout << "Inserisci il carattere da sostituire: ";
    cin >> toSubstitute;

    if (cin.fail()) {
      cout << "Carattere non valido\n";
      cin.clear();
      fail = true;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  } while (fail);

  do {
    fail = false;
    cout << "Inserisci il carattere da inserire: ";
    cin >> substitute;

    if (cin.fail()) {
      cout << "Carattere non valido\n";
      cin.clear();
      fail = true;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  } while (fail);

  for (int i = 0; i < length; i++) {
    if (string[i] == toSubstitute) {
      cout << substitute;
    } else {
      cout << string[i];
    }
  }

  cout << endl;
}

void countChar(char* string, int length) {
  bool fail = false;
  char toCount;
  int count = 0;

  do {
    fail = false;
    cout << "Inserisci il carattere da contare: ";
    cin >> toCount;

    if (cin.fail()) {
      cout << "Carattere non valido\n";
      cin.clear();
      fail = true;
    }
  } while (fail);

  int toCountInt = (int)toCount;

  for (; length-1 >= 0; length--) {
    int charCode = (int)string[length-1];
    if (toCountInt <= 90 && toCountInt >= 65) {
      if (toCountInt == charCode || toCountInt + 32 == charCode) {
        count++;
      }
    } else if (toCountInt <= 122 && toCountInt >= 97) {
      if (toCountInt == charCode || toCountInt - 32 == charCode) {
        count++;
      }
    } else if (toCountInt == charCode) {
      count++;
    }
  }

  cout << count << " ricorrenze del carattere" << endl;
}