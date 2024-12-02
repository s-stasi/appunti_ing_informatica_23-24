#include <iostream>

#define N 3
#define M 7

using namespace std;

typedef struct student {
  int matricola;
  char nome[30];
  char cognome[30];
} Student;

typedef struct exam {
  int matricola;
  char esame[30];
  int voto;
} Exam;

void getStudents(Student *students, int length);
void getExams(Exam* exams, Student* students, int examsLength, int studentsLength);
void countMarks(Student &student, Exam* exams, int examLength);

int main(int argc, char const *argv[])
{
  Student students[N];
  Exam exams[M];

  getStudents(students, N);
  getExams(exams, students, M, N);

  for( int i = 0; i < N; i++) {
    countMarks(students[i], exams, M);
  }

  return 0;
}

void getStudents(Student* students, int length) {
  for (int i = 0; i < length; i++) {
    cout << "Nuovo studente (matricola, nome, cognome)\n";

    bool fail = false;

    do {
      fail = false;

      cout << "Inserisci la matricola: ";
      cin >> students[i].matricola;

      if(!cin.fail()) {
        for (int j = 0; j < length; j++) {
          if (students[i].matricola == students[j].matricola && j != i) {
            cout << "Lo studente esiste già\n";
            fail = true;
          }
        }
      }

      if(cin.fail()) {
        fail = true;
        cout << "Matricola non valida.\n";
        cin.clear();
      }
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (fail);

    cout << "Inserisci il nome: ";
    cin >> students[i].nome;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Inserisci il cognome: ";
    cin >> students[i].cognome;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << endl;
    
  }
}

void getExams(Exam* exams, Student* students, int examsLength, int studentsLength) {
  for (int i = 0; i < examsLength; i++) {
    cout << "Nuovo esame (matricola, esame, voto)\n";

    bool fail = false;

    do {
      fail = false;
      cout << "Inserisci matricola: ";
      cin >> exams[i].matricola;

      if(!cin.fail()) {
        bool exists = false;

        for (int j = 0; j < studentsLength; j++) {
          if (exams[i].matricola == students[j].matricola) {
            exists = true;
          }
        }

        if(!exists) {
          fail = true;
          cout << "Matricola non valida\n";
        }
      } else {
        fail = true;
        cin.clear();
      }

      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (fail);

    cout << "Inserisci l'esame: ";
    cin >> exams[i].esame;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    do {
      cout << "Inserisci il voto: ";
      cin >> exams[i].voto;

      if (cin.fail()){
        fail = true;
        cout << "Voto non valido.\n";
        cin.clear();
      }

      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (fail);
    cout << endl;
  }
}

void countMarks(Student &student, Exam* exams, int examLength) {
  int count = 0;
  for (; examLength >= 0; examLength--) {
    if(exams[examLength - 1].matricola == student.matricola) {
      count += exams[examLength - 1].voto;
    }
  }

  cout << student.nome << " " << student.cognome << "(" << student.matricola << "): " << count << " punti\n";
}
