# Limiti

## Intorni

Sia $x_0 \in \R$ e sia $r > 0$. Chiameremo intorno $x_0$ di raggio $r$ l'insieme

$$
I_r(x_0)=\{x \in \R: |x - x_0| <r\} = (x_0-r,x_0+r)
$$

Diremo anche che $x_0$ è il centro dell'intorno. E' anche simmetrico.

Chiamiamo interno di $+\infin$ un intervallo aperto del tipo:

$$
I_a(+\infin) = (a, +\infin)
$$

Chiameremo un intorno di $-\infin$ un intervallo del tipo:

$$
I_a(-\infin) = (-\infin, -a)
$$

Diremo che una proprietà $p(x)$ che dipende da un punto $x\in\R$ vale in un intorno di $x_0$ (oppure in un intorno di $+\infin$ o di $-\infin$) se esiste un intorno $I_r(x_0)$ tale che per ogni $x\in I_r(x_0)$ la proprietà $p(x)$ vale.

## Limiti

Considerando una successione:

$$
a_n = \frac{n}{n^2+1}
$$

Guardando che i valori di $a_n$ si avvicinano a 0 al crescere di $n$. I valori di $a_n$ si approssimano a 0.

Data una successione di numeri reali $a_n$ si dice che $a_n$ ha per limite il numero reale $l$ e si scrive:

$$
\lim_{n\to+\infin} a_n = l
$$

se per ogni valore $\epsilon > 0$ esiste $n_\epsilon \in \N$ tale che per ogni $n\ge n_\epsilon$ si abbia

$$
|a_n-l|<\epsilon
$$

Verifica:

$$
\left|\frac{1}{n}-0\right| < \epsilon
$$

1. fisso $\epsilon > 0$ e vedo quando vale l'equazione risolvendola

2. $n > \frac{1}{\epsilon}$

Si dice che la successione $a_n$ a limite $+\infin$ e si scrive:

$$
\lim_{n\to+\infin} a_n = +\infin
$$

se per ogni numero reale $M>0$ esiste un intero $n_0$ tale che se $n\ge n_0$ allora $a_n < -M$
