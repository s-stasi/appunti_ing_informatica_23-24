# Analisi II

## Serie numeriche

*Data una successione $\{a_n\} n\in \N$ chiamiamo SERIE di termine generale $a_n$ la successione*

$$
S_n=\sum^n_{k=0} a_n
$$

*$S_n$ viene detta SOMMA PARZIALE N-ESIMA della serie e diciamo che la serie converge , diverge, è irregolare se $\{S_n\}$ converge, diverge, è irregolare*.

Se la serie converge, chiamiamo SOMMA della serie il limite a infinito di $S_n$, quindi decidiamo che s è il limite per infinito è uguale alla somma.

## Serie di Fourier

Esistono funzioni definite su $\R$ che possono essere scritte come somma di serie del tipo

$$
S(x) = \sum_{k=0}^\infin {\alpha_k \cos(kx) + \beta \sin(kx)}\\
\alpha_k,\beta_k\in\R
$$

**Polinomio Trigonometrico**

Definiamo polinomio trigonometrico di grado $n$(di periodo $2\pi$) ogni funzione del tipo

$$
P_n(x) = \sum_{k=0}^\infin \alpha_k\cos(kx) + \beta_k\sin(kx)
$$

- Tutti i polinomi trigonometrici di grado 0: $f(x)=k$

- Tutti i polinomi trigonometrici di primo grado: $P_1(k) = \alpha_0+\alpha_1\cos(k)+\beta_1\sin(k)$

- Tutti i polinomi trigonometrici di secondo grado

**Serie trigonometrica**

Chiamiamo serie trigonometrica di periodo $2\pi$ ogni espressione formale del tipo

$$
S(x) = \sum_{k=0}^\infin \alpha_k\cos(kx) + \beta_k\sin(kx)
$$

1) Dati $\alpha_k$ e $\beta_k$ non è detto che esista $x\in\R$ tale che $S(x)$ converga

2) Se anche esiste un sottoinsieme $J\le\R$ in cui la serie trigonometrica converge, e quindi definisce una funzione
   
   $$
   S: J\le\R\to \R
   $$
   
   non si può stabilire a priori la regolarità di questa funzione, nonostante il limite di polinomi trigonometrici che siano tutti funzioni di classe $C^\infin(\R)$

3) Se la serie converge $\forall x \in \R$ e quindi
   
   $$
   S: \R\to\R
   $$
   
   $$
   S(x) = \sum_{k=0}^\infin \alpha_k\cos(kx) + \beta_k\sin(kx)
   $$
   
   allora $S$ è periodica di periodo $2\pi$ poiché è limite di polinomi trigonometrici che sono periodici di periodi $2\pi$ (la periodicità passa al limite). 

Quindi data una funzione periodica di periodo $2\pi$ ci chiediamo quali condizioni in $f$ permettano di scrivere $f$ come somma di una serie trigonometrica

Consideriamo dapprima $f:\R\to\R$ periodica in $2\pi$ e continua in $\R$

*Data una funzione f di r in r, periodica in $2\pi$ e continua in r, i coefficienti di Fourier sono definiti quanto segue:*

$$
a_k=\frac{1}{\pi}\int_0^{2\pi} f(x)\cos(kx)dx : k\in\N,k\ge0
$$

$$
a_k=\frac{1}{\pi}\int_0^{2\pi} f(x)\sin(kx)dx : k\in\N,k\ge1
$$

la serie di Fourier associata ad $f$ è la serie trigonometrica seguente

$$
Sf(k) = \frac{a_0}{2}+\sum_{k=1}^\infin a_k \cos(kx)+b_k\sin(kx)
$$

1) Poiché $f(x)\cos(x)$ e $f(x)\sin(kx)$ sono periodiche in $2\pi \forall k$ i coefficienti di Fourier si possono scrivere come:
   
   $$
   a_k = \frac{1}{\pi}\int_{-\pi}^\pi f(x)\cos(kx)= 
   $$

2) se $f(x)$ è pari su $\R$ allora $f(x)\cos(kx)$ e pari $f(x)\sin(kx)$ è dispari

## Curve

$$
r=I\le \R \to \R^n
$$

Sono delle funzioni che hanno una variabile e tante componenti ma ciascuna delle componenti è una funzione di analisi 1.

**Richiamo di notazioni vettoriali**

Un vettore in $\underline{v}\in\R^n$ ha tante componenti $\underline{v}=\{v_1,v_2,\dots,v_n\}$

$\underline{v}\in\R^2$ $\underline{v}=(v_x,v_y)$

$|\underline{x}| = \sqrt{x_1^2+x_2^2+\dots,x_n^2}$

**Prodotto scalare**

$\underline{x}\cdot\underline{w}: \R^n \times \R^n \to \R$

$\underline{x}\cdot\underline{w}= v_1\cdot w_1 + w_2\cdot w_2 + \dots$

## Funzioni di una variabile reale a valori vettoriali: le curve

$$
\underline{r}=I\le\R\to\R^m \qquad m\ge2
$$

$$
\underline{r}(t=(x_1(t), x_2(t), \dots, x_m(t))
$$

Esempio: la legge oraria di una particella puntiforme nel piano o nello spazio:

$$
\underline{r}=(x(t, y(t))
$$

$$
\underline{r}(t) = (x(t),y(t),z(t))
$$

### Grafo di una curva

$$
\Gamma =\{(t,\underline{r}(t), t\in I\} \le I\in\R^m
$$

Se $m\ge 3$ non si può disegnare

### Immagine di una curva (sostegno, supporto, traiettoria)

$$
\gamma = \{\underline{r}(t),t\in I\}
$$

Osservazione: conoscere il sostegno di una curva non equivale a conoscere la <u>funzione</u>, curve diverse possono avere lo stesso sostegno

$$
\left\{\begin{aligned}
x=r\cos\theta \\
y=r\sin\theta
\end{aligned}\right. \qquad \theta\in[0,2\pi]
$$

### Parametrizzazioni equivalenti o cambi di d'orientazione

Siano:

$$
\begin{align*}
& \underline{r}:[a,b]\to \R^m\\
& \underline{s}:[c,d]\to \R^m
\end{align*}
\qquad m\ge 2 \quad\text{regorlari}
$$

supponiamo

$$
\begin{align*}
& \underline{r}=r(t) \qquad t\in[a,b] \\
& \underline{s}=s(r) \qquad u\in[c,d]
\end{align*}
$$

Supponiamo che  $\exist \varphi:[a,b]\to[c,d] \qquad u=\varphi(t)$

$\varphi\in C^1([a,b])$,  invertibile su   $[a,b]$ e tale che $\varphi^{-1}=[c,d]\to[a,b]$

$\varphi^{-1}\in C^1([c,d])$,  tale che    $\underbar{s}(\varphi(t))=\underbar{r}(t)\qquad \forall t\in [a,b]$

- allora se $\varphi'(t)>0 \quad \forall t\in[a,b]$ diciamo che $\underbar{r}$ e $\underbar{s}$ sono parametrizzazioni equivalenti

- invece se $\varphi'(t)<0 \quad \forall t[a,b]$ diciamo che $\underbar{s}$ è un cambio di orientamento rispetto a $\underbar{r}$

ESEMPIO:

$$
\underbar{r}\left\{\begin{align*}
x=t\\
y=t^2
\end{align*}\right.
\qquad t\in[1,2]=[a,b]
$$

$$
\underbar{s}\left\{\begin{align*}
x=u^2\\
y=u^4
\end{align*}\right.
\qquad u\in[1,\sqrt2]=[c,d]
$$

$$
\varphi:[1,2]\to[1,\sqrt2] \quad u=\sqrt t
$$

$$
\varphi\in C^1([1,2])
$$

$$
t=\varphi^{-1}(u)=u^2 \quad \varphi^{-1}\in C^1([1,\sqrt2])
$$
