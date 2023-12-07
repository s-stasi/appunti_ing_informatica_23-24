# Funzioni

**Una funzione definita in $A$ a valori in $B$ è una legge che ad ogni elemento $a \in A$ associa al più un elemento di $b \in B$** 

Esempio:

$A=\{\text{studenti ingegneria unibg  }\} b = \N$

$f$ è la legge che ad ogni studente associa il voto nell'esame di analisi matematica 1

**Il sottoinsieme degli $a \in A$ a cui la funzione $f$ associa un elemento di $B$ forma il dominio della funzione. Indicheremo questo insieme con dom $f$**. Scriveremo anche:

$$
f: \text{dom}f \subseteq A \to B
$$

se dom$f = A$ scriveremo anche:

$$
f:A \to B
$$

**Se $A \in \text{dom}f$ l'elemento $b \in B$ associato ad $a$ dalla funzione $f$ si indica con $f(a)$**

$$
f:a \to f(a)
$$

l'insieme contenente tutti gli elementi di questo tipo si chiama immagine della funzione

$$
\text{im}f = \{f(a): a\in \text{dom}f\}
$$

![](/Users/xtc/Desktop/appunti/uni/Analisi/dominio%20e%20codominio.jpg)

Se $f:\R \to \R$ il **grafico** di $f$ è un sottoinsieme del piano cartesiano costituito dalle coppie $(x,y)$ tali che $y = f(x)$ al variare di $x$ nel dominio di $f$

$$
\text{graf} (f) = \{(x,y):x \in \text{dom}f \text{ e } y=f(x)\}
$$

esempio:

$$
f(x) = x + 1
$$

| $x$ | $f(x)$ |
| --- | ------ |
| -1  | 0      |
| 0   | 1      |
| 2   | 3      |

Una **funzione costante** associa un solo valore di $y$ ad ogni $x$: $f(x) = 3$

## Successioni

Funzioni definite su $\N$, ad esempio:

$$
a_n = \frac{1}{n + 2}
$$

dove $n$ sono solo numeri interi

Esercizio 11 $f(x) = x^2$:

1. $f([-1,1])= \{f(x): x\in [-1,1]\}$
   
   un numero $y\in f([-1,1])$ se esiste $x\in [-1,1]$ per cui $f(x) = y$, cioè $x^2=y$
   
   Ci stiamo chiedendo: "per quale $y$ l'equazione $x^2 = y$ ha una soluzione in $[-1,1]$?"
   
   se $y<0$ non ci sono soluzioni
   
   se $y>=0$ allora $x=\pm \sqrt{y}$. quando una soluzione è in $[-1,1]$? Questo avviene se  $\sqrt{y}\le1$, quindi 
   
   $$
   f([-1,1]) = [0,1]
   $$

2. $f(\{0\})$
   
   $y\in f(\{0\})$ se l'equazione $x^2 = y$ ha soluzione $x\in \{0\}$
   
   $$
   f(\{0\}) = \{0\}
   $$

3. $f^{-1}((1,+\infin)) \to f^{-1}(F) = \{a\in A:f(a)\in F\}$
   
   $f: \R \to \R$
   
   $f^{-1}((1,+\infin)) = \{x\in R: x^2\in [1,+\infin)\}$
   
   $x^2>1 \to (-\infin,-1)\bigcup(1,+\infin)$

4. $f(\R) = (0,+\infin)$
