# Numeri con segno

Dato un numero di $n$ bit, il più significativo (sinistra) indica il segno:

- **0** = **-**

- **1** = **+**

Quindi $n-1$ bit è il valore assoluto del numero e l'intervallo di rappresentazione è $[−(2n−1 − 1), −0][+0, 2n−1 − 1]$.



Così com'è questo tipo di rappresentazione ha due problemi principali:

- lo  0 viene rappresentato due volte con due segni

- è difficile fare i calcoli



# Complemento a 2

Si usa per evitare i problemi dei numeri col modulo: con questa rappresentazione l'intervallo è $[−2n−1, +2n−1 − 1]$

Sostanzialmente si fa in modo che il valore con il primo bit a 1 più grande (**1111**) rappresenti il numero negativo più grande (**-1**) e viceversa (**1000 = -8**), mantenendo l'ordine crescente nel mezzo della serie.



Esempio: **$A = −3_{10}, B = 16 − 3 = 13, A = 1101_{ca2}$**



Per cambiare di segno un numero bisogna invertire ogni bit e aggiungere 1 per completare il complemento



# Paginazione

La paginazione è una tecnica di gestione della memoria utilizzata dai sistemi operativi. Consente di dividere la memoria in pagine di dimensioni fisse che hanno indirizzo *pf* (indirizzo della pagina fisica) + $2^k$ (dimensione della pagina).

Per indicare un certo dato all'interno di una pagina si aggiunge all'indirizzo della pagina un *offset*, quindi l'indirizzo completo di un dato in una pagina sarà $pf * 2^k + offset$.

Esempio:

Consideriamo un indirizzo di memoria del tipo **000000000011100000000011**, quindi indirizzamento a **24 bit**. Le pagine sono grandi **1KB = $2^{10}$bit**. Quindi:

| Base (24-10 bit) | Offset (10 bit) |
| ---------------- | --------------- |
| 00000000001110   | 0000000011      |

l'offset è di 10 bit perchè rappresenta lo spostamento all'interno della pagina, che può essere di massimo 10bit



Esempio 32 bit pagina: 00000101011100100010110100101011101000101

| Indirizzo pagina                     | Offset |
| ------------------------------------ | ------ |
| 100001010111001000101101001010111010 | 00101  |

### Domanda Teoria (6 punti)

Si consideri un sistema in cui per gli indirizzi di memoria vengono usati 24 bit e la memoria viene
gestita con il sistema della paginazione con pagine da 1Kbyte e indirizzi logici. Si consideri il
seguente indirizzo logico /=000000000100010000101011.
Se nella tabella delle pagine abbiamo le corrispondenze pl-›pf (in base 10) 13->10, 15->15,
17->19, 20->102, qual è l'indirizzo fisico f su 24 bit corrispondente all'indirizzo logico /?



| Base           | Offset     |
| -------------- | ---------- |
| 00000000010001 | 0000101011 |

base = 17 -> 19 = 10011

offset = 43

indirizzo fisico = 000000000100110000101011



# UNICODE

I codici dei caratteri superano i 127 della tabella ASCII. Per l'encoding si usa un encoding che incapsula i caratteri per essere più chiari su quanti byte vadano letti.

ci sono 4 configurazioni da 1 a 4 byte.

I prefissi sono posti per indicare quanti byte ci sono nella sequenza e se è il primo byte della sequenza o meno

- Configurazione a 1 byte: 
  
  0xxxxxxx, dove x indica un valore generico del bit, che con 7 bit utili corrisponde ai valori nella tabella asci

- Configurazione a 2 byte:
  
  110xxxxx 10xxxxxx, con 11 bit utili, quindi $2^{11}-1$ combinazioni = 2047

- Configurazione a 3 byte:
  
  1110xxxx 10xxxxxx 10xxxxxx, con 16 bit utili, quindi $2^{16}-1$

- Configurazione a 4 byte:
  
  11110xxx 10xxxxxx 10xxxxxx 10xxxxxx, con 21bit utili, quindi $2^{21}-1$




