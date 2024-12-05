# Analisi

prof luca Brandolini lunedì dalle 9:30 alle 10:30

## Libri

claudio canuto analisi matematica 1

esercitazioni di analisi matematica 1 bramanti

## Programma

- Numeri reali

- Funzioni e limiti

- Derivate

- Integrali

- Serie numeriche

## Appelli d'esame

22 gennaio 24

12 febbraio 24

17 giugno 24

6 settembre 24

2 prove 1 pratica e 1 teoria

2 prove parziali 

1) inizio novembre per prima metà del programma

2) 22 gennaio per seconda parte del programma

## Prova in itinere

Venerdì 3 Novembre mattina (non obbligatoria, compitino) **9 cfu: 1cfu=25h di lavoro**



## Funzioni

Siano $X$ e $Y$ due insiemi, una **funzione** $f$ definita in $X$ a valori di $Y$ è una corrispondenza che associa ad ogni elemento $x\in X$ al più un elemento $y\in Y$. L'insieme delle $x$ forma il **dominio** della funzione.

$$
f:\text{dom}f\subseteq X\to Y
$$

Se dom$f = X$ diremo che $f$ è definita su $X$ e scriveremo più semplicemente $f:X\to Y$

![[Secondo Anno/Analisi II/1.png]]

L'elemento $y\in Y$ associato ad un elemento del dominio si dice l'**immagine di** $x$ attraverso $f$ e si indica con $y = f(x)$

$$
f:x\mapsto f(x)
$$

L'insieme degli elementi $y$ di tipo $y=f(x)$ è detto l'**immagine** di $f$. Si indica con $\text{im}f$.

Il **grafico** o **sostegno** della funzione $f$ è definito dal sottoinsieme $\Gamma(f)$ del prodotto cartesiano $X\times Y$ costituito dalle coppie $(x,f(x))$ al variare di $x$ nel dominio di $f$:

$$
\Gamma(f)=\{(x,f(x)\in X\times Y :x\in \text{dom}f \}
$$

Se $Y=\R$ allora diremo che la funzione è **reale**, mentre se $Y=\R^n$ diremo che è una **funzione di** $n$ **variabili reali**. Una funzione per la quale $X=\N$ con dominio ${n\in \N:n\ge n_0}$ per un qualunque intero $n \ge n_0$ si dice **successione**. Solitamente le successioni vengono indicate con $a$. In questo caso speciale di funzione si preferisce utilizzare la notazione $a_n$ invece che $a(n)$

$$
a:n\mapsto a_n
$$

![[Secondo Anno/Analisi II/2.png]] $f:\R \mapsto\R, f(x)=ax+b$ 

![[Secondo Anno/Analisi II/3.png]] $f:\R\mapsto\R, f(x)=x^2$

![[Secondo Anno/Analisi II/4.png]] $f:\R-(\setminus)\{0\} \subset\R \to \R, f(x)=\frac{1}{x}$

Una funzione reale di variabile reale può essere **definita a tratti**, ossia attraverso espressioni diverse su intervalli divisi. Funzione $f:[0,3]\to \R$ definita come:

$$
\begin{cases}
3x &\text{se } 0\le x \le1\\
4-x &\text{se } 1<x\le2\\
x-1 &\text{se } 2<x\le3 
\end{cases}
$$

![[Secondo Anno/Analisi II/5.png]]

#### Funzioni a tratti notevoli

- **Valore assoluto**
  
  ![[Secondo Anno/Analisi II/6.png]] $f:\R \to\R, f(x)=|x|=
  \begin{cases}
  x &\text{se } x \ge0\\
  -x &\text{se } x<0
  \end{cases}$

- **Segno**
  
  ![[Secondo Anno/Analisi II/7.png]] $f:\R \to\Z, f(x)=\text{sign}(x)=
  \begin{cases}
  +1 &\text{se } x > 0\\
  0 &\text{se } x = 0\\
  -1 &\text{se } x<0
  \end{cases}$

- **Parte intera**
  
  ![[Secondo Anno/Analisi II/8.png]] $f:\R\to\Z, f(x)=[x]=\text{grande numero relativo} \le x$

- **Mantissa**
  
  ![[Secondo Anno/Analisi II/9.png]]$f:\R\to\R, f(x)=M(x)=x-[x]$
  
  

Nel grafico delle successioni avremo dei punti solo dove la $x$ è intera invece di curve.

### Immagine e controimmagine

Sia $A$ un sottoinsieme di $X$, l'**immagine di $A$ attraverso $f$** è l'insieme

$$
f(A)=\{f(x):x\in A\}\subseteq \text{im}f
$$

Sia poi un generico elemento di $Y$, la **controimmagine di $y$ attraverso $f$** è l'insieme

$$
f^{-1}(y)=\{x\in \text{dom}f:f(x)=y\}
$$

degli elementi di $X$ che hanno come immagine $y$.



Chiamiamo **estremo superiore** di $f$ in $A$ l'estremo superiore dell'insieme $f(a)$

$$
\sup_{x\in A} f(x) =\sup f(A)=\sup\{f(x) |x\in A\}
$$

Diciamo che $f$ è superiormente limitata se l'insieme $f(A)$ è superiormente limitato, cioè se $\sup f(x)<+\infin$. Se sup è finito e appartiene ad $f(a)$ allora sarà anche il massimo di questo insieme.Tale numero viene anche chiamato **massimo** e indicato con $\max_{x\in A}f(x)$.

$M = \max f$ è caratterizzato dalle seguenti condizioni:

-  $M$ è un valore assoluto della funzione $A$, quindi
  
  $$
  \text{esiste }x_M \in A \text{ tale che } f(x_M)=M
  $$

- $M$ è maggiore o uguale a qualsiasi altro valore assoluto della funzione su $A$, quindi
  
  $$
  \text{per ogni } x\in A, f(x)\le M
  $$

Il concetto di **estremo inferiore** e di **minimo** di $f$ su $A$ sono definiti in modo analogo.

In conclusione

$$
f \text{ dicesi limitata su } A \text{ se l'insieme } f(A) \text{ è limitato}
$$

### Funzioni iniettive, suriettive e funzione inversa

Una funzione a valori in $Y$ dicesi **suriettiva** se $\text{im}f=Y$, cioè se ogni $y\in Y$ è immagine di almeno un elemento $x\in X$.
