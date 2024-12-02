---
  title: "Probabilità - dati"
author: ""
date: "2023-09-28"
output: html_document
---
  
```{r setup, include=FALSE}
knitr::opts_chunk$set(echo = TRUE)
```
### ESERCIZIO 1	

Si consideri lo spazio campionario S e gli eventi A, B, C:
  
  $\Omega$ = S = {rame, sodio, azoto, potassio, uranio, ossigeno, zinco}

A = {rame, sodio, zinco}

B = {sodio, azoto, potassio}

C = {ossigeno}

#### Quesiti:
1. $A’$ = complementare di A
2. $A \cup B$
  3. $(A \cap B') \cup C’$
4. $B’ \cap C’$
5. $A \cap B \cap C$
6. $(A' \cup B') \cap (A'\cap C)$
  7. $(A \cap B)'$
8. $(A\cup B)’$
9. $(A \cap C) \cup B$

### Soluzioni:


### ESERCIZIO 2

Assoaeroporti è l'associazione confindustriale degli aeroporti italiani che rappresenta 33 società di gestione aeroportuale per 42 aeroporti.
I dati si riferiscono ai passeggeri nazionali e internazionali registrati nel mese di gennaio 2018 per 29 distinti aeoporti classificati per area terriroriale.
Con PASSEGGERI si intende il numero totale di passeggeri in arrivo e partenza.


| id | Aeroporto         | Area geografica italiana | Nazionali | Internazionali |
  |---:|:------------------|:-------------------------|----------:|---------------:|
  |  1 | Alghero           | SUD + ISOLE              |     49157 |           4099 |
  |  2 | Ancona            | CENTRO                   |      2431 |          19121 |
  |  3 | Bari              | SUD + ISOLE              |    204374 |         111067 |
  |  4 | Bergamo           | NORD                     |    233682 |         698658 |
  |  5 | Bologna           | NORD                     |    148827 |         449445 |
  |  6 | Brindisi          | SUD + ISOLE              |    121782 |          19558 |
  |  7 | Cagliari          | SUD + ISOLE              |    199111 |          31699 |
  |  8 | Catania           | SUD + ISOLE              |    431976 |         121057 |
  |  9 | Comiso            | SUD + ISOLE              |     18919 |           7832 |
  | 10 | Cuneo             | NORD                     |      4259 |           4634 |
  | 11 | Firenze           | CENTRO                   |     27143 |         143854 |
  | 12 | Genova            | NORD                     |     46573 |          26969 |
  | 13 | Lamezia Terme     | SUD + ISOLE              |    135603 |          15197 |
  | 14 | Milano Linate     | NORD                     |    354930 |         313188 |
  | 15 | Milano Malpensa   | NORD                     |    207705 |        1382658 |
  | 16 | Napoli            | SUD + ISOLE              |    240847 |         289524 |
  | 17 | Olbia             | SUD + ISOLE              |     47554 |           3505 |
  | 18 | Palermo           | SUD + ISOLE              |    321676 |          52099 |
  | 19 | Perugia           | CENTRO                   |      3488 |           9977 |
  | 20 | Pescara           | SUD + ISOLE              |     21452 |          19093 |
  | 21 | Pisa              | CENTRO                   |    104619 |         171499 |
  | 22 | Roma Ciampino     | CENTRO                   |     21434 |         442822 |
  | 23 | Roma Fiumicino    | CENTRO                   |    775352 |        1849908 |
  | 24 | Torino            | NORD                     |    134661 |         183767 |
  | 25 | Trapani           | SUD + ISOLE              |     35272 |           6222 |
  | 26 | Treviso           | NORD                     |     90068 |         158132 |
  | 27 | Trieste           | NORD                     |     34526 |          14954 |
  | 28 | Venezia           | NORD                     |     72638 |         492953 |
  | 29 | Verona            | NORD                     |     61838 |         129284 |
  
  ### Quesiti:
  1.	Si riclassifichino i passeggeri internazionali (in migliaia) in tre classi: $A = (< 10), B = [10 - 150], C = (> 150)$.

2.	Costruire la distribuzione congiunta tra passeggeri internazionali riclassificati e area geografica.
3.	Se viene estratto a caso un aeroporto, qual è la probabilità che si trovi nel Nord Italia?
  4.	Se viene estratto a caso un aeroporto, qual è la probabilità che si trovi nel Nord Italia e abbia più di 150 passeggeri transitati?
  5.	Se viene estratto a caso un aeroporto, qual è la probabilità che non si trovi nel Nord Italia e abbia almeno 10 passeggeri transitati?
  6.	Se viene estratto a caso un aeroporto, qual è la probabilità che non si trovi nel Nord Italia o abbia meno di 10 passeggeri transitati?
  7.	Se viene estratto a caso un aeroporto del Nord Italia, qual è la probabilità che abbia avuto più di 150 passeggeri transitati?
  8.	Se vengono estratti a caso (con reinserimento) tre aereoporti, qual è la probabilità che solo il secondo sia nel Centro Italia?
  9.	Se vengono estratti senza reinserimento tre aereoporti, qual è la probabilità che solo il secondo sia nel Centro Italia?
  
  ### Soluzioni:
  
  
  ### ESERCIZIO 3	
  Presso un'impresa di costruzioni lavorano 3 ingegneri. L'ingegnere A stima i costi per il 50% dei progetti, l'ingegnere B per il 30% e l'ingegnere C per il 20%. E' noto che il tasso di errore nello stimare i costi è pari a 0,02 per A, 0,01 per B e 0,06 per C.

#### Quesiti:
1.	Calcolare la probabilità che un progetto contenga un errore nella stima dei costi.
2.	Se un progetto contiene un errore nella stima dei costi, quale è la probabilità che questo sia stato preparato dall'ingegnere C?
3.	L'impresa decide di non assegnare la preparazione di progetti all'ingegnere C dato che il suo tasso di errore è ritenuto troppo elevato. Come variano le due probabilità precedentemente calcolate? 
4.	Escluso C, quale sarà la probabilità che un progetto sia stato preparato dall'ingegnere A, dato che questo non contiene un errore?
  
  ### ESERCIZIO 4 (2.17 libro di testo)	
  Un test a scelta multipla è composto da 5 domande, ciascuna con 4 possibili risposte di cui 1 sola corretta

#### Quesiti:
1.	Quanti modi diversi ci sono di scegliere una risposta per ogni domanda?
  2.	Quanti modi diversi ci sono di scegliere una risposta sbaglista per ogni domanda?
  
  ### ESERCIZIO 5 (2.24 libro di testo)	
  
  #### Quesiti:
  1.	Quanti modi ci sono di selezionare 3 candidati per un lavoro, considerando una rosa da 8 candidati neo-laureati? 
  2.	Quanti modi ci sono di selezionare 3 candidati per un lavoro, di cui 2 maschi e 1 femmina, considerando una rosa da 8 candidati neo-laureati (4 maschi e 4 femmine)? 
  
  ### ESERCIZIO 6 (2.42 libro di testo)	
  Un veicolo giunge alle grotte di Luray negli Stati Uniti. La probabilità che sia di targa canadese è 0.12, che sia un camper 0.28, che sia un camper canadese 0.09

#### Quesiti:
1.	Qual è la probabilità che, dato che questo veicolo è un camper, abbia targa canadese?
  2.	Qual è la probabilità che, dato che questo veicolo è di targa canadese, sia un camper?
  3.	Qual è la probabilità che non sia camper oppure non sia canadese?
  
  
  ### ESERCIZIO 7	
  In un gioco di carte, avente un mazzo da 40, se si estrae l'asso si vincono 30 euro, se si estrae una figura si vincono 12 euro mentre in tutti gli altri casi si devono pagare 14 euro. Calcolare la speranza matematica di guadagno.

#### Quesiti:
1.	Calcolare la probabilità che esca un asso oppure una carta di denari
2.	Calcolare la speranza matematica di guadagno
3.	Calcolare la speranza matematica di guadagno se anche l'uscita del 3 è vincente (15 euro)


### ESERCIZIO 8	
Date due urne, la prima contiene 3 palline bianche e 2 rosse mentre la seconda 2 bianche e 4 rosse. Se l’estrazione casuale delle due urne è equiprobabile: 
  
  #### Quesiti:
  1.	Qual è la probabilità di estrarre una pallina bianca da una delle due urne?
  2.	Qual è la probabilità di estrarre una pallina rossa da una delle due urne?
  3.	Qual è la probabiltà di estrarre senza reintroduzione 3 palline rosse dalla prima urna?