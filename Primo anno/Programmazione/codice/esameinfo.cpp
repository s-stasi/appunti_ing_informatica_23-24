#include <iostream>
#include <cstring>
#include <fstream>
#include <stdlib.h>
using namespace std;
struct PRENOTAZIONE
{
  char codice_prenotazione[19];
  char data_emissione[11];
  char data_inizio[11];
  char codice_albergo[11];
  int numero_giorni;
  int stato_prenotazione;
  int numero_camera;
  int categoria_camera;
  float prezzo;
};

struct NODO
{
  PRENOTAZIONE dato;
  NODO *next;
};

NODO *PrenotazioniAlbergoAffollato(NODO *listaIn, char data[], char *dataSoggiorno, char *alberghi[], int size);
bool VerificaDataSoggiorno(PRENOTAZIONE b, char data[]);
bool VerificaAlbergo(PRENOTAZIONE b, char *albergo);
int Inserimento_in_testa(NODO *&listaOut, PRENOTAZIONE b);
bool VerificaNumeroPrenotazione(NODO *listaIn, PRENOTAZIONE b);

NODO *PrenotazioniAlbergoAffollato(NODO *listaIn, char data[], char *dataSoggiorno, char *alberghi[], int size)
{
  NODO *listaOut = NULL;
  NODO *p = listaIn;
  int contatore = 0;

  char *albergo;
  for (int i = 0; i < size; i++)
  {
    int count;
    count = 0;
    while (p != NULL)
    {
      if (strcmp(alberghi[i], p->dato.codice_albergo) == 0 and
          strcmp(dataSoggiorno, p->dato.data_inizio) == 0)
      {

        count++;
      }
      if (count > contatore)
      {
        contatore = count;
        albergo = alberghi[i];
      }
      p = p->next;
    }
  }
  while (p != NULL)
  {
    bool condizione1 = VerificaDataSoggiorno(p->dato, data);
    bool condizione2 = VerificaAlbergo(p->dato, albergo);
    bool condizione3 = VerificaNumeroPrenotazione(listaIn, p->dato);
    if (condizione1 == true && condizione2 == true && condizione3 == true)
    {
      int errore = Inserimento_in_testa(listaOut, p->dato);
      if (errore != 0)
      {
        return NULL;
      }
    }
    p = p->next;
  }

  return listaOut;
}

int Inserimento_in_testa(NODO *&listaOut, PRENOTAZIONE b)
{
  NODO *t;
  t = new NODO;
  if (t == NULL)
  {
    cout << "Memoria esaurita";
    return 1;
  }
  t->dato = b;
  t->next = listaOut;
  listaOut = t;
  return 0;
}

bool VerificaDataSoggiorno(PRENOTAZIONE b, char data[])
{
  if (strcmp(b.data_emissione, data) == 0)
  {
    return true;
  }

  return false;
}

bool VerificaAlbergo(PRENOTAZIONE b, char *albergo)
{
    if (strcmp(b.codice_albergo, albergo) == 0)
    {
      return true;
    }

  return false;
}

int main()
{
  return 0;
}