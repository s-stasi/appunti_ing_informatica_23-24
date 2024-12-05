# Fondamenti di automatica

## Sistema dinamico

Un sistema dinamico è un oggetto che interagisce col mondo circostante mediante:

- **Ingressi**: azioni compiute sul sistema da agenti esterni

- **Uscite**: descrivono la risposta del sistema a questi agenti esterni

I sistemi dinamici sono descritti da modelli matematici che possono essere:

- **A tempo continuo**: descrivono relazioni tra segnali a tempo continuo $\in \R$

- **A tempo discreto**: il tempo è una variabile reale di un tempo $\in\Z$

Un sistema si dice **dinamico** quando la conoscenza dei valori in ingresso a un tempo $t$ non è sufficiente a determinare univocamente il valore delle variabili in uscita nel medesimo tempo $t$

![[Secondo Anno/Fondamenti di automatica/1.png]]

Per determinare $w_{out}$ bisogna conoscere anche il livello iniziale del serbatoio

$$
\left.\begin{aligned}
w_{in}(t), t\in[t_0,t_f] \\
h(t_0)
\end{aligned} \right\}\Rightarrow w_{out}(t), t\in[t_0,t_f]
$$

**Esempio 1**

Esempio che serve a capire l'importanza delle condizioni iniziali

![[Secondo Anno/Fondamenti di automatica/2.png]]

![[Secondo Anno/Fondamenti di automatica/3.png]]

Nei due esperimenti la velocità di ingresso dell'acqua è la medesima, a cambiare è il livello iniziale. In quello in cui il livello è alto il serbatoio si svuota, mentre dove il livello è basso si riempie. Questi due esempi sono `dinamici`, perché non possiamo dedurre lo stato finale anche conoscendo l'ingresso.

**Esempio 2**

![[Secondo Anno/Fondamenti di automatica/4.png]]

Basta conoscere $i(t)$ per determinare univocamente $v(t)$. In questo caso il sistema è `NON dinamico`, perché conoscendo solo l'ingresso posso determinare l'uscita.

Per risolvere un sistema:

- bisogna memorizzare le condizioni in cui si trova il sistema nell'istante in cui si comincia ad applicare l'ingresso.

- Serve "**Memoria**", cioè le `variabili di stato`, sono delle variabili interne al sistema che memorizzano lo stato del sistema almeno al tempo $t_0$, per essere in grado di determinare l'uscita $y(t)$ per $t\ge t_0$, in conseguenza dell'applicazione di un ingresso $u(t)$ per $t\ge t_0$ 

- La ragione non è puramente matematica (Se uso eq.differenziali devo conoscere le condizioni iniziali)

### Variabili di stato

Le variabili di stato interne al sistema vengono immagazzinate nel `vettore di stato`, cioè $x(t)$

$$
\begin{align}

    x_i(t)\qquad i = 1,2, ... , n \qquad \Longrightarrow \qquad
    x(t) &= \begin{bmatrix}
           x_{1}(t) \\
           x_{2}(t) \\
           \vdots \\
           x_{m}(t)
         \end{bmatrix}\\
&\text{vettore di stato}
  \end{align}
$$

Dove $n$ è l'ordine del sistema

### Modelli matematici a tempo continuo di sistemi dinamici

![Schermata 2024-09-27 alle 18.53.19.png](/Users/xtc/Desktop/appunti/uni/Secondo%20Anno/Fondamenti%20di%20automatica/5.png)

Consideriamo un serbatoio iniziale vuoto $h(0)=0m$ con area di base $A=1m^2$ e con coefficiente di deflusso $k=0.1m^2/s$.

Vogliamo riempirlo con una portata in ingresso costante $u(t)=\bar{u}=1m^3/s$.

Per descrivere la dinamica del sistema si ottiene una equazione differenziale, in questo caso del 1° ordine.

![](/Users/xtc/Desktop/appunti/uni/Secondo%20Anno/Fondamenti%20di%20automatica/6.png)

Questo segnale si chiama scalino di ampiezza unitaria e si indica con

$u(t) = sca(t)$

La portata in uscita raggiunge il valore $y(t) = 1 \frac{m^3}{s}$ in circa 40 − 50 s

Il procedimento sarà sempre il medesimo:

- Si parte dalla descrizione della fisica del sistema utilizzando equazioni di conservazione/bilancio (di volume, di forze, di tensioni, di correnti,…).

- Se il sistema è dinamico, si ottiene un’equazione differenziale in cui è possibile identificare una variabile causa (l’ingresso) ed una variabile effetto (l’uscita, incognita dell’equazione differenziale), entrambe dipendenti dal tempo.

- Assegnato un valore iniziale per l’uscita (l’incognita / lo stato) e le sue derivate e assegnata una funzione di ingresso, si può integrare l’equazione differenziale ed ottenere l’andamento nel tempo dell’uscita (il movimento dell’uscita).

[Ripasso di calcolo matriciale molto utile](https://unibgit.sharepoint.com/sites/msteams_9848c2/Shared%20Documents/General/Materiale%20del%20corso/Esercitazioni%202024-25/Esercitazione%2001/Esercitazione%20FdA%2001%20-%202024-25.pdf)

### Rappresentazione di stato (sistemi SISO (single input single output) stazionari)

$$
\begin{cases}
 \dot{x}(t) = f(x(t), u(t)) \\
 y(t) = g(x(t), u(t)) \\
\end{cases}\\
x(t_0) = x_0
$$

$$
\begin{align}
x(t) \in R^n \quad& u(t) \in R & y(t) \in R \\
\text{vettore} \qquad& \text{scalare} & \text{scalare} \\
\end{align}
$$

Sono sistemi in cui si ha un unico input e un unico output.

- $f(\cdot)$ è una funzione vettoriale con valori in $\R^n$

- $g(\cdot)$ è una funzione scalare con valori in $\R$

**Esempio 1**

![[Secondo Anno/Fondamenti di automatica/7.png]]

$f(\cdot)$ e $g(\cdot)$ sono funzioni scalari lineari di $u$ ed $x$. Nell’esempio la $f(x)$ è una funzione non vettoriale siccome ho solo una equazione di stato (quella in blu) e non due.

**Esempio 2**

![[Secondo Anno/Fondamenti di automatica/8.png]]

$f(\cdot)=
\begin{bmatrix}
f_1(\cdot)\\
f_2(\cdot)
\end{bmatrix}$ è una funzione vettoriale lineare di $u$ ed $x$ perché ha due equazioni di stato

$g(\cdot)$ è una funzione scalare lineare di $u$ ed $x$

Un sistema è `strettamente proprio` se nella equazione di uscita non compare l'ingresso al tempo $t$ cioè non c’è una dipendenza diretta dell’uscita al tempo $t$ all’ingresso al medesimo tempo $t$ , altrimenti si dice solo `proprio`

$$
\begin{cases}
 \dot{x}(t) = f(x(t), u(t)) \\
 y(t) = g(x(t)) \\
\end{cases}\\
x(t_0) = x_0\qquad \text{non compare } u(t)
$$

Un sistema si dice **lineare** se $f(\cdot)$ e $g(\cdot)$ sono funzioni lineari di $u$ e di $x$, altrimenti si dice **non lineare**

I sistemi **tempo-varianti** hanno una presenza esplicita della variabile tempo nelle equazioni del sistema

$$
\begin{cases}
 \dot{x}(t) = f(x(t), u(t), t) \\
 \dot{y}(t) = g(x(t), u(t), t) \\
\end{cases}
$$

Noi studieremo solo sistemi **tempo-invarianti** o **stazionari**

**Esempio**

![[Secondo Anno/Fondamenti di automatica/9.png]]

### Come si scelgono le variabili di stato

Si possono scegliere diverse variabili di stato rispetto a quelle che si si aspettano dalle convenzioni, l'ordine delle variabili non è fissato. Fare delle scelte non convenzionali può essere anche più vantaggioso o svantaggioso in termini di complessità matematica

- **Criterio matematico (antipirla)**
  
  Sistema descritto da un'equazione differenziale di ordine $n$ nell'incognita $y(t)$
  
  $$
  \frac{d^ny(t)}{dt^n}=\phi\left(\frac{d^{n-1}y(t)}{dt^n},\dots,\frac{dy(t)}{dt},y(t),u(t)\right)
  $$
  
  Scegliere come variabile di stato l'incognita e le sue prime $n-1$ derivate
  
  $$
  \begin{align*}
x_1(t) &= y(t) \\
x_2(t) &= \frac{dy(t)}{dt} \\
&\vdots \\
x_n(t) &= \frac{d^{n-1}y(t)}{dt^{n-1}} \\
\end{align*}
\quad \Rightarrow \quad
\begin{cases}
\dot{x}_1(t) = x_2(t) \\
\dot{x}_2(t) = x_3(t) \\
\vdots \\
\dot{x}_n(t) = \phi(x_n(t), \dots, x_2(t), x_1(t), u(t)) \\
y(t) = x_1(t)
\end{cases}

  $$

- **Criterio fisico**
  
  Le variabili di stato sono grandezze associate ad accumuli di **energia, massa,...**

L'ordine del sistema è fissato a parità di complessità e accuratezza usate nel descrivere i fenomeni modellizzati, maggiore è l'accuratezza con cui desidero descrivere il sistema, maggiore sarà il numero di variabili di stato da usare

### Movimento dello stato e dell'uscita

$$
\begin{cases}
 \dot{x}(t) = f(x(t), u(t)) \\
 y(t) = g(x(t), u(t)) \\
\end{cases}\\
x(t_0) = x_0\qquad \text{stato iniziale}
$$

### Equilibrio

$$
\begin{cases}
 \dot{x}(t) = f(x(t), u(t)) \\
 y(t) = g(x(t), u(t)) \\
\end{cases}\\
x(t_0) = \bar{x}\qquad \text{stato iniziale}\\
u(t)=\bar{u},t\ge t_0 \quad\text{ ingresso costante}
$$

- **Stato di equilibrio**
  
  Movimento dello stato $x(t)=\bar{x}$ costante nel tempo in corrispondenza du $u(t)=\bar{u}$ assegnato costante

- **Uscita di equilibrio**
  
  Movimento dell'uscita $y(t)=\bar{x}$ costante nel tempo in corrispondenza de $u(t)=\bar{u}$ assegnato costante

![Schermata 2024-09-24 alle 15.03.38.png](/Users/xtc/Desktop/appunti/uni/Secondo%20Anno/Fondamenti%20di%20automatica/10.png)

Calcolo dell'equilibrio (per sistemi a tempo continuo)

$$
\dot{x}(t)=0 \Rightarrow
\begin{cases}
 0 = f(\bar{x}, \bar{u}) \\
 \bar{y} = g(\bar{x},\bar{u}) \\
\end{cases}
$$

### Sistemi dinamici lineari Tempo-Invarianti (LTI)

![[Secondo Anno/Fondamenti di automatica/11.png]]

I sistemi LTI hanno una struttura semplice e sono disponibili molti risultati teorici per il loro studio (e per il progetto di controllori).

Inoltre, molti sistemi dinamici sono descrivibili mediante sistemi LTI (almeno in prima approssimazione).

### Rappresentazione di stato di sistemi dinamici Lineari Tempo-Invarianti (LTI) SISO

Si consideri un generico sistema tempo-invariante SISO a tempo continuo:

$$
\begin{cases}
 \dot{x}(t) = f(x(t), u(t)) \\
 y(t) = g(x(t), u(t))
\end{cases}
$$

Siano $f(\cdot, \cdot)$ e $g(\cdot, \cdot)$ lineari in $x(t)$ e $u(t)$.

Ricordando che il vettore di stato è:

$$
x(t) = 
\begin{bmatrix}
 x_1(t) \\
 \vdots \\
 x_n(t)
\end{bmatrix}
$$

si ha che:

$$
\begin{cases}
 \dot{x}_1(t) = f_1(x_1(t), x_2(t), \dots, x_n(t), u(t)) \\
 \dot{x}_2(t) = f_2(x_1(t), x_2(t), \dots, x_n(t), u(t)) \\
 \vdots \\
 \dot{x}_n(t) = f_n(x_1(t), x_2(t), \dots, x_n(t), u(t)) \\
 y(t) = g(x_1(t), x_2(t), \dots, x_n(t), u(t))
\end{cases}
$$

In questo contesto, il sistema dinamico è rappresentato da un insieme di equazioni differenziali che descrivono l'evoluzione temporale dello stato $x(t)$ e la relazione tra lo stato e l'uscita $y(t)$. Le funzioni $f(\cdot)$ descrivono come lo stato cambia in funzione dello stato stesso e dell'ingresso $u(t)$, mentre $g(\cdot)$ descrive l'uscita in funzione dello stato e dell'ingresso.

$$
\begin{cases}
 \dot{x}(t) = Ax(t) + Bu(t) \\
 y(t) = Cx(t) + Du(t)
\end{cases}
$$

$A$ è una matrice $n\times x$

$B$ è un vettore $n\times 1$
$C$ è un vettore $1\times x$
$D$ è uno scalare

Si osservi che il sistema è strettamente proprio se e solo se D=0.

### Equilibrio di sistemi LTI-SISO

Si consideri un sistema LTI-SISO per il quale si desidera calcolare lo stato e l’uscita di equilibrio in corrispondenza di un assegnato ingresso costante

$u(t)=\bar{u}$

$$
\begin{cases}
 \dot{x}(t) = Ax(t) + Bu(t) \\
 y(t) = Cx(t) + Du(t)
\end{cases}
$$

Per calcolare l'equilibrio si imponga $\dot{x}(t)=0$ e si ottiene

$$
0=A\bar{x} + B\bar{u}
$$

da cui

$$
A\bar{x}=-B\bar{u}
$$

La matrice A è invertibile se e solo se $\det A\ne 0$, quindi si usa

$$
\bar{x}=-A^{-1}B\bar{u}
$$

Il sistema ha un unico stato di equilibrio

$$
\dot{y}=C\dot{x} + D\bar{u}=(-CA^{-1}B+D)\bar{u}
$$

$$
\mu=\frac{\bar{y}}{\bar{u}}=-CA^{-1}B+D\quad\text{guadagno statico}
$$

Se $\det A=0$ non è possibile invertire la matrice $A$

Il sistema $A\bar{x} = -B\bar{u}$ con $\det A = 0$ può avere infinite o nessuna soluzione, cioè il sistema può avere infiniti o nessuno stato di equilibrio.

Un sistema LTI può avere, in corrispondenza di un dato di ingresso costante $u(t)=\bar{u}$:

- Un solo stato di equilibrio se il determinante è diverso da 0

- Infiniti stati di equilibrio se il determinante è uguale a 0 e il sistema $A\bar{x}=-B\bar{u}$ ha infinite soluzioni

- Nessuno stato di equilibrio se il determinante è uguale a 0 e il sistema $A\bar{x}=-B\bar{u}$ non ha nessuna soluzione

**Esempio**

$$
\begin{cases}
 \dot{x}(t) = Ax(t) + Bu(t) \\
 y(t) = Cx(t) + Du(t)
\end{cases}
\text{ con } A=
\begin{bmatrix}
 -1 & 2 \\
 1 & -3
\end{bmatrix} \quad
B=
\begin{bmatrix}
 1\\
 0
\end{bmatrix} \quad
C=
\begin{bmatrix}
 1&0
\end{bmatrix} \quad
D=0
$$

calcolare lo stato e l'uscita di equilibrio ed il guadagno statico in corrispondenza dell'ingresso costante $u(t)=\bar{u}=2$

Si ha $\det{A} = 1 \ne 0$ e quindi il sistema ha un unico stato di equilibrio ed è possibile calcolare il guadagno statico del sistema

$$
\bar{x}=-A^{-1}B\bar{u} = -
\begin{bmatrix}
 -1&2\\
 1&-3
\end{bmatrix}^{-1}
\begin{bmatrix}
 1\\
 0
\end{bmatrix}2=-
\begin{bmatrix}
 -3&-2\\
 -1&-1
\end{bmatrix}
\begin{bmatrix}
 1\\
 0
\end{bmatrix}2=
\begin{bmatrix}
 6\\
 2
\end{bmatrix}
$$

Le due componenti dello stato all'equilibrio sono $\bar{x}_1=6$ e $\bar{x}_2=2$

L'uscita di equilibrio è

$$
\bar{y}=C\bar{x}+D\bar{u}=
\begin{bmatrix}
 1&0
\end{bmatrix}
\begin{bmatrix}
 6\\
 2
\end{bmatrix}
=6
$$

Il guadagno statico del sistema è

$$
\mu=\frac{\bar{y}}{\bar{u}}=3
$$

### Movimento dello stato e dell'uscita di sistemi LTI SISO a tempo continuo

$$
\begin{cases}
 \dot{x}(t) = Ax(t) + Bu(t) \\
 y(t) = Cx(t) + Du(t)
\end{cases}
$$

Assegnando come condizione iniziale per lo stato $x(0)=x_0$ e un andamento per l'ingresso $u(t),t\ge t_0$ è possibile integrare l'equazione differenziale e calcolare un'espressione analitica del movimento dello stato $x(t)$. Sostituendo nell'equazione di uscita si può ottenere il movimento dell'uscita $y(t)$.

![[Secondo Anno/Fondamenti di automatica/12.png]]

Ad esempio scrivendo una legge di conservazione del volume si ottiene l'equazione differenziale

$$
\dot{y}(t) + \frac{k}{A}y(t)= \frac{k}{A}u(t)
$$

Ponendo $x(t)=h(t)$ si ha che $y(t)=kx(t)$ e sostituendo nell'equazione si ottiene

$$
\begin{cases}
 \dot{x}(t) = - \frac{k}{A}x(t) + \frac{1}{A}u(t) \\
 y(t) = ku(t)
\end{cases}
$$

Osservando che è un sistema di ordine $n=1$ dal momento che lo stato è scalare

Sia inoltre $A=1m^2$ e $k=1\frac{m^2}{s}$ da cui si ottiene

$$
\begin{cases}
 \dot{x}(t) = -x(t) + u(t) \\
 y(t) = x(t)
\end{cases}
$$

Sia ora che il livello iniziale dello stato è $x(0)=5$ e la portata dell'acqua (ingresso costante del sistema) è $u(t)=2\frac{m^3}{s}, t\ge0$

Per calcolare il movimento dello stato bisogna integrare l'equazione differenziale $\dot{x}(t)=-x(t)+u(t)$ con $u(t)=2$ e con $x(0)=5$, cioè

$$
\begin{cases}
 \dot{x}(t) = -x(t) + 2 \\
 x(0) = 5
\end{cases}
$$

$$
\frac{d}{dt}[e^tx(t)]=2e^t
$$

$$
\int^t_0 \frac{d}{dt}[e^\tau x(\tau)]d\tau=\int^t_02e^\tau d\tau
$$

$$
e^tx(t)-x(0)=2e^t-2
$$

$$
y(t)=x(t)=2+3e^{-t}
$$

### Movimento dei sistemi LTI SISO

Si consideri un sistema LTI SISO del primo ordine

$$
\begin{cases}
 \dot{x}(t) = ax(t) + bu(t) \\
 y(t) = cx(t) + du(t)
\end{cases}
$$

Si calcoli il movimento dello stato per $\begin{cases}
 x(0)=x_0 \\
 u(t), t\ge0
\end{cases}$ 

$$
x(t)=e^{at}x_0+\int_0^t e^{a(t-\tau)}bu(\tau)d\tau
$$

Per un sistema SISO di ordine n qualsiasi

$$
\begin{cases}
 \dot{x}(t) = Ax(t) + Bu(t) \\
 y(t) = Cx(t) + Du(t)
\end{cases}
$$

si usa

$$
x(t)=e^{At}x_0+\int_0^t e^{A(t-\tau)}Bu(\tau)d\tau
$$

Ricordando che la potenza di matrice si fa con

$$
e^{At}=\sum^\infin_{k=0}\frac{(At)^k}{k!}
$$

### Formule di Lagrange per il movimento

Movimento dello stato

$$
\mathbf{x}(t) = e^{At} \mathbf{x_0} + \int_0^t e^{A(t-\tau)} B u(\tau) d\tau

$$

Movimento dell'uscita

$$
\begin{align}
y(t) &= C \mathbf{x}(t) + D u(t)\\
&= C \left[ e^{At} \mathbf{x_0} + \int_0^t e^{A(t-\tau)} B u(\tau) d\tau \right] + D u(t)\\
&= C e^{At} \mathbf{x_0} + C \int_0^t e^{A(t-\tau)} B u(\tau) d\tau + D u(t)

\end{align}
$$

### Movimento libero e movimento forzato

$$
\mathbf{x}(t) = \underbrace{e^{At} \mathbf{x_0}}_{\mathbf{x_l}(t) \text{ \, Movimento libero dello stato}} + \underbrace{\int_0^t e^{A(t-\tau)} B u(\tau) d\tau}_{\mathbf{x_f}(t) \text{ \, Movimento forzato dello stato}} 

$$

## Linearizzazione di sistemi non lineari

![[Secondo Anno/Fondamenti di automatica/13.png]]

Supponiamo che $f(x)$ sia una funzione non lineare di $x$, vicino a $\bar{x}$ la funzione può essere approssimata usando una funzione lineare costruita con la sua tangente

$$
y \cong f(\bar{x}) + \left. \frac{df(x)}{dx} \right|_{x=\bar{x}} (x-\bar{x})
$$

### Linearizzazione vicino ad un equilibrio

Si consideri un sistema SISO non lineare tempo invariante del tipo

$$
\begin{cases}
 \dot{x}(t) = f(x(t), u(t)) \\
 y(t) = g(x(t), u(t))
\end{cases}
$$

Si supponga che questo sistema abbia uno stato di equilibrio $\bar{x}$ in corrispondenza di un ingresso costante $\bar{u}$: $f(\bar{x},\bar{u}) = 0$. Si vuole trovare un **sistema lineare** che approssimi il comportamento dinamico del sistema non lineare vicino all'equilibrio. Se $(\bar{x}, \bar{u})$ è un equilibrio allora il movimento dello stato ottenuto con condizione iniziale $x(0)= \bar{x}$ e ingresso $u(t) = \bar{u}, t\ge0$ è $x(t)=\bar{x},t\ge 0$

$$
\begin{cases}
 \dot{x}(t) = \bar{u}, t\ge0 \\
 x(0)=\bar{x}
\end{cases}
\Longrightarrow
x(t) =\bar{x}, t\ge0
$$

![[Secondo Anno/Fondamenti di automatica/14.png]]

In caso di perturbazioni nelle condizioni iniziali e nell'input, se le variazioni sono piccole, si può descrivere il movimento dello stato come perturbazione del movimento di equilibrio.

$$
\begin{cases}
 \bar{u}(t) = \bar{u} + \delta_u(t), t\ge0 \\
 x(0)=\bar{x} + \delta_{\bar{x}}
\end{cases}
\Longrightarrow
x(t) =\bar{x} + \delta_x(t), t\ge0
$$

![[Secondo Anno/Fondamenti di automatica/15.png]]

Dove $x(t) = \bar{x}+\delta_x(t)$ è il movimento dello stato con ingresso $u(t)=\bar{u}+\delta_u(t)$ e quindi deve soddisfare l'equazione di stato $\dot{x}(t)=f(x(t),u(t))$.

$$
\dot{x}(t)\equiv\frac{d}{dt}(\bar{x}+\delta_x(t))=\dot{\delta}_x(t)
$$

$$
f(x(t),u(t))=f(\bar{x},\bar{u}) +
\left. \frac{\partial f}{\partial x} \right|_{\bar{x},\bar{u}}(x(t)-\bar{x})+
\left. \frac{\partial f}{\partial u} \right|_{\bar{x},\bar{u}}(u(t-\bar{u}))+ \text{altro}
$$

Nel problema:

- $f(\bar{x},\bar{u})=0$ perché siamo all'equilibrio

- $x(t)- \bar{x} = \delta_x(t)$ e $u(t)-\bar{u}=\delta_u(t)$ è il movimento considerato

Quindi $f(x(t),u(t))\cong
\bar{y} + 
\left. \frac{\partial g}{\partial x} \right|_{\bar{x},\bar{u}}\delta_x(t)+
\left. \frac{\partial g}{\partial u} \right|_{\bar{x},\bar{u}}\delta_x(t)$

$$
\delta_y(t)\cong g_x(\bar{x},\bar{u})\delta_x(t)+g_u(\bar{x},\bar{u})\delta_u(t)
$$

$$
\begin{cases}
\dot{\delta}_x(t)\cong f_x(\bar{x},\bar{u})\delta_x(t)+f_u(\bar{x},\bar{u})\delta_u(t)\\
\delta_y(t)\cong g_x(\bar{x},\bar{u})\delta_x(t)+g_u(\bar{x},\bar{u})\delta_u(t)
\end{cases}
$$

Questo $\uparrow$ è il sistema LTI SISO

$$
f_x(\bar{x},\bar{u})=
\begin{bmatrix}
\partial f_1/\partial x_1 & \cdots & \partial f_1/\partial x_n \\
\vdots & & \vdots \\
\partial f_n/\partial x_1 &\cdots &\partial f_n/\partial x_n
\end{bmatrix}
_{
\begin{align*}
x=\bar{x}\\
u=\bar{u}
\end{align*}
}
\qquad
f_x(\bar{x},\bar{u})=
\begin{bmatrix}
\partial f_1/\partial u \\
\partial f_n/\partial u
\end{bmatrix}
_{
\begin{align*}
x=\bar{x}\\
u=\bar{u}
\end{align*}
}
$$

                        matrice $A\quad n\times n$                                                         matrice $B\quad n\times1$

$$
g_x(\bar{x}, \bar{u})= 
\begin{bmatrix}
\partial g/\partial x_1 & \cdots &\partial g/\partial x_n
\end{bmatrix}
_{
\begin{align*}
x=\bar{x}\\
u=\bar{u}
\end{align*}
}
\qquad
g_u(\bar{x},\bar{u})=\left.\partial g/\partial u\right|
_{
\begin{align*}
x=\bar{x}\\
u=\bar{u}
\end{align*}
}
$$

                        vettore $C\quad 1\times n$                                                          scalare $D$

### Sistema lineare tangente

$$
S:\begin{cases}
 \dot{x}(t) = f(x(t),u(t)) \\
 y(t)=g(x(t),u(t))
\end{cases}
\qquad
S^\delta:\begin{cases}
\dot{\delta}_x(t)\cong f_x(\bar{x},\bar{u})\delta_x(t)+f_u(\bar{x},\bar{u})\delta_u(t)\\
\delta_y(t)\cong g_x(\bar{x},\bar{u})\delta_x(t)+g_u(\bar{x},\bar{u})\delta_u(t)
\end{cases}
$$

![[Secondo Anno/Fondamenti di automatica/16.png]]

$\tilde{S}$ è l'approssimazione di $S$ nell'intorno del punto di equilibrio $(\bar{x},bar{u})$.

$S^\delta$ viene spesso indicato con il nome di `sistema lineare tangente`

$\tilde{S}$ viene spesso indicato anche con il nome di `approssimazione (modello) locale`

## Stabilità dei sistemi dinamici

![[Secondo Anno/Fondamenti di automatica/17.png]]

Studiando i due sistemi illustrati sopra, quello con la palla è definito stabile perché anche cambiando lo stato della palla, essa ritornerà al suo stato iniziale sul fondo della superficie curva, che è anche il suo equilibrio. Il sistema sulla destra è instabile perché anche una piccola perturbazione potrebbe cambiare permanente lo stato del sistema, che sarebbe impossibilitato a tornare in uno stato prevedibile o costante.

la `teoria di Lyapunov` dice che:

- La `stabilità` è quella proprietà per cui un sistema, dopo una perturbazione, tende a tornare nella situazione preesistente la perturbazione

- E' una proprietà locale, cioè si riferisce al comportamento del sistema in seguito a perturbazioni "piccole"

- Non tutte le grandezze di un sistema sono note con precisione: la condizione iniziale è spezzo nota

### Stabilità dell'equilibrio

Sia $(\bar{x},\bar{u})$ un equilibrio per il sistema

$$
\begin{cases}
 \dot{x}(t) = f(x(t), u(t)) \\
 y(t) = g(x(t), u(t)) \\
\end{cases}
$$

Per definizione di equilibrio, applicando l'ingresso costante $\bar{u}$ a partire dalla condizione iniziale $\bar{x}$ otterrò un movimento costante $x(t)=\bar{x}$

$$
\begin{cases}
 u(t) = \bar{u}, t\ge0 \\
 x(0) = \bar{x} \\
\end{cases} \quad\Longrightarrow\quad
x_{nom}=\bar{x}\quad \text{movimento nominale}
$$

Si consideri ora un nuovo movimento ottenuto applicando lo **stesso ingresso** costante $\bar{u}$ del caso precedente, ma a partire da una **condizione iniziale diversa**.

$$
\begin{cases}
 u(t) = \bar{u}, t\ge0 \\
 x(0) = \bar{x}+\delta_{\bar{x}} \\
\end{cases} \quad\Longrightarrow\quad
x_{per}=\bar{x}+\delta_x(t)\quad \text{movimento perturbato}
$$

- `Stabilità`: la perturbazione del movimento limitata

![[Secondo Anno/Fondamenti di automatica/18.png]]

- `Instabilità`: la perturbazione del movimento divergente

![[Secondo Anno/Fondamenti di automatica/19.png]]

- `Asintotica stabilità`: la perturbazione del movimento è limitata e tende asintoticamente a 0

![[Secondo Anno/Fondamenti di automatica/20.png]]

### Stabilità dell'equilibrio nei sistemi LTI

Consideriamo un sistema LTI SISO

$$
\begin{cases}
 \dot{x}(t) = Ax(t) + Bu(t) \\
 y(t) = Cx(t) + Du(t)
\end{cases}
$$

Sia $u(\bar{x},\bar{u}$ un equilibrio per il sistema, applicando l'ingresso costante $\bar{u}$ a partire dalla condizione iniziale $\bar{x}$ otterrò un movimento costante $x(t)=\bar{x}$

$$
\begin{cases}
 u(t) = \bar{u}, t\ge0 \\
 x(0) = \bar{x} \\
\end{cases} \quad\Longrightarrow\quad
x_{nom}(t)=\bar{x},t\ge0\quad \text{movimento nominale}
$$

Usando la formula di Lagrange, il movimento nominale è

$$
x_{nom} = e^{At}\bar{x}+\int^t_0 e^{A(t-\tau)}B\bar{u}d\tau=\bar{x}
$$

$$
\begin{cases}
 u(t) = \bar{u}, t\ge0 \\
 x(0) = \bar{x} + \delta_{\bar{x}}\\
\end{cases}
$$

Usando la formula di Lagrange, il movimento perturbato è

$$
\underbrace{e^{At}\bar{x}+\int_0^te^{A(t-\tau)}B\bar{u}d\tau}_{\text{movimento nominale}}+e^{At}\delta_{\bar{x}}=
x_{nom}(t)+e^{At}\delta_{\bar{x}}=\overbrace{\bar{x}+e^{At}\delta_{\bar{x}}}^{\text{movimento perturbato}}
$$

dove $e^{At}\delta_{\bar{x}}$ è la perturbazione del movimento

![[Secondo Anno/Fondamenti di automatica/21.png]]

C'è una relazione tra la perturbazione della condizione iniziale e la perturbazione del movimento:

$$
\delta_x(t)=e^{At}\delta_{\bar{x}}
$$

La perturbazione del movimento dipende solo dalla matrice $A$ e studiandola si può capire se l'equilibrio è stabile o meno. Visto che la perturbazione **non dipende** dal particolare stato di equilibrio $\bar{x}$, se l'equilibrio sarà stabile tutti gli equilibri saranno stabili, quindi per i sistemi LTI si può parlare di stabilità del sistema.

`Nei sistemi LTI la stabilità è una proprietà globale`.

Infatti l'andamento della perturbazione del movimento non dipende né dal particolare equilibrio né dall'entità della perturbazione della condizione iniziale.

Utilizzando la definizione di stabilità dell'equilibrio vista, si può dedurre che per la cosa che

$$
\delta_x(t)=e^{At}\delta_{\bar{x}}
$$

![[Secondo Anno/Fondamenti di automatica/22.png]]

`In un sistema LTI asintoticamente stabile il movimento libero converge sempre asintoticamente a 0`

#### Classificazione per stabilità dei sistemi LTI

![[Secondo Anno/Fondamenti di automatica/23.png]]

### Proprietà dei sistemi LTI asintoticamente stabili

#### Proprietà 1

`Un sistema LTI asintoticamente stabile spostato dall'equilibrio, tende spontaneamente a tornare all'equilibrio`

Sia $(\bar{u}, \bar{x})$ un equilibrio per il sistema asintoticamente stabile. **Qualsiasi sia la condizione iniziale dello stato, applicando l'ingresso $\bar{u}$, il movimento dello stato del sistema tende allo stato di equilibrio**

$$
\begin{cases}
u(t) = \bar{u}, \quad t \geq 0 \\
x(0) = \bar{x} + \delta_{\bar{x}}
\end{cases}
\quad \Longrightarrow \quad x(t) \underset{t \to \infty}{\longrightarrow} \bar{x}
$$

Infatti, modificando la condizione iniziale, modifico solo il movimento libero che nei sistemi asintoticamente stabili si annulla asintoticamente

**Esempio**

![[Secondo Anno/Fondamenti di automatica/24.png]]

Per definizione di equilibrio dello stato, applicando l'ingresso costante $\bar{u}=1$ con condizione iniziale di stato $x(0)=1,t\ge0$.

$$
\begin{cases}
 u(t)=\bar{u}=1, t\ge0 \\
 x(0)=\bar{x}=1
\end{cases} \quad\Longrightarrow\quad
\underset{\text{movimento nominale}}{x(t)=1, \quad t\ge0}
$$

Si cambi ora lo stato iniziale, mantenendo lo stesso ingresso:
