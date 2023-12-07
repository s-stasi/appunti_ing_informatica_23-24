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

## 

$$
\lim_{x\to c}(f(x)\pm g(x) = l \pm m\\

\lim_{x\to c}(f(x)\ g(x) = l m\\

\lim_{x\to c}(\frac{f(x)}{g(x)} = \frac{l}{m} \to g(x) = 0
$$

**Tutto questo se i limiti esistono finiti o infiniti**

$$
\begin{split}
\lim_{x\to 0}\frac{x^2 - x + 5 + \sin{x}}{s+x\cos{x}} &= \frac{\lim_{x\to 0}x^2-x+5+\sin x}{\lim_{x\to 0}3+x\cos x}\\
&=\text{limite di ogni cosa}\\
&=\frac{0-0+5+0}{3+0*1}\\
&=\frac{5}{3}
\end{split}
$$

$$
\lim_{x\to \frac{\pi}{2}} \tan(x) = \lim_{x\to \frac{\pi}{2}} \frac{\sin(x)}{\cos(x)}=\frac{1}{0}=\infin
$$

$$
\lim_{x\to \frac{\pi}{2}^+} \tan(x) = \lim_{x\to \frac{\pi}{2}} \frac{\sin(x)}{\cos(x)}=\frac{1}{0^-}=-\infin
$$

$$
\lim_{x\to \frac{\pi}{2}^-} \tan(x) = \lim_{x\to \frac{\pi}{2}} \frac{\sin(x)}{\cos(x)}=\frac{1}{0^+}=+\infin
$$

Supponiamo che f ammetta un limite l finito o infinito per x tendente a c. Allora f non ha altri limiti per x tendente a c.

*dimostrazione* Supponiamo, per assurdo, che esistano due limiti l1 ed l2 con l1 diverso da l2. quindi che valgano 

$$
\lim_{x\to x_0} f(x) = l1\\
\lim_{x\to x_0} f(x) = l2
$$

Sia $\epsilon > 0$, allora dovendo valere (1) esisterà $\delta_1$ tale che se $0<|x,x_o|<\delta_1$ allora 

$$
|f(x)-l_1|<\epsilon
$$

Dovendo valere anche (2) esisterà $\delta_2$ tale che se $0<|x-x_0|<\delta_2$ allora 

$$
|f(x)-l_2|<\epsilon
$$

Prendiamo un valore $x$ che si trova in tutti e due gli intervalli

Allora valgono $|f(x) - l_1|<\epsilon$ e $|f(x) - l_2|<\epsilon$

$0<|l_1-l_2| = |l_1 - f(x) +l_2 -f(x)|\le| f(x) - l_1 +f(x) l_2|<\epsilon + \epsilon =2\epsilon$
