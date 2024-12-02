# Fisica I

## CAP. 1) Cinematica del punto materiale

### 1.2 Moto rettilineo

Il **Moto rettilineo** si svolge lungo una retta sulla quale vengono fissati origine e verso. Il moto del punto materiale è descrivibile tramite una sola coordinata in funzione del tempo

$$
x(t)
$$

$x(t)$ è determinabile rilevando in una serie di istanti successivi a $t_1$ la posizione del punto materiale. Per rappresentare il moto si utilizza il **diagramma orario**, che è un piano cartesiano in cui sull'asse delle ascisse c'è il tempo, mentre su quello delle ordinate c'è la posizione

<img title="" src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/1.png" alt="" width="325" data-align="center">

Quando si effettua una misura fisica reale si generano per forza degli **errori sperimentali**, quindi i punti delle diverse misure non si dispongono sul diagramma in modo ordinato come una retta o una parabola. Per questo per esprimere $x(t)$ bisogna usare dei metodi analitici.

### 1.3 Velocità nel moto rettilineo

Se a $t=t_p$ il punto si trova in $x=x_p$ ed a $t=t_q$ si trova in $x=x_q$, allora la **velocità media** sarà:

$$
V_m = \frac{\Delta x}{\Delta t}= \frac{x_q-x_p}{t_q-t_p}
$$

Ricordiamo che la velocità media non dà indicazioni sulle caratteristiche del moto, che ad esempio potrebbe essere accelerato.

Maggiore è il numero degli intervalli di tempo che utilizzo per campionare il moto, maggiore sarà la precisione quando andrò ad individuare $x(t)$. 

La **velocità istantanea** al tempo $t$ rappresenta la rapidità di variazione temporale della posizione nell'istante $t$ considerato.

$$
V=\frac{dx}{dt}
$$

Il segno di $V$ indica il verso sull'asse delle $x$

- se $V>0$ la $x$ cresce

- se $V<0$ la $x$ decresce

Può essere funzione del tempo $V(t)$ se la velocità è costante nel tempo. Siamo nel caso del **moto rettilineo uniforme**.

Nota la legge oraria $x(t)$ si può facilmente risalire alla velocità istantanea facendone la derivata. Per fare il contrario invece si fa

$$
dx = V(t)dt
$$

Vuol dire che lo spostamento complessivo $\Delta x$ sulla retta in cui si muove il punto in un intervallo finito $\Delta t$ è dato dalla somma degli infiniti intervalli $dx$, ciò si traduce concretamente con l'integrazione

$$
\Delta x = \int_{x_0}^xdx = \int_{t_0}^t V(t') dt'
$$

Ma sappiamo che per conoscere $x(t)$ bisogna conoscere la condizione iniziale di moto del punto, quindi

$$
x(t)=x_0+\int_{t_0}^t V(t') dt
$$

Ora ricordando che $V_m=\frac{x_q-x_p}{t_q-t_p}$ possiamo ricavare la relazione tra la velocità media e la velocità istantanea

$$
V_m= \frac{1}{t-t_0}\int_{t_0}^t V(t')dt'
$$

Quindi considerando un moto rettilineo in cui $V=cost$ 

$$
x(t) = x_0+V\int_{t_0}^t dt' = x_0+V(t-t_0) = x_0 + V_t
$$

(se consideriamo $t_0=0$)

In conclusione si ha che nel moto **rettilineo uniforme** la posizione è una **funzione lineare** del tempo ed in tempi uguali si percorrono spazi uguali.

### 1.4 Accelerazione nel moto rettilineo

Seguendo la stessa logica del moto rettilineo uniforme si ha che l'**accelerazione media**

$$
a_m=\frac{\Delta V}{\Delta t}
$$

E l'**accelerazione istantanea** rappresenta la rapidità di variazione temporale nello spazio della velocità

$$
a=\frac{dV}{dt}=\frac{d^2x}{dt^2}
$$

- se $a =0 \Longrightarrow V=cost$

- se $a>0\Longrightarrow V$ cresce nel tempo

- se $a<0\Longrightarrow V$ decresce nel tempo

Conoscendo $a(t)$ ricavo $V(t)$ integrando

$$
dV=a(t)dt
$$

$$
\Delta V = \int_{V_0}^V a(t')dt' \Longrightarrow V(t) = V_0+\int_{t_0}^t a(t')dt'
$$

Un moto in cui l'accelerazione è costante si chiama moto **uniformemente accelerato**. Questo fenomeno semplifica la formula di prima in

$$
V(t)=V_0+at
$$

e

$$
x(t)=x_0+V_0t+\frac{1}{2}at^2
$$

nel moto rettilineo uniformemente accelerato la velocità è una funzione lineare del tempo mentre lo spazio è una funzione quadratica del tempo.

### 1.5 Moto verticale di un corpo nel campo di gravità

Trascurando la resistenza dell'aria un corpo lasciato libero di cadere in vicinanza della superficie terrestre si muove verso il basso con un'accelerazione di gravità pari a 

$$
g=9.81\frac{m}{s^2}
$$

se $x_0= h, V_0=0, t=t_0=0,a=-g$ abbiamo che di conseguenza

$$
V(t)=-gt\\
x(t)=h-\frac{1}{2}gt^2\\
\downarrow \\
\text{da cui si trova che}\\
t(x)=\sqrt{\frac{2(h-x)}{g}}\\
\downarrow\\
\text{sostituendo nella prima}\\
V(x)=\sqrt{2g(h-x)}
$$

Il tempo di caduta e la velocità di impatto al suolo saranno

$$
t_c=\sqrt{\frac{2h}{g}} \qquad \qquad V_c=-\sqrt{2gh}
$$

Le formule sopra sono vere assumendo che il punto materiale cominci la sua caduta da fermo. Se il punto venisse lanciato verso il basso ($x_0=h$ e $V_0=-V_1$) bisognerebbe tenere conto della velocità iniziale nel seguente modo:

$$
V(t)=-V_1-gt\\
x(t)=h-V_1t-\frac{1}{2}gt^2\\
\downarrow\\
t(x)=-\frac{V_1}{g}-\sqrt{\frac{V^2_1}{g^2}+\frac{2(h-x)}{g}}\\
\downarrow\\
V(x)=\sqrt{V^2_1+2g(h-x)}

$$

Dalle ultime ricaviamo come prima velocità di impatto al suolo e tempodi caduta

$$
t_c=-\frac{V_1}{g}-\sqrt{\frac{V_1^2}{g^2}+\frac{2h}{g}} \qquad \qquad
V_c= -\sqrt{V_1^2+2gh}
$$

Nel caso che si lanci il punto verso l'alto la situazione diventa che $V_0=V_2>0$ e si mette il più invece del meno

### 1.6 moto armonico semplice

$$
x(t)=A\sin(\underbrace{\omega t+phi}_{\text{fase del moto}}) \qquad
A,\omega,\phi = const
$$

Dove:

- $A$ è l'ampiezza del moto

- $\omega$ è la pulsazione

- $\phi$ è la fase iniziale

In questo tipo di moto il massimo spostamento dall'origine è pari ad $A$

$$
\begin{align*}
x(0)=A\sin\phi\qquad &\text{se } \phi=0 \\
&\quad\phi=\pi\\
&\text{il punto è nell'origine nel momento } t=0
\end{align*}
$$

Il moto armonico è periodico ed ha oscillazioni di periodo $T$. Il moto di un punto si dice periodico se ad intervalli di tempo eguali il punto ripassa nella stessa posizione con la stessa velocità.

$$
T=\frac{2\pi}{\omega} \qquad \qquad \omega = \frac{2\pi}{T}
$$

La frequenza $V$ del moro indica il numero di oscillazioni in un secondo

$$
V=\frac{1}{T}=\frac{\omega}{2\pi}
$$

Da notare che periodo e frequenza di un moto armonico semplice sono indipendenti dall'ampiezza del moto stesso ($A$). La velocità e l'accelerazione alla quale il punto si muove nel moto armonico è

$$
V(t)=\frac{dx}{dt}=\omega\cos(\omega t+\phi)
$$

$$
a(t)= \frac{dV}{dt} = \frac{d^2x}{dt^2}=-\omega^2A\sin(\omega t+\phi)
$$

Che nel caso $\phi$ sia 0 diventa

$$
a(t)=-\omega^2 x
$$

La velocità raggiunge il suo valore massimo al centro dell'oscillazione, con un valore di $V=\omega A$. La velocità si annulla agli estremi dell'oscillazione, quando l'oggetto si trova nei punti $x=\pm A$.

Accelerazione:

- L'accelerazione a raggiunge il massimo al centro dell'oscillazione.
- Il suo valore massimo è $a=|ω2A|$.
- Si inverte agli estremi, dove la velocità cambia segno.
- L'accelerazione è sempre proporzionale e opposta allo spostamento rispetto al centro di oscillazione.

$x(t), V(t), a(t) $ sono sfasate in questo modo

- $V(t)$ sfasata di $\frac{\pi}{2}$ rispetto a $x(t)$ e si dice in **quadratura di fase**

- $a(t)$ sfasata si $\pi$ rispetto a $x(t)$ e si dice in **opposizione di fase**

queste sono condizioni sufficienti e necessarie per il moto armonico

**Equazione differenziale del moto armonico**

$$
\frac{d^2x}{dt^2}+\omega^2x=0
$$

### 1.10 Moto circolare

Nel moto circolare la traiettoria è una circonferenza di raggio $R=const$.

La velocità $V$ cambia sempre in direzione dell'accelerazione centripeta $F_c$ che è sempre $\ne0$

<img title="" src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/2.png" alt="" width="286">

#### Moto circolare uniforme

Nel moto circolare uniforme la $V$ è costante in modulo e l'accelerazione tangenziale è nulla

$a=a_n$ e punta al centro della circonferenza

#### Moto circolare non uniforme

In questo caso il modulo di $V$ varia nel tempo e $a_T\ne 0$ il quanto la direzione dell'accelerazione non passa per il centro della circonferenza

<img title="" src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/3.png" alt="" width="203"> $S(t) \quad \text{rappresenta la coordinata curvilinea}\\
\theta(t)=\frac{S(t)}{R} \text{ positivo se gira in senso antiorario}$

$$
x(t) = R\cos\theta(t)\\
y(t) = R\sin\theta(t)
$$

Misurando $\theta$ a due tempi diversi si ha che lo spostamento angolare

$$
\Delta\theta=\theta_2-\theta_1
$$

E la velocità angolare media nell'intervallo $\Delta t$

$$
\omega_m=\frac{\Delta\theta}{\Delta t}
$$

La velocità istantanea

$$
\omega=\frac{d\theta}{dt}= \frac{1}{R}\frac{dS}{dt}=\frac{V}{R}
$$

Se l'origine coincide con il centro della circonferenza la velocità radiale $V_r$ è praticamente nulla perché $R=const$, mentre la velocità trasversa $V_\theta$ coincide con la velocità vettoriale

$$
V_0=r\frac{d\theta}{dt} \Rightarrow V=R\omega
$$

Nel moto circolare uniforme si ha che

$$
\left.\begin{aligned}
V\\
\omega
\end{aligned}\right\}const \qquad
\begin{aligned}
&S(t)=S_0+V(t)\\
&\theta(t)=\theta_0+\omega t
\end{aligned} \qquad
\begin{aligned}
&S=S_0 \text{ per } t=t_0\\
&\theta=\theta_0 \text{ per } t=t_0
\end{aligned}
$$

cioè moto accelerato con $a=const$ ed ortogonale alla traiettoria

$$
a=a_n=\frac{V^2}{R}=\omega^2R
$$

$$
T=\frac{2\pi}{\omega} \text{ tempo per compiere un giro (periodo)}
$$

#### Moto circolare proiettato sugli assi cartesiani

$$
\begin{aligned}
x=R\cos\theta&=R\cos(\omega t+\theta_0)\\
y=R\sin\theta&=R\sin(\omega t+\theta_0)\\
&=R\cos(\omega t+\theta_0)
\end{aligned}
$$

$x$ e $y$ sono moti armonici che hanno uguale ampiezza e uguale fase iniziale ma sfasati di $\frac{\pi}{2}$ e con un periodo uguale al periodo del moto circolare uniforme. La velocità angolare è uguale alla pulsazione.

Nel moto circolare non uniforme c'è un'accelerazione centripeta variabile secondo il modulo. l'accelerazione tangenziale vale

$$
a_T=\frac{dV}{dt}
$$

con $\omega$ variabile:

$$
a=\frac{d\omega}{dt}=\frac{d^2\theta}{dt^2}=\frac{1}{R}\frac{dV}{dt}=\frac{a_T}{R}
$$

- Se la legge oraria $\theta(t)$ è nota, deriviamo ottenendo $\omega t$

- Se conosco $a(t)$ invece
  
  $$
  \omega(t)=\omega_0\int_{t_0}^t a(t')dt'
  $$
  
  $$
  \theta(t)=\theta_0\int_{t_0}^t \omega(t')dt
  $$

#### Moto circolare uniformemente accelerato

In questo moto $a=const$ e $a_T=const$

Quando $t_0=0$

$$
\omega=\omega_0+\alpha t \qquad \qquad \theta=\theta_0+\omega_0t+\frac{1}{2}\alpha t^2
$$

$$
a_n=\omega^2R=(\omega_0+\alpha t)^2R
$$

$$
\text{Però il moto circolare }
\left.\begin{aligned}
\omega(t)\\
\alpha(t)
\end{aligned}\right\} 
\text{descrivono l'evoluzione temporale legato al modulo }\\
\text{della velocità}
$$

$$
a_n=\frac{V^2}{R}\omega_n \qquad \qquad a_T=\alpha R\omega_t \text{ a cui si somma } a_n
$$

#### Notazione vettoriale

Vettore velocità angolare

$$
\omega=\frac{d\theta}{dt}
$$

in cui la direzione è $\perp$ al piano dove giace la circonferenza. Guardando il moto dall'estremo del vettore $\omega$ appare antiorario.

$$
V=\frac{dr}{dt}=\omega r
$$

dove $r$ è la posizione di p rispetto al punto di applicazione di $\omega,$ quindi l'origine.

Quindi fissando $\omega$ individuo l'asse di rotazione ed il piano del moto circolare, assieme al verso e la variazione dell'angolo nel tempo.

Da $\omega$ ottengo $a$ che è $\parallel$ ad $\omega$ nel M.C. nel piano ha direzione costante. Il verso è determinato dalla variazione del modulo.

$$
a=\frac{d\omega}{dt}
$$

Con $a$ ed $\omega$ esprimo l'accelerazione vettoriale

$$
\begin{aligned}
a=\frac{dV}{dt}&=\frac{d}{dt}(\omega\times r)\\
&=\frac{dV}{dt}\times r+\omega\times\frac{dr}{dt}
\end{aligned}
$$

$$
a=\underbrace{a\times r}_{\text{accelerazione tangenziale}}+\underbrace{\omega\times V}_{\text{accelerazione centripeta}}
$$

M.C.U.

- $\omega$ è un vettore costante anche in modulo. Se $a$ è nulla
  
  $$
  a=a_n=\omega\times V
  $$

- Il vettore $r$ applicato in 0 ha modulo costante e descrive il moto rotatorio attorno all'asse di rotazione, ossia ha direzione $\omega$. L'angolo $\phi$ è costante

- Il vettore $V$ ha modulo costante e descrive la rotazione attorno ad $\omega$

I moti in cui un asse ruota attorno ad un asse fisico sono i moti di precessione. Dato un vettore $A$ di modulo costante che descrive un moto di precessione con velocità angolare $\omega$, la sua derivata temporale sarà

$$
\frac{dA}{dt}=\omega A
$$

è ortogonale ad $A$ e indica la variazione di un vettore $dA$ ad esso ortogonale che cambia direzione ma ha modulo costante.

<img src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/4.png" title="" alt="" width="137">

Ciò che è stato detto vale per il moto circolare su un unico piano

#### 1.11 Moto parabolico dei corpi nel campo di gravità (moto dei gravi)

Nel moto parabolico la **gittata** sta a significare l'insieme di traiettoria, massima altezza raggiunta e posizione in cui il punto ricade. Solitamente si disegna su un piano $XY$ contenente $V_0$ con forza peso $a=g=-g\omega_y, r=0, V=V_0, t=t_0=0$.

<img title="" src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/5.png" alt="" data-align="center" width="241">

$$
V(t)=V_0+\int_{0}^t a(t')dt'=V_0-gtw_y\\
V(t)=V_0\cos\theta_{\omega_x} + (V_0\sin\theta-gt)\omega_y
$$

Le velocità dei moti proiettati sugli assi sono

$$
\begin{aligned}
V_x&=V_0\cos\theta \\
V_y&=V_0\sin\theta -gt
\end{aligned}
$$

Da queste possiamo ricavare le proiezioni delle leggi orarie

$$
\begin{aligned}
x&=V_0\cos\theta t\\
y&=V_0\sin\theta t-\frac{1}{2}gt^2
\end{aligned}
$$

quindi sull'asse $x$ avremo un moto rettilineo uniforme, mentre sull'asse delle $y$ un moto uniformemente accelerato. $x(t)$ e $g(t)$ costituiscono le equazioni parametriche della traiettoria dove $t$ è il parametro.

Per ricavare $t$ dalla componente x

$$
t=\frac{x}{V_0}\cos\theta
$$

sostituendo nell'equazione $y(t)$ si ha

$$
y(x)=xtg\theta-\frac{g}{2V_0^2\cos^2\theta}x^2
$$

che a tutti gli effetti è l'equazione di una parabola.

<img title="" src="file:///Users/xtc/Desktop/appunti/uni/Primo anno/Fisica/6.png" alt="" width="279" data-align="center">

Per calcolare la gittata, che è la distanza $\overline{OG}$, imponiamo $y(t)=0$ ottenendo $x=0$

$$
x_g=\frac{2V_0^2\cos^2\theta\tan\theta}{g}= \frac{2V_0^2\cos\theta\sin\theta}{g}=\frac{2V_0^2\sin(2\theta)}{g}
$$

L'altezza massima si raggiunge quando la velocità sull'asse delle $y$ si annulla, effettivamente è il vertice della parabola, a metà di $\overline{OG}$.

$$
x_n= \frac{V_0^2\cos\theta\sin\theta}{g}
$$

quindi

$$
y_{xn}=y_n= \frac{V_0^2\sin^2\theta}{2g}
$$

Per ottenere l'angolo per la gittata massima si fa

$$
\frac{2V_0^2}{g}\cos(2\theta)=0
$$

e risolvendo si trova che l'angolo ottimale è sempre 45° ($\pi/2$)

<img title="" src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/7.png" alt="" data-align="center" width="398">Il tempo totale di volo $t_g$ è pari al tempo impiegato a percorrere $\overline{OG}$ con velocità costante $V_x=V_0\cos\theta$

$$
t_g = \frac{2x_m}{V_0\cos\theta}=\frac{2V_0\sin\theta}{g}=2t_m
$$

Questo vuol dire che $t_g$ coincide con il tempo di salire fino all'altezza $g_m$ e tornare indietro al suolo.

Nella posizione $G$ la velocità è uguale in modulo anche in partenza ma simmetrica rispetto all'asse $x$

$$
\begin{aligned}
V_x(t_g) = V_0\cos\theta=V_x(0)\\
V_y(t_g) = -V_0\sin\theta=-V_x(0)\\
\tan\phi=-\tan\theta
\end{aligned}
$$

## CAP. 2) Forze

### 2.1 Principio di inerzia di Galileo Galilei. Introduzione al concetto di forza

La variazione dello stato di moto di un punto materiale è determinata dall'interazione con l'ambiente circostante, espressa dal concetto di **forza**.

#### Principio di inerzia di Galileo o prima legge di Newton

In un sistema di riferimento inerziale, un corpo non soggetto a forze non subisce cambiamenti di velocità, ovvero resta in uno stato di quiete se era in quiete oppure si muove di moto rettilineo uniforme.

Questo principio richiede esplicitamente il moto rettilineo uniforme perché in un qualsiasi altro tipo di moto, ad esempio quello accelerato, c'è presenza di forze. Se ci sono forze all'interno del sistema allora esso non è più un **sistema inerziale**.

Per esercitare una forza non è necessario un contatto, perché si può generare con una interazione a distanza attraverso le forze di attrazione gravitazionale o elettrostatica.

La **forza** è una grandezza che esprime e misura l'interazione tra sistemi fisici associata alla nozione di intensità, direzione e verso.

Quindi deve avere matrice vettoriale, ciò vuol dire che l'effetto della forza cambia con la direzione.

<img src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/8.png" title="" alt="" data-align="center">

Nel caso b il piano orizzontale deformandosi produce una forza che si equilibra con quella applicata dall'esterno, questa reazione è chiamata **reazione vincolare**.

La forza si misura con il **dinamometro**, che è a tutti gli effetti una molla

<img title="" src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/9.png" alt="" data-align="center" width="423">

Appendo ad una estremità di una molla una massa ($m$) che risente della forza di attrazione della terra ($mg$) e viene eguagliata dalla forza della molla.

$$
\frac{F}{F_c}=\frac{x}{x_c}
$$

- $F_c$ è la forza campione

- $x$ è la distanza campione

### 2.2 Leggi di Newton

Il secondo principio della dinamica (seconda legge di Newton) dice che l'interazione del punto materiale con l'ambiente circostante, espressa tramite $F$, determina l'accelerazione $a$ del punto ovvero la sua velocità.

$$
F=m\cdot a
$$

Dove $m$ è detta massa inerziale del punto, $F$ e $m$ sono direttamente proporzionali. Si chiama massa inerziale perché esprime l'inerzia del punto, ossia la sua resistenza a variare lo stato del moto, ciò include cambiare la velocità in modulo, la direzione o il verso. Se teniamo una $F$ costante l'effetto della stessa al diminuire della massa del punto diminuisce. Se il punto si muove con una determinata accelerazione, la forza necessaria a mantenere tale moto aumenta all'aumentare della massa. 

Se non c'è interazione con l'esterno del sistema $F=a= 0, V=const$

$$
F=m\frac{dV}{dt}=m\frac{d^r}{dt^2}
$$

L'equazione $F=m\cdot a$ è la legge vettoriale.

La seconda legge di Newton è valida solo se il moto viene studiato in un sistema di riferimento inerziale, le velocità considerate devono essere molto minori della velocità della luce nel vuoto. E' una legge di carattere generale.

La terza legge di Newton, anche chiamata principio di azione e reazione dice che se un corpo $A$ esercita una forza $F_{A,B}$ su un corpo $B$, il secondo corpo reagisce esercitando una forza $F_{B,A}$ sul primo. Le due forze hanno uguale modulo e uguale direzione ma verso opposto.

$$
F_{A,B}=-F_{B,A}
$$

Anche queste forze vengono studiate in un sistema di riferimento inerziale.

### 2.3 Quantità di moto e impulso

Dal secondo principio della dinamica in forma generale sappiamo che

$$
F=\frac{dp}{dt}
$$

Avendo definito la quantità di moto come

$$
p=mV \qquad \text{utilizzabile anche se m non è costante}
$$

Lo stato dinamico del punto è individuato dalla quantità di moto in cui compaiono massa e velocità. L'azione di una forza determina la variazione nel tempo della quantità di moto, quindi di massa, direzione, verso e modulo della velocità. Se la massa è costante nel tempo

$$
F=\frac{dp}{dt} \quad\text{si riduce a}\quad F=m\cdot a
$$

Per un punto materiale in senso stretto, ossia privo di struttura, si assume una $m$ costante.

Se con un punto approssimiamo un sistema materiale esteso, la massa può variare durante il moto. Con $Fdt=dp$ vediamo che l'azione di una forza durante un tempo $dt$ provoca una variazione infinitesima della quantità di moto. Se $F$ viene applicata per un intervallo di tempo infinitesimo si ha che

$$
J=\int_{t_0}^tFdt=\int_{p_0}^p dp=p_1-p_0=\Delta P
$$

$J$ vettoriale è chiamato impulso della forza e questa relazione esprime il teorema dell'impulso: l'impulso di una forza applicata ad un punto materiale è uguale alla variazione della sua quantità di moto. Se $m$ è costante $J=m(V_1-V_0)=m\Delta V$.

Il legame si esprime attraverso un integrale, però se $F$ non è costante

$$
\Delta V=V_1-V_0=\frac{F}{m}(t_1-t_0)=\frac{F}{m}\Delta t
$$

Il $t$ dell'impulso è utilizzabile per ricavare $\Delta p$ solo se si conosce la funzione $F(x)$. Se misuriamo $\Delta p$ è molto semplice risalire a $F(t)$ applicando il teorema della media.

$$
F_m=\frac{1}{\Delta t}\int_{t_0}{t_1}F(t)dt
$$

In assenza di forza applicata la quantità di moto di un pinto materiale rimane costante. Questa legge è nata come principio di conservazione della quantità di moto

### 2.4 Risultante delle forze di equilibrio e reazioni vincolari

Se su un punto materiale agiscono più forze, il moto del punto ha luogo come se agisse una sola forza: il vettore risultante 

$$
R= F_1+F_2+\ldots+F_n = \sum_i F_i
$$

l'accelerazione del punto è pari alla somma vettoriale delle accelerazioni che il punto avrebbe se ciascuna forza agisse separatamente.

$$
a=\frac{R}{m}=\sum_i \frac{F_i}{m}=\sum_i a_i
$$

In presenza di più forze ciascuna agisce indipendentemente, imponendo al punto un'accelerazione

$$
a_i=\frac{F_i}{m}
$$

Si parla, a tale proposito, di indipendenza delle azioni simultanee. Se un punto ha un'accelerazione nulla non significa che non agiscono forze, ma che $R=0$. Se $R=0$ e la velocità iniziale è nulla esso rimane in quiete: sono realizzate le condizioni di equilibrio sttico del punto.

<img src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/10.png" title="" alt="" data-align="center">

ogni forza è opposta e ha modulo eguale alla risultante delle altre due.

#### Reazioni vincolari

Se un corpo soggetto a una forza o a una risultante di forze resta fermo, l'azione provoca una reazione nell'ambiente circostante chiamata **reazione vincolare**.

<img title="" src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/11.png" alt="" width="199" data-align="center">

Si esprime tramite una forza uguale e contraria alla forza o risultante delle forze agenti. Il corpo rimane in quiete. Ad attrazione terrestre si equivale una reazione vincolare $N$. La reazione vincolare non è determinabile a priori utilizzando una formula, ma deve essere ricavata caso per caso dall'esame delle condizioni fisiche.

### 2.7 Forza peso

La forza peso è l'interazione di un corpo con la terra.

Ogni corpo libero assume un'accelerazione di gravità $g=9.81 m/s^2$, la forza peso è proporzionale alla massa dell'oggetto

$$
P=m\cdot a = m\cdot g
$$

Se agiscono altre forze l'accelerazione presente sul corpo sara diversa da g, come ad esempio se agisce la resistenza dell'aria in caduta.

Ogni pianeta ha la sua diversa attrazione gravitazionale, quindi anche una diversa forza peso. Da questo capiamo che $P$ non è una caratteristica del corpo.

#### Sensazione di peso

Se un corpo di massa $m$ è appoggiato su un piano orizzontale che si muove verticalmente con accelerazione $a$, si può distinguere tra accelerazione di gravità e del corpo.

In ascensore un corpo esercita una forza sul pavimento e risente di una reazione $N$

$$
|N|=m\cdot g
$$

Quando l'ascensore si muove verticalmente con una accelerazione $a$, il corpo ha accelerazione $a$

$$
N+P=m\cdot a \Rightarrow N+mg=ma\\
N=m(a-g)
$$



- Se $a= 0 $, allora $N=p=mg$ ma anche se la piattaforma su muove con $V$ costante si ha un equilibrio dinamico.

- Se $a\ne 0$ in sistema di riferimento con asse $z$ verticale orientato verso l'alto, $g=-gu_z$
  
  1)  Se $a$ è discorde da $g$, l'ascensore accelera verso l'alto
     
     $$
     N=m[au-(gu_z)] = m(a+g)u_z \Longrightarrow N>mg
     $$
     
     Si ha una sensazione di diminuzione di peso
  
  2) Se $a$ è concorde ed uguale a $g$
     
     $$
     a=g \Longrightarrow N=0
     $$
     
     Non si ha nessuna sensazione di peso
  
  3) Se $a$ è concorde a $g$ ed $|a|>|g|$, $N$ è discorde dall'asse l'asse $z$ per la deviazione, ma per il vincolo unilaterale questo corpo si stacca dal pavimento.

### 2.10 Forza elastica

Alcuni corpi materiali se sollecitati dall'esterno da una forza vengono deformati ed esercitano una forza interna di richiamo. Se la forma torna all'originale successivamente all'applicazione della sollecitazione si parla di corpi/mezzi elastici e di **forza elastica** ($F_{el}$).

Ad un corpo di lunghezza $l_0$ vincolato nel punto $Q$ viene applicata una $F_{est}$ l'ungo l'asse $x$, di conseguenza il corpo si deforma con 

$$
l=l_0+x
$$

Si ha un equilibrio statico se $F_{el}=-F_{est}$.

In generale l'intensità della forza elastica è una funzione che si può mostrare dipendenza articolata da $x$, cioè posso sviluppare in serie mc McLaurin nell'intorno di $X=0$

$$
\text{Feq}(x) = \text{Feq}(0) + \left. \frac{\partial \text{Feq}}{\partial x} \right|_{0} x + \frac{1}{2} \left. \frac{\partial^2 \text{Feq}}{\partial x^2} \right|_{0} x^2 + \dots
$$

se le sollecitazioni esterne sono piccole e abbiamo piccole variazioni $x$ della lunghezza.

$$
F_{el}(x)=F_{el}(0)+\left.\frac{\partial F_{el}}{\partial x}\right|_0x
$$


se $F_{el}(0)=0$

$$
F_{el}(x)=\left. \frac{\partial F_{el}}{\partial x}\right|_0 x
$$

Dipende dalle caratteristiche geometriche del corpo e del materiale di cui è composto e fornisce un'ottima approssimazione.

La forza elastica è una forza di direzione costante, con verso rivolto ad un punto $O$, chiamato centro e con modulo proporzionale alla distanza da $O$ (legge di Hooke)

$$
F_{e}=Kxu_x
$$

Le forze elastiche vengono esercitate usando delle molle ottenute avvolgendo un filo di acciaio armonico. La geometria e il parametro $k$ sono regolabili variando alcune condizioni della molla:

- Diametro del filo

- Raggio delle volute

- Passo dell'avvolgimento

- Numero di spire

Una molla a riposo è caratterizzata da $l_0$ e se la estendo $l>l_0$. Per questo posso modificare l'equazione per arrivare alla condizione in cui

$$
F_{el}=-K(l-l_0)=-Kx
$$

- per $x>0$ abbiamo una deformazione

- per $x<0$ se $l<l_0$

<img src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/12.png" title="" alt="" data-align="center">

$p$ e $Q$ sono punti fermi e per questo le forze applicate sono eguali ed opposte. 

- $F_2$ è dovuta alla deformazione bilanciata da $F_{est} = F_1 = -F_2$

- $F_3=F_{el}$ che viene bilanciata da $F_4=-F_3$

- Le relazioni $F_1, F_2,F_3,F_4$ soddisfano la terza legge di Newton

Per il verificarsi delle sopra citate condizioni si ha che la molla è ferma, perché la risultante delle forze applicate è 0. Quindi se una molla è libera, per deformarla bisogna applicare agli estremi due forze eguali e contrarie di modulo $kx$.

Il modulo della forza elastica è proporzionale alla deformazione a meno che non superi il limite di linearità della molla che è

- Valore fino a cui si possono trascurare i termini maggiori

- Limite oltre il quale si ha un regime non lineare dove la forza elastica non è più direttamente proporzionale alla deformazione

Inoltre esiste il **valore di soglia** oltre il quale non si ha più una deformazione elastica, ma una deformazione plastica. Questo valore è detto **limite di elasticità**.

#### Moto di un punto in presenza di una forza elastica

Abbiamo una molla bloccata ad un estremo $Q$ che viene deformata per una lunghezza di $x_0$ ed in $p$ le viene fissato un punto materiale di massa $m$. Il moto risultante per la forza elastica è rettilineo se $V_0=0$ o $V_0$ è un vettore sull'asse delle $x$. Il punto obbedirà alla 2° legge di Newton in questo modo:

$$
F_{el}=m\cdot a \Rightarrow -Kxu_x
$$

che se proiettata sull'asse $x$

$$
\frac{d^2x}{dt^2} + \frac{K}{m}x=0 \Rightarrow \frac{d^2x}{dt^2}+\omega^2x=0
$$

ossia l'equazione differenziale del moto armonico semplice, la cui soluzione è

$$
x=A\sin(\omega t+\phi)
$$

dove

$$
\omega=\sqrt{\frac{K}{m}} \qquad T=\frac{2\pi}{\omega}=2\pi\sqrt{\frac{m}{K}}
$$

da questo capiamo che se vogliamo un basso periodo dovremo diminuire la massa o aumentare la rigidità della molla.

$A$ e $\phi$ sono costanti che dipendono dalle condizioni iniziali.

### 2.13 Pendolo semplice

Il pendolo semplice è costituito da un punto materiale appeso tramite un filo inestensibile e di massa trascurabile. La posizione di equilibrio statico è verticale con il punto fermo ed il filo teso. La forza del filo anche detta tensione sarà

$$
T_g=m\cdot g
$$

<img title="" src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/13.png" alt="" data-align="center" width="235">

Se si sposta il punto dalla posizione verticale, esso oscillerà attorno ad $O'$ con traiettoria circolare di raggio $L$, che è la lunghezza del filo.

Se non c'è attrito le forze agenti su $p$ sono $p=mg$ e $T_g$

$$
\begin{aligned}
R&=mg+T_g=ma \\
R_T&=-mg\sin(\theta)=ma_T \\
R_N&=T_g-mg\cos(\theta)=ma_N
\end{aligned}
$$

- $S<0$ vuol dire che sto andando a sinistra rispetto alla verticale, $F$ è negativa

- $S>0$ vuol dire che sto andando a destra rispetto alla verticale, $F$ è positiva

- $R_T$ è la forza di richiamo che riporta il punto sulla verticale. Non ha direzione costante
  
  $$
  a_T=L\frac{d^2\theta}{dt^2}
  $$
  
  Equazione differenziale del moto del pendolo la cui soluzione fornisce la legge del moto. Per qualsiasi valore si $\theta$ l'equazione è non lineare
  
  $$
  \begin{aligned}
a_n=\frac{V^2}{L}\Rightarrow
\frac{d^\theta}{dt^2}&=-\frac{g}{L}\sin\theta \\
m\frac{V^2}{L}&=T_g-mg\cos\theta
\end{aligned}
  $$

Consideriamo piccoli $\theta$ facendo lo sviluppo in serie con $\sin\theta$

Per $\theta<7°$ approssimiamo il seno a $\theta$ con l'errore relativo minore di 0,25% per piccole oscillazioni.

$$
\frac{d^2\theta}{dt^2}+\frac{g}{L}\theta=0 \quad \text{coincide conil moto armonico semplice}
$$

Per la legge oraria sappiamo che

$$
\theta=\theta_0(\sin_\omega t+0)\\
T=\frac{2\pi}{\omega}=2\pi\sqrt{\frac{L}{g}}
$$

quindi non dipende dall'ampiezza e abbiamo un isocronismo delle piccole oscillazioni.

Risolvendo le precedenti equazioni ricaviamo la legge oraria lungo l'arco di circonferenza

$$
S=L\theta=L\theta_0\sin(\omega t + \phi)
$$

con velocità angolare

$$
\frac{d\theta}{dt}=\omega\theta_0\cos(\omega t+\phi)
$$

e velocità lineare

$$
V=\frac{ds}{dt}=L\frac{d\theta}{dt}=L\theta_0\omega\cos(\omega t+\phi)
$$

$V_{max}$ se il punto passa per $O'(\theta=0)$ e la velocità è nulla agli estremi di oscillazione, che sono i punti in cui il verso di oscillazione si inverte.I risultati cinematici non dipendono da $m$ del pendolo.

Se l'ampiezza delle oscillazioni non è piccola abbiamo un moto periodico ma non armonico.

$T'$ dipende dall'ampiezza.

$$
\Delta T=T'-T
$$

<img title="" src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/14.png" alt="" data-align="center" width="269">

Variazione relativa del periodo di un pendolo semplice in funzione dell'ampiezza angolare di oscillazione $T'\cong1,16T$ .

Note $\theta(t)$ e $V(t)$:

$$
T_g=m\left[g\cos\theta(t)+\frac{V^2(t)}{L}\right]
$$

$T_{max}$ in $O'$ perché il coseno di $\theta(t)$ e $V(t)$ sono massimi ed è minima nei punti di inversione.

Se $\theta_0=\frac{\pi}{2}$ l'inversione del moto si ha quando la corda è orizzontale e la $T$ è nulla. Il moto del pendolo si dice conico quando

- Il piano è orizzontale

- Il moto è circolare uniforme.

- Le forze sono ortogonali e la traiettoria è costante

- $V$ iniziale è diversa da 0 o che rimane costante in modulo

<img src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/15.png" title="" alt="" data-align="center">

Il moto del pendolo semplice ha le seguenti caratarishtike:

- Un piano verticale

- La risultante delle forze ha le componenti tangente e normale per una traiettoria non costante

- $V_0$ può essere nulla con $\theta\ne0$

- Il moto risulta essere armonico semplice su un arco di circonferenza

### 2.15 Lavoro, potenza e energia cinetica
