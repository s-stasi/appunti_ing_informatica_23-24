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
  
  1) Se $a$ è discorde da $g$, l'ascensore accelera verso l'alto
     
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

#### Lavoro

La forza è considerata come funzione della posizione dal punto.

<img src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/16.png" title="" alt="" data-align="center">

Consideriamo un punto materiale che si muove su una traiettoria curva. $F$ è la risultante delle forze che agiscono su $p$. Lo spostamento può essere scomposto nella somma di spostamenti elementari infinitesimi $ds$ nei quali $F$ assume diversi valori sia di intensità che di direzione e verso.

Si definisce lavoro della forza $F$, compiuto durante lo spostamento del punto da $A$ a $B$, la quantità scalare

$$
\omega= \int_A^B FdS=\int_A^B F\cos\theta dS = \int_A^B F_rdS
$$

Il lavoro è l'integrale di linea della forza , quindi la somma di infiniti contributi

$$
dW=FdS=F_rdS
$$

lungo la traiettoria $|F|$ e $\theta$ sono variabili

- Se $F$ forma con $dS$ un $\theta<\frac{\pi}2$ l'accelerazione tangenziale è concorde con $V$
  
  $dW > 0$ viene chiamato lavoro motore

- Se $F$ forma con $dS$ un $\theta>\frac{\pi}2$ il punto viene frenato
  
  $dW<0$ viene chiamato lavoro resistente

- Se $F$ è ortogonale alla traiettoria $\theta=\frac{\pi}2$ ed il lavoro è nullo, $F$ ha azione centripeta ed il modulo di $V$ non varia

Quando $F$ è la somma di diverse forze, per ciascuna si può calcolare il lavoro $W_i$

$$
W_i=\sum_i W_i\\
\begin{aligned}
W = \int_A^BFdS&=\int_A^B(F_1+F_2+1+\ldots+F_n)dS \\
&=\int_A^BF_1dS+\ldots+\int_A^BF_ndS\\
&=W_1+W_2+\ldots+W_n
\end{aligned}
$$

Il lavoro è pari alla somma dei lavori delle singole forze agenti, ciascuno dei quali può essere positivo, negativo o nullo. $W=0$ se non ci sono forze oppure se la risultante delle forze è nulla (ortogonale alla traiettoria).

#### Potenza

La potenza istantanea è definita come il lavoro per unità di tempo compiuto dalla forza lungo un tratto $dS$

$$
P=\frac{dW}{dt}=F\frac{dS}{dt}=F\cdot V=F_TV
$$

La potenza istantanea è variabile durante il moto mentre la potenza media è il rapporto $\frac{W}t$ e serve a qualificare le prestazioni di un dispositivo o macchinario che fornisce lavoro. Se $L_1=L_2$ la macchina che impiega minore tempo ha maggiore potenza.

#### Energia cinetica

L'energia cinetica è la relazione tra lavoro infinitesimo associato allo spostamento

$$
dW=F_TdS=ma_TdS=m\frac{dV}{dt}dS=m\frac{dS}{dt}dV
$$

quindi $dW=mVdV$ è il legame tra $W$ infinitesimo e variazione infinitesima del modulo della velocità

$$
\begin{aligned}
W=\int_A^BdW=\int_A^BmVdV&=\frac{1}2mV_B^2-\frac{1}2mV_A^2\\
&=E_{K,B}-E_{K,A}\\
&=\Delta E_K
\end{aligned}
$$

Il lavoro $W$ è quindi sempre eguale alla variazione della grandezza fisica $E_K=\frac{1}2mV^2$ che si chiama energia cinetica del punto materiale.

Il teorema dell'energia cinetica ricavato con la legge di Newton ha validità generale, quindi per qualunque tipo di forza agente in questione:

$$
W=\Delta E_K
$$

- $W>0 \quad \to \quad E_{cfin}>E_{cin}$   

- $W<0 \quad \to \quad E_{cfin}<E_{cin}$   solitamente si tratta del lavoro delle forze di attrito

- $W=0 \quad \to \quad Ec=const$ 

Se sul punto materiale agiscono diverse forze $W$ è la risultante

<span style="background-color: red;">Se non c'è spostamento, non c'è lavoro</span>

$$
\begin{aligned}
&E_K=\frac{1}2mV^2 &&P=m\cdot V\\
&E_K=\frac{P^2}{2m} &&P=\sqrt{2nE_K}
\end{aligned}
$$

Il lavoro viene scambiato, l'energia è posseduta dal sistema

### 2.16 Lavoro della forza peso

$P$ è la **forza peso**. Il lavoro di $P$ per uno spostamento lungo una traiettoria generica da $A$ a $B$ con l'asse $z$ orientato verso l'alto in opposizione a $g$ vale

$$
W=\int_A^BPdS=P\int_A^BdS=mg\Delta S=mg(M_B-M_A)
$$

il peso è costante ed è la componente lungo l'asse $z$ vale

$$
\Delta S=z_B-z_A
$$

ed ha verso opposto a quello dell'asse.

$$
W=mg\Delta S=-(mgz_B-mgz_A)=-(E_{P,B}-E_{P,A})=-\Delta E_P
$$

Il lavoro è uguale all'opposto della variazione di questa funzione durante lo spostamento da $A$ a $B$ e pertanto non dipende dalla particolare traiettoria che collega $A$ e $B$.

$E_P$ è l'energia potenziale della forza peso

- se $B$ è più un basso di $A$, $W_{B0}$ ed $E_P$ sono minori per uno spostamento materiale di un punto $P$
- Se $B$ è più in alto de $A$, $W<0$ ed $E_P$ cresce. Il punto deve avere $V_0$ affinché un minor $E_C$ eguagli il lavoro altrimenti si aggiunge $F$ finché il suo lavoro motore superi in modulo il lavoro resistente della forza peso

La trattazione della forza peso si estende per tutte le forze costanti

$$
W=\int_A^BFdS=F\int_A^BdS=F\cdot\Delta S
$$

- Se l'asse $z$ è parallelo e discorde dalla forza si ha che
  
  $$
  W=-(F_{zB}-F_{zA})=-\Delta E_P \quad \text{con} \quad \Delta E_P = F_z
  $$

- Se l'asse $z$ è concorde con la forza si ha invece che
  
  $$
  W=-\Delta_{EP} \quad \text{con} \quad \Delta E_P=-F_z
  $$

### 2.17 Lavoro di una forza elastica

$F_{el} = -Kxu_x$  per spostamento lungo l'asse $x$

$$
\begin{aligned}
W&=\int_A^B-Kxu_xdxu_x=-K\int_A^Bxdx\\
&=-\left(\frac{1}2Kx_B^2 -\frac{1}2Kx_A^2 \right)=-\Delta E_p
\end{aligned}
$$

dove l'energia potenziale elastica

$$
E_p=\frac{1}2K_x^2
$$

- Se $A>B$, il punto si muove verso il centro della forza
  
  $$
  W>0 \qquad \qquad E_p\downarrow
  $$
  
  e si ha uno spostamento naturale

- Se $A<B$
  
  $$
  W<0 \qquad \qquad E_p\uparrow
  $$
  
  il punto deve avere una velocità iniziale o gli deve essere applicata una forza

### 2.20 Conservazione dell'energia meccanica

Avendo le forze conservatrici

$$
\left.\begin{aligned}
W=\Delta E_K=E_{K,B}-E_{K,A}\\
W=-\Delta E_p=E_{p,A}-E_{p,B}
\end{aligned}\right\}\text{le eguaglio}
$$

$$
\Downarrow
$$

$$
E_{K,A} + E_{p,A}=E_{K,B}+E_{P,B}
$$

La somma $E_K + E_p$ di un punto materiale che si muove sotto l'azione di forze conservative rimane sempre costante durante il moto, quindi l'energia si conserva. Questa somma è l'**energia meccanica** per cui vale il principio di conservazione dell'energia meccanica

$$
E_m=E_K+E_p=const
$$

L'energia ottenuta con la diminuzione dell'energia cinetica causa un'aumento dell'energia potenziale e viceversa, per questo resta sempre costante. 

Se agiscono delle forze le possiamo dividere in due categorie:

- Conservative

- Non conservative

quindi

$$
W=W_c+W_{nc}=E_{K,B}-E_{K,A}\\
E_{P,B} - E_{P,A} + W_{nc} = E_{K,B}-E_{K,A}\Longleftrightarrow
W_{nc}=(E_{K,B}+E_{p,B})-(E_{K,A}+E_{}p,A)\\=-E_{m,A}+E_{m,B}
$$

Una forza $F$ che esercita un momento $M$ rispetto ad un polo $\Omega$ causa una variazione del momento angolare $L$ calcolato rispetto allo stesso polo. Una variazione nel tempo di $L$ di un punto in movimento risulta essere

$$
\frac{dL}{dt} = \frac{d}{dt}(r\times mV)=\frac{dr}{dt}\times mV+r\times m\frac{dV}{dt}
$$

- $r$ è il raggio del vettore che congiunge il polo a $p$, con polo in $O$ del sistema di riferimento

quindi

$$
\frac{dL}{dt}=M
$$

#### Teorema del momento angolare per un punto materiale

La derivata del momento angolare è uguale al momento della forza se entrambi i momenti sono riferiti allo stesso polo fisso in un sistema di riferimento inerziale. Il momento della forza rispetto al polo può essere 0 se 

- $F=0$

- $\Omega P$ ed $F$ sono parallele

#### Principio di conservazione del momento angolare

Il momento angolare di un punto materiale rimane costante nel tempo (si conserva) se il momento delle forze è nullo

$$
rdt=dL \qquad \text{agli istanti }t_0, t_1
$$

$$
\int_{t_0}^{t_1}rdt=\Delta L=L_1-L_0
$$

Per variare il momento angolare occorre l'azione del momento di una forza, proprietà analoga al teorema dell'impulso. Se una forza è applicata per poco tempo $\Omega P$ è quasi costante

$$
\begin{aligned}
\int_{t_0}^{t_1}Mdt&=\int_{t_0}^{t_1}(\Omega P\times F)dt \\
&=\Omega P\times\int_{t_0}^{t_1}Fdt \\
&=\Omega P\times J=\Delta L
\end{aligned}
$$

#### Teorema del momento dell'impulso

La variazione del momento angolare è uguale al momento dell'impulso applicato al punto. Nel moto angolare il lavoro è espresso come il modulo del momento della forza

$$
\begin{aligned}
W=\int_A^BF_TdS&=\int_A^BrF_rd\theta \\
&=\int_A^BMd\theta
\end{aligned}
$$

Con $dS = rd\theta$  come componente normale

Se ci sono forze non conservative l'energia materiale non è più costante e la sua variazione è $E_m=W_{nc}$. In presenza di attrito $W_{nc}<0$ e l'energia materiale diminuisce durante il processo. Per rimediare a questo fenomeno ho bisogno di altre forze non conservative che facciamo crescere o restare costante l'energia materiale. Se il sistema è grande l'energia materiale tende sempre a diminuire a causa degli effetti dissipativi.

### 2.22 Momento angolare e momento della forza

Se consideriamo un singolo punto materiale il momento angolare e il momento della forza sono irrilevanti perché il punto si muove con moto costante.

$$
T=\frac{2\pi}{\omega}
$$

Un osservatore in $\Omega$ percepisce la rotazione.

<img title="" src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/17.png" alt="" width="191" data-align="center">

Il momento angolare, o momento del vettore, è la quantità di moto di $P$ rispetto al polo $\Omega$

$$
L_\Omega=\Omega P\times p=\Omega P\times mV
$$

$L_\Omega$ è il vettore ortogonale al piano della figura e quantifica lo stato di rotazione attorno al polo $\Omega$. Il modulo è

$$
\overline{\Omega P}mV\sin\theta
$$

Il momento angolare dipende dal polo di riferimento che uso

$$
L_{\Omega'}=L_\Omega+\Omega\Omega'\times mV
$$

Se il moto del punto non è uniforme, il momento sarà una funzione rispetto al tempo $L(t)$ ortogonale al piano istantaneo che contiene il vettore $V$ e $\Omega$. Considerando un moto curvilineo

$$
L_\omega=\Omega P\times mV=\Omega P\times m(V_r+V_\theta)=\Omega P\times mV_\theta
$$

- $V_r$ è la componente radiale

- $V_\theta$ è la componente trasversa

dato che $\Omega P$ e $V_r$ sono paralleli, hanno prodotto vettoriale nullo. Mentre il modulo di $L_\Omega$ vale

$$
L=mrV_0=mr^2\frac{d\theta}{dt}
$$

Il momento della forza rispetto al polo $\Omega$

$$
\begin{aligned}
M_\Omega&=\Omega P\times F \\
M_{\Omega'}&=M_\Omega+\Omega'\Omega\times F
\end{aligned}
$$

se al punto applico diverse forze con sommatoria $R=\sum_iF_i$

$$
\begin{aligned}
M_\Omega&=\Omega P\times F_1 + \ldots + \Omega P\times F_n \\
&=\Omega P \times(F_1+\ldots+F_n) \\
&=\Omega P\times R
\end{aligned}
$$

#### Teorema del momento angolare

![](/Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/18.png)

Il punto è soggetto ad una forza

- Se $F$ non ha verso $\Omega, M_\Omega \ne 0$, l'accelerazione modificala direzione e il modulo di $V$, la variazione dell'angolo è diversa da 0.
  
  $$
  \frac{dL_\Omega}{dt}\ne0
  $$

- Se ha lo stesso verso di $\Omega$ non si crea nessun momento angolare, l'accelerazione si applica a $V$ che però non cambia di direzione. Si dice che la forza ha momento nullo rispetto al centro della circonferenza

$$
L=\text{momento angolare}\left[\frac{kgm^2}{S} = \frac{Nm}{S}\right]
$$

$$
M=\text{momento della forza }[Nm]
$$

## CAP. 4) Oscillatore armonico

### 4.2 Proprietà dell'equazione differenziale dell'oscillatore armonico

Equazione differenziale dell'oscillatore armonico libero

$$
\frac{d^2x(t)}{dt^2}+\omega x(t)=0
$$

è un'equazione del secondo ordine a causa della derivata seconda, lineare perché compare ovunque alla prima potenza, a coefficienti costanti e omogenea perché il termine noto è nullo.

- Se $x(t)$ è una soluzione dell'equazione, anche $\alpha x(t)$ lo è perché $\alpha$ è costante.

- Se $y(t)$ è una soluzione dell'equazione, anche $z(t)=x(t)+y(t)$ lo è, infatti
  
  $$
  \begin{aligned}
\frac{d^2z}{dt^2}=\frac{d^2}{dt^2}(x+y)&=\frac{d^2x}{dt^2}+\frac{d^2y}{dt}\\
&=-\omega^2x-\omega^2y\\
&=-\omega^2(x+y)\\
&=-\omega^2z \Rightarrow\text{equazione lineare}
\end{aligned}
  $$

ha due soluzioni indipendenti e alte dovute alla combinazione di seno e coseno

$$
x(t)=a\sin\omega t+b\cos\omega t
$$

dove $a,b$ sono le due soluzioni indipendenti.

quindi, per via della somma di angoli nelle funzioni goniometriche abbiamo

$$
\begin{aligned}
x(t)&=A\sin(\omega t+\phi) &a=A\cos\phi\\
&&b=A\sin\phi\\\\
x(t)&=B\cos(\omega t+\psi) &a=B\sin\psi\\
&&b=B\cos\psi
\end{aligned}
$$

ricaviamo che

$$
A=\sqrt{a^2+b^2}=B \qquad
\begin{aligned}
\tan\phi&=\frac{b}a\\
\tan\psi&=\frac{a}b
\end{aligned}
$$

Se l'oscillazione è soggetta ad una forza esterna $f(t)$, detta **forzante**, l'equazione che descrive il moto diventa

$$
\frac{d^2x(t)}{dt^2}+\omega^2x(t)=f(t)
$$

dove $f(t)$ può essere una funzione anche costante. Trovando una soluzione particolare $x_P(t)$ (equazione non omogenea), la soluzione generale è

$$
x(t)=a\sin(\omega t)+b\cos(\omega t)+x_P(t)
$$

$$
f_1(t)\Rightarrow x_1(t) \quad\text{e con} \quad f_2(t)\Rightarrow x_2(t)
$$

la forzante vale:

$$
f_1(t)+f_2(t)=x_1(t)+x_2(t)
$$

infatti

$$
\frac{d^2}{dt^2}(x_1+x_2)+\omega^2(x_1+x_2)=
\frac{d^2x_1}{dt^2}+\omega^2x_1+\frac{d^2x_2}{dt^2}\omega^2x_2=
f_1+f_2
$$

il risultato è dovuto alla linearità dell'equazione differenziale, è la manifestazione del principio di sovrapposizione. Se in una determinata situazione si ha una certa soluzione ed in una diverta situazione si ha un'altra soluzione, al verificarsi contemporaneamente delle due si ha come soluzione la somma delle due situazioni a meno che la contemporaneità non alteri la linearità dell'equazione.

Il principio è valido anche per equazioni differenziali del secondo ordine.

$$
\frac{d^x}{dt^2}+c\frac{dx(t)}{dt}+\omega^2x=0
$$

### 4.3 Energia dell'oscillatore armonico

Un punto che oscilla per una forza elastica conservativa, durante il moto conserva l'energia totale che rimane costante

$$
\begin{aligned}
E_K&=\frac{1}2mV^2=\frac{1}2m\omega^2A^2\cos^2(\omega t+\phi) \\
E_P&=\frac{1}2kx^2=\frac{1}2k\omega^2A^2\sin^2(\omega t+\phi) \\
E_m&=E_K+E_P \Rightarrow 
\underbrace{
\underbrace{\frac{1}2kA^2}_{\text{valore max }E_P}=
\underbrace{\frac{1}2m\omega^2A}_{\text{valore max }E_K}
}_{\text{costante}}
\end{aligned}
$$

$$
\begin{aligned}
E_m&=E_{Pmax}=E_{Kmax} \qquad\text{in posizione generica} \\
E_m&=\frac{1}2mV^2(x)+\frac{1}2kx^2
\end{aligned}
$$

<img src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/19.png" title="" alt="" data-align="center">

Imponendo la conservazione dell'energia ottengo l'equazione differenziale del moto

$$
\frac{1}2mV^2+\frac{1}2kx^2=const
$$

da questo si ottiene

$$
mvdv+kxdx=0 \Longrightarrow\frac{dv}{dx}=-\frac{kx}{mV}
$$

con $adx=VdV$ si ha

$$
\frac{dV}{dx}=\frac{a}{V}
$$

eguagliando diventa

$$
a=-\frac{k}mx \Longrightarrow \frac{dx^2}{dt^2}+\omega^2x=0
$$

Il moto tra $-A$ ed $A$ è equiparato ad uno stato di quiete ma il valore medio dell'energia è $\ne$ 0

$$
\begin{aligned}
(E_K)_m&=\frac{1}2 \omega^2A^2m[\cos^2(\omega t+\phi)] \\
&=\frac{1}4m\omega^2A^2 = \frac{1}2E_m\\
(E_P)_m&=\frac{1}2 KA^2[\sin(\omega t+\phi)] \\
&=\frac{1}4KA^2=\frac{1}2E_m
\end{aligned}
$$

### 4.4 Composizione di moti armonici lungo lo stesso asse

Due punti sottoposti ad una forza elastica diretta l'ungo l'asse $x$, sviluppano un moto armonico lungo l'asse $x$. Se vengono congiunti con un segmento avremo un punto medio a 

$$
\frac{x_2-x_1}2
$$

#### Pulsazioni uguali

Le leggi orarie dei due punti sono

$$
x_1=A_1\sin(\omega t+\phi_1) \\
x_2=A_2\sin(\omega t+\phi_2)
$$

abbiamo le stesse equazioni differenziali e la stessa pulsazione ma con diverse condizioni iniziali. Le combiniamo in

$$
\begin{aligned}
x&=A\sin(\omega t+\psi) &A=\text{ampiezza} \\
&&\psi=\text{fase iniziale}
\end{aligned}
$$

$$
\begin{aligned}
x&=A\sin(\omega t+\psi)=A_1\sin(\omega t+\phi_1)+A_2\sin(\omega t+\phi_2)\\
&\Rightarrow A\cos\psi\sin\omega t+A\sin\psi\cos\omega t \\
&=(A_1\cos\phi_1+A_2\cos\phi_2)\sin\omega t+
(A_1\sin\phi_1+A_2\sin\phi_2)\cos\omega t
\end{aligned}
$$

visto che i coefficienti di seno e coseno sono uguali

$$
\begin{aligned}
A\cos\psi&=A_1\cos\phi_1+A_2\cos\phi_2 \\
A\cos\psi&=A_1\sin\phi_1+A_2\cos\phi_2 \\
A&=\sqrt{A^2_1+A^2_2+2A_1A_2\cos(\phi_1-\phi_2)} \\
\tan\psi&=\frac{A_1\cos\phi_1+A_2\cos\phi_2}{A_1\sin\phi_1+A_2\cos\phi_2}
\end{aligned}
$$

C'è un altro modo: Fresnel basata sul fatto che la proiezione di un moto circolare su un diametro è un moto armonico. 

<img src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/20.png" title="" alt="" data-align="center">

$A_1=$ vettore ruotante in senso antiorario nel piano $x,y$ con velocità angolare $\omega$, forma $\delta_1=\omega t+\phi_1$ con asse $x$. La proiezione sull'asse delle $y$ vale $A_1\sin(\omega t+\phi_1)$. $S$ è la differenza di fase tra le due sinusoidi

$$
\delta=\delta_1-\delta_2=(\omega t+\phi_1)-(\omega t+\phi_2)=\phi_1-\phi_2
$$

La differenza di fase è costante nel tempo perché $A_1,A_2=\omega$. Il vettore risultante $A$ si trova con il teorema di Carnot:

$$
\begin{aligned}
A&=A_1+A_2
&=\sqrt{A_1^2+A_2^2+2A_1A_2\cos(\phi_1-\phi_2)}
\end{aligned}
$$

quindi la somma di due moti armonici si riduce alla somma di due vettori. L'ampiezza del moto risultante dipende ovviamente dalla differenza delle due fasi $\Delta\phi$

- Il minimo è $\Delta\phi=0+2k\pi$

- Il massimo è $\Delta\phi=\pi+k\pi$

#### Pulsazioni diverse

$$
x_1=A_1\sin(\omega_1t+\phi_1) \\
x_2=A_2\sin(\omega_2t+\phi_2)
$$

Con due pulsazioni diverse la differenza di fase cambia nel tempo per via del teorema di Fresnel

$$
\begin{aligned}
\delta=\delta_1-\delta_2&=(\omega_1t+\phi_1)-(\omega_2t+\phi_2) \\
&=(\omega_1-\omega_2)t+\phi_1-\phi_2
\end{aligned}
$$

per questo il vettore $A$ risultante sarà una funzione del tempo

$$
A(t)=\sqrt{A_1^2+A_2^2+2A_1A_2\cos[(\omega_1-\omega_2)t+\phi_1-\phi_2]}
$$

il moto non è più armonico semplice ma risulta essere una modulazione d'ampiezza.

Se $A_1=A_2=A$ e $\phi_1=\phi_2=0$

$$
\begin{aligned}
x&=x_1+x_2=A\sin\omega_1+A\sin\omega_2 \\
&=2A\cos(\underbrace{\frac{\omega_1-\omega_2}{2}}_{\Omega})t\sin\underbrace{(\frac{\omega_1+\omega_2}{2})}_{\omega}t
\end{aligned}
$$

Dove $\omega$ è chiamata pulsazione portante.

$$
\begin{aligned}
x(t)&=A(t)\sin\omega t \\
&=2A\cos\Omega t\sin\omega t
\end{aligned}
$$

per $\Omega<\omega$ si ha il fenomeno del battimento. Nelle trasmissioni in modulazione d'ampiezza (AM) avremo che $\omega$ è la pulsazione della portante, mentre $\Omega$ è la pulsazione del segnale modulante (ea. generato da un microfono).

<img title="" src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/21.png" alt="" data-align="center" width="350">

### 4.5 Composizione di moti armonici lungo assi ortogonali

Consideriamo un punto materiale $P$ sottoposto a due forze elastiche con direzioni ortogonali (assi $x,y$). Abbiamo la somma di moti armonici rettilinei che dà un moto piano se hanno la stessa pulsazione.

$$
x=A\sin\omega t \qquad \qquad y=B\sin(\omega t + \phi)
$$

$\phi$ è lo sfasamento tra i due moti, se i moti sono in fase ($\phi=0°$)

$$
\frac{x}{y}=\frac{A}{B}
$$

$P$ si muove di moto armonico tra i punti $P_1$ e $P_2$

$$
\newcommand{\atan}{\mathrm{atan}}
P_1=(-A;-B) \qquad \qquad P_2=(A;B) \\
\theta=\atan\frac{B}{A}
$$

dove $\phi$ è l'angolo formato dal segmento $\overline{P_1P_2}$ con l'asse delle $x$.

Se i moti sono in opposizione di fase ($\phi=\pi$)

$$
\frac{x}{y}=-\frac{A}{B} \quad \text{il punto oscilla tra }P_3, P_4\Rightarrow-\theta
$$

Se i moti sono in quadratura di fase ($\phi=\frac{\pi}{2}$)

$$
x=A\sin\omega t \qquad \qquad y=B\sin(\omega t + \frac{\pi}{2})=B\cos\omega t
$$

$$
\left(\frac{a}{A} \right)^2+\left(\frac{y}{B} \right)^2=1 \Longrightarrow \text{equazione dell'ellisse}
$$

in questo caso il moto è in senso orario, sarebbe antiorario nel caso in cui $\phi=\frac{3}{2}\pi$. Se le due ampiezze sono uguali e i due moti sono in quadratura di fase il moto risultante sarà per forza circolare, mentre per uno sfasamento qualsiasi si ha un'ellisse con gli assi non paralleli a quelli del piano ($x,y$).

La somma di due moti armonici con uguale pulsazione su assi ortogonali da sempre luogo ad un moto piano con traiettoria ellittica. Ci sono alcune situazioni particolari in cui l'ellisse degenera in un segmento o una circonferenza. 

Applicando questo fenomeno alle onde elettromagnetiche riesco a studiare quello che è detto polarizzazione dell'onda.

$$
\begin{aligned}
\left.\begin{aligned}
F &\to F_x=-kx \\
&\to F_y=-ky
\end{aligned}\right\} &\text{da cui derivo} \\
&\begin{aligned}
F&= -kxu_x-kxu_y \\
&=-k(xu_x-xu_y) \\
&=-kr \\
&\Downarrow
\end{aligned}
\end{aligned} \\
\text{che rappresenta la forza elastica bidimensionale della tr. ellittica} \\
\text{percorsa con } V=const
$$

$F=-kx$ è una forza conservativa

$$
E_k=\frac{1}2m(V_x^2+V_y^2)=\frac{1}2m\omega^2[A^2\cos^2\omega t+B^2\cos^2(\omega t+\phi)]
$$

$$
E_p=\frac{1}2kr^2=\frac{1}{2}m\omega^2r^2=\frac{1}2m\omega^2[A^2\sin^2\omega t+B^2\sin^2(\omega t+\phi)]
$$

$$
E_m=E_k+E_p=\frac{1}2m\omega^2(A^2+B^2)=\frac{1}2k(A^2+B^2)
$$

- $\frac{1}2m\omega^2A^2=\frac{1}2kA^2$ è l'**energia meccanica** del moto sull'asse $x$

- $\frac{1}2m\omega^2B^2=\frac{1}2kB^2$ è l'**energia meccanica** del moto sull'asse $y$

la somma delle due da l'energia meccanica totale che è indipendente dallo sfasamento, diventa complicata se le pulsazioni sono diverse. In particolare si ottiene un moto periodico nel quale le traiettorie del punto nel piano sono delle figure di Lissajous.

<img title="" src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/22.jpg" alt="" width="365">Figura di Lissajous

### 4.6 Oscillatore armonico smorzato da una forza di attrito viscoso

In questa sezione analizziamo un oscillatore armonico frenato da una forza di tipo viscoso proporzionale ed opposto al moto, non forze di attrito.

$$
ma=-kx-bV\Rightarrow\frac{d^2x}{dt^2}+\frac{b}m\frac{dx}{dt}+\frac{k}mx=0
$$

i coefficienti di smorzamento e pulsazione propria sono

$$
\gamma=\frac{b}{2m} \qquad \qquad \omega_0=\sqrt{\frac{k}m}
$$

riscrivendo la prima equazione otteniamo l'equazione differenziale dell'oscillatore armonico smorzato

$$
\frac{d^2x}{dt^2}+2\gamma\frac{dx(t)}{dt}+\omega_0^2x(t)=0
$$

l'attrito viscoso porta ad uno smorzamento esponenziale in cui $x(t)$ è proporzionale a $e^{\alpha t}$

$$
\frac{d^2}{dt^2}(e^{\alpha t})+2\gamma\frac{d}{dt}(e^{\alpha t})+\omega^2_0e^{\alpha t}=0
$$

$$
\alpha^2e^{\alpha t}+2\gamma\alpha e^{\alpha t}+\omega_0^2e^{\alpha t}=
e^{\alpha t}(\underbrace{a^2+2\gamma\alpha+\omega_0^2}_{\text{equazione caratteristica di 2°}})=0 \\
\Downarrow \\
\alpha=-\gamma\pm\sqrt{\gamma^2-\omega_0^2}
$$

cosa succede nei seguenti tre casi?

$$
\gamma^2>\omega_0^2 \qquad \qquad \gamma^2=\omega_0^2 \qquad \qquad \gamma^2<\omega_0^2
$$

#### Primo caso: smorzamento forte

Nel caso in cui $\gamma^2>\omega_0^2$ si ottengono due soluzioni reali distinte

$$
x(t)=Ae^{\alpha_1 t}+Be^{\alpha_2 t}=e^{-\gamma t}\left(Ae^{t\sqrt{\gamma^2-\omega_0^2}}+Be^{-t\sqrt{\gamma^2-\omega_0^2}} \right)
$$

dove $A$ e $B$ dipendono dalle condizioni iniziali

#### Secondo caso: smorzamento critico

Nel caso in cui $\gamma^2=\omega_0^2,\alpha_1=\alpha_2=-\gamma$ ci sono due soluzioni reali coincidenti

$$
x(t)=e^{-\gamma t} (At+B)
$$

Ci sono delle categorie che indicano i diversi comportamenti del sistema a seconda dell'entità del comportamento e vengono rappresentati su un grafico

- Con cat. 1, 2 e 3 si ha uno smorzamento forte

- Con cat. 4 si ha uno smorzamento critico

Le curve dicono quanto ci mette il sistema a tornare al punto di equilibrio $x=0$ senza oscillazioni e con una diversa velocità.

<img src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/23.png" title="" alt="" data-align="center">

Se lo smorzamento è forte o critico non abbiamo oscillazioni.

#### Terzo caso: smorzamento debole

Nel caso in cui $\gamma^2<\omega_0^2$ ci sono due soluzioni complesse coniugate

$$
\begin{aligned}
\alpha_1&=-\gamma+i\sqrt{\omega_0^2-\gamma^2}=\gamma+i\omega \\
\alpha_2&=-\gamma-i\sqrt{\omega_0^2-\gamma^2}=-\gamma+i\omega
\end{aligned}
$$

$$
x(t)=Ae^{\alpha_1t}+Be^{\alpha_2t}=e^{-\gamma t}(Ae^{i\omega t}+ Be^{-i\omega t})
$$

Usando la formula di Eulero

$$
e^{\pm i\omega t}=\cos\omega t\pm i \sin\omega t
$$

ottengo

$$
x(t)=e^{-\gamma t}[(A+B) \cos\omega t + (A+B)i\sin\omega t] \qquad A,B \in \R \\
\text{siccome i due valori devono essere complessi coniugati avremo che} \\
\begin{aligned}
& A=C+iD &B=C-iD \\
& A+B=2C &A-B=2iD
\end{aligned}
$$

$x(t)=e^{-\gamma t}(2C\cos\omega t-2D\sin\omega t)$

$x(t)=A_0e^{-\gamma t}\sin(\omega t+\phi)$ 

Quando abbiamo uno smorzamento debole si hanno delle oscillazioni di pulsazione

$$
\omega=\sqrt{\omega_0^2-\gamma^2}<\omega_0
$$

Questo è un moto non periodico

![](/Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/24.png)

## CAP. 5) Centro di massa

### 5.2 Centro di massa di un sistema di punti. Teorema del moto del centro di massa

<img src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/25.png" title="" alt="" width="237">

Il centro di massa di un sistema di punti materiali è definito come il punto geometrico la cui posizione è individuata in $O_{xyz}$ dal raggio del vettore

$$
M_{CM}=\frac{\sum_im_ir_i}{\sum_im}
$$

le coordinate del centro di massa sono:

$$
\begin{aligned}
x_{CM}&=\frac{\sum_ix_i}{\sum_im_i} \\
y_{CM}&=\frac{\sum_iy_i}{\sum_im_i} \\
z_{CM}&=\frac{\sum_iz_i}{\sum_im_i}
\end{aligned}
$$

La posizione del centro di massa rispetto a $n$ punti materiali non dipende dal sistema di riferimento a diversa distanza delle coordinate

<img title="" src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/26.png" alt="" width="255" data-align="center">

$$
OO'=r_i-r_i'\\
r_i=r_i'+OO' \qquad \qquad r_i'=r_i+O'O
$$

$$
\begin{aligned}
r_{CM}'&=\frac{\sum_im_ir_i'}{\sum_im_i} \\
&=\frac{\sum_im_i(r_i+O'O)}{\sum_im_i} \\
&=\frac{\sum_im_ir_i}{\sum_im_i}+O'O \\
&=r_{CM}+O'O
\end{aligned}
$$

Se gli $n$ punti sono in movimento la posizione $CM$ varia

$$
\begin{aligned}
V_{CM}&=\frac{dr_{CM}}{dt} \\
&=\frac{\sum_im_i\frac{dr_i}{dt}}{\sum_im_i} \\
&=\frac{\sum_im_iV_i}{\sum_im_i} \\
&=\frac{P}{m_\parallel}
\end{aligned}
$$

$P$ coincide con la quantità di moto $mV_{CM}$ del centro di massa, considerato come un punto materiale con posizione $M_{CM}$, $V_{CM}$ e $m$ sono pari alla massa totale del sistema. Il denominatore è la massa totale del sistema.

$$
\begin{aligned}
a_{CM}&=\frac{dV_{CM}}{dt} \\
&=\frac{\sum_im_i\frac{dV_i}{dt}}{\sum_im_i} \\
&=\frac{\sum_im_ia_i}{\sum_im_i} \\
&=\frac{\sum_im_ia_i}{m_\parallel}
\end{aligned}
$$

Se si tratta di un sistema inerziale

$$
m_ia_i=F_i=F_i^{(E)}+F_i^{(I)}
$$

$$
ma_{CM}=\sum_im_ia_i=\sum_i(F_i^{(E)}+F_i^{(I)})=R^{(E)}+R^{(I)}=R^{(E)}
$$

risulta $R^{(E)}$ perché la risultante delle forze interne è 0, quindi $R^{(E)} = ma_{CM}$.

#### Teorema del moto del centro di massa

Il centro di massa si muove come un punto materiale in cui è concentrata tutta la massa del sistema ed a cui è applicata la risultante delle forze esterne.

Siccome la risultante $R^{(E)}$ è nulla, la quantità di moto dei diversi punti $m_iV_i$ varia nel tempo, ma questo non vale per $\sum_im_iV_i$ che resta costante. Prendiamo in considerazione due punti isolati e abbiamo che

$$
P=p_1+p_2=m_1V_1+m_2V_2=const
$$

Derivando rispetto al tempo otteniamo

$$
\frac{d}{dt}(m_1V_1+m_2V_2)=m_1a_1+m_2a_2=0 \\
\Downarrow \\
F_{2,1}+F_{1,2}=0 \Longrightarrow F_{2,1}=-F_{1,2}
$$

quindi le forze sono uguali in modulo ma di verso opposto. Questo non ha niente a che fare con il principio di azione e reazione perché le forze hanno una diversa retta di azione. Più in generale possiamo dire che abbiamo l'equivalenza tra la conservazione della quantità di moto e il principio di azione e reazione. La conservazione della quantità di moto discende dal fatto che abbiamo una omogeneità dello spazio, quindi non esiste un'origine privilegiata per i sistemi di riferimento.

Il principio di conservazione della quantità di moto permette di trovale $m$

![](/Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/27.png) <img title="" src="file:///Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/28.png" alt="" width="171">

nel primo caso la molla si espande perché i punti vanno in versi opposti ma $P=0$ per via della forza inerziale, mentre nel secondo la molla è compressa.

$$
m_1V_1+m_2V_2=0 \to m_2=m_1\frac{V_1}{V_2}
$$

#### 5.4 Teorema del momento angolare

Il momento angolare di un sistema rispetto al polo $\Omega$ del generico sistema

$$
L=\sum_i\Omega P_i\times m_1V_1
$$

Il polo può non essere fisso, quindi il raggio $\Omega P$ può avere gli estremi in movimento. Per questo $L(t)$ sarà una funzione rispetto al tempo.

$$
\frac{dL}{dt}=\sum_i\frac{d\Omega P_i}{dt}\times m_iV_i+\sum_i\Omega P_i\times m_i\frac{dV_i}{dt}
$$

La prima frazione è $V_i'$, che è la velocità di $P_i$ rispetto al riferimento con origine nel polo $\Omega$ e assi fissi. Per il teorema delle velocità relative $V_i'=V_i-V\Omega$ e $O_{xyz}$ è inerziale

$$
m_i\frac{dV_i}{dt}=m_ia_i=F_i=F_i^{(E)}+F_i^{(I)}
$$

$$
\begin{aligned}
\frac{dL}{dt}&=\sum_i(V_i-V_\Omega)\times V_im_i+\sum_i\Omega P_i\times(F_i^{(E)}+F_i^{(I)}) \\
&=\sum_iV_i\times m_iV_i-\sum_iV_\Omega\times m_iV_+ \sum_i\Omega P_i\times F_i^{(E)} + \sum_i\Omega P_i\times F_i^{(I)} \\
&=-V_\Omega\times mV_{CM}+ M^{(E)}+M^{(I)}
\end{aligned}
$$

$\sum_iV_i\times m_iV_i=0$ perché è un prodotto vettoriale tra vettori paralleli.

$-V_\Omega\times mV_{CM}$ in questo passaggio $V_\Omega$ viene portato a fattor comune nella sommatoria perché è indipendente da $i$

$M^{(E)}=\sum_iP_i\times F_i^{(E)}$ è il momento totale delle forze rispetto al polo $\Omega$

$M^{(I)}=\sum_i\Omega P_i\times F_i^{(I)}$ è il momento delle forze inerziali rispetto al polo

$$
\begin{aligned}
M_{i,j}^{(I)}&=\Omega P_j\times F_{i,j}+\Omega P_i\times F_{j,i} \\
&=(\Omega P_j-\Omega P_i)\times F_{i,j} \\
&=\underbrace{P_iP_j}_{ \parallel\text{ a } F_{i,j}}\times F_{i,j}
\end{aligned}
$$

Se la seconda parte della formula $\frac{dL}{dt}=M^{(E)}-V_\Omega\times mV_{CM}$  si annulla troviamo un caso particolare, mentre se si riduce a $M^{(E)}$ ci sono i seguenti casi:

1. Il polo $\Omega$ è fisso, quindi $V_\Omega=0$

2. Il centro di massa è in quiete $V_{CM}=0$

3. Il polo coincide con il centro di massa

4. I vettori sono paralleli

#### Teorema del momento angolare

Se il polo $\Omega$ è fisso o coincide con il centro di massa, l'evoluzione nel tempo del momento angolare del sistema dei punti è determinata dal momento delle sole forze esterne rispetto a $\Omega$, le forze interne non contribuiscono

### 5.5 Conservazione del momento angolare

Il principio di conservazione del momento angolare dice che se il momento delle forze esterne è nullo, il momento angolare resta costante.

Ci sono due casi per i quali il momento delle forze esterne si annulla:

1. Il sistema è isolato, quindi su di esso non agiscono forze esterne. Il momento si conserva, la risultante delle forze esterne è nullo per la conservazione della quantità di moto e il momento delle forze esterne è nullo.

2. Se il momento delle forze esterne si annulla rispetto ad un polo e le forze esterne sono presenti solo in quel polo, il momento angolare si conserva

La conservazione del momento angolare discende dalla isotropia dello spazio, non esiste una direzione privilegiata.

### 5.7 Teorema di König

Il momento angolare di un sistema **qualsiasi** è la somma del momento angolare dovuto al moto del centro di massa e del momento angolare del sistema di riferimento del centro di massa.

#### Teorema di König per il momento angolare

$$
\begin{aligned}
L&=\sum_ir_i\times m_iV_i \\
&=\sum_i(r_i'+r_{CM})\times m_i(V_i'+V_{CM}) \\
&=\sum_ir_i\times m_iV_i'+\sum_ir_i'\times m_iV_{CM} + \sum_iM_{CM}\times m_iV_i'+\sum_ir_{CM}\times m_iV_{CM}
\end{aligned}
$$

Il momento angolare del sistema si può scomporre, nel sistema di riferimento inerziale, nella somma del momento angolare dovuto al moto del centro di massa ($L_{CM}$) e di quello del sistema rispetto al centro di massa ($L'$)

$$
L=L'+M_{CM}\times mV_{CM}= L'+L_{CM}
$$

se il polo corrisponde al centro di massa, allora $L=L_{CM}$ perché il momento del centro di massa è 0.

#### Teorema di König per il l'energia cinetica

$$
\begin{aligned}
E_K&=\sum_i\frac{1}2m_iV_i^2=\sum_i\frac{1}2m_iV_iV_i \\
&=\sum_i\frac{1}2m_i(V_i'+V_{CM})(V_i'+V_{CM}) \\
&=\sum_i\frac{1}2m_iV_i'^2+\frac{1}2(\sum_im_i)V_{CM}^2+(\sum_im_iV_i')V_{CM} \\
&=E_K'+\frac{1}2mV_{CM}^2 \\
&=E_K'+E_{K,CM}
\end{aligned}
$$

L'energia cinetica del sistema di punti si può decomporre, nel sistema di riferimento inerziale, nella somma dell'energia cinetica dovuta al moto del centro di massa ($E_{K,CM}$) e di quella del sistema rispetto al centro di massa ($E_K'$).

### 5.8 Teorema dell'energia cinetica

Le forze interne si possono tralasciare nell'energia cinetica? No, perché il lavoro per lo spostamento del punto $P_i$ vale

$$
dW_i=F_idr_i=F_i^{(E)}\cdot dr_i+F_i^{(I)}dr_i=dW_i^{(E)}+dW_i^{(I)}
$$

![](/Users/xtc/Desktop/appunti/uni/Primo%20anno/Fisica/29.png)

Sommando su tutti i punti ed integrando lungo le traiettorie $T_i$ percorse si ottiene $W=W^{(E)}+W^{(I)}$, nel quale $W^{(I)}$non scompare per via di

$$
\begin{aligned}
F_{i,j}dr_{j}+F_{j,i}dr_i&=F_{i,j}(dr_j-dr_i) \\
&=F_{i,j} d(r_j-r_i) \\
&=F_{i,j}dr_{i,j}
\end{aligned}
$$

scritto per una generica coppia di punti del sistema.

Il fatto che i termini non siano nulli e non abbiano somma nulla e costituiscono $dW^{(I)}$ mostra che il lavoro delle forze interne è legato ad un cambiamento delle distanze mutue tra i vari punti. Se queste non variano il lavoro interno vale 0.

$dW_i=F_idr_i$ vale $m_iV_idV_i$, sommando su tutti i punti e integrando si ha

$$
W=\sum_i\frac{1}2m_iV_{iB}^2-\sum_i\frac{1}2m_iV_{iA}=E_{K,B}-E_{K,A}
$$

Le due velocità sono i moduli di velocità dell'i-esimo punto nella configurazione $A$ e in quella finale $V$. Stessa cosa per le $E$.

Per questo

$$
W^{(E)}+W^{(I)}=E_{K,B}-E_{K,A}=\Delta E_K
$$

quindi le forze interne contribuiscono a $E_K$.

Se le forze interne sono conservative $W^{(I)}=-\Delta E_P^{(I)}$ e se anche le forze esterne sono conservative $W^{(E)}=-\Delta E_P^{(E)}$. Con queste due condizioni verificate, la conservazione dell'energia meccanica del sistema cambia

$$
W=\Delta E_K=-\Delta E_P=E_{P,A}-E_{P,B} \\ \Downarrow \\
(E_K+E_P)_A=(E_K+E_P)_B = const
$$

L'energia potenziale è la somma delle energie potenziali associate alle forze interne ed esterne agenti sul sistema.

Se le forze non sono conservative si ha che $(E_K+E_P)_B-(E_K+E_P)_A=W_{NC}$ è il lavoro delle forze non conservative. Se non sono presenti forze esterne non è detto che l'energia meccanica si conservi, dipende dalle forze interne. Se invece c'è presenza di forze esterne, l'energia meccanica sale o scende in base alla natura di esse. Ad esempio se sono forze d'attrito l'energia meccanica scende. Se si considera ciò che partecipa allo svolgimento di un fenomeno meccanico macroscopico, l'energia meccanica non si considera nel processo di scambio energetico perché l'energia complessiva si conserva. Nei fenomeni microscopici la situazione è più semplice perché le interazioni fondamentali sono conosciute e conservative senza eccezioni. Questa è una legge fondamentale, che dipende dal fatto che non esiste un'origine privilegiata per la misura del tempo.

### 5.11 Urto completamente anelastico

Un urto tra due punti è detto anelastico se rimangono attaccati successivamente all'urto, formando un unico punto, la cui massa

$$
m=m_1+m_2
$$

e le quali velocità si uniscono in un solo vettore

$$
m_1V_1+m_2V_2=(m_1+m_2)V=(m_1+m_2)V_{CM}\\
V=V_{CM}=\frac{m_1V_1+m_2V_2}{m_1+m_2}
$$

questo significa che successivamente all'urto i punti si muoveranno con una velocità espressa riferendosi al centro di massa del sistema a due punti che esisteva anche precedentemente all'urto.

Le variazioni di moto dei due punti valgono

$$
m_1V_{CM}-m_1V_1 \quad \text{e} \quad m_2V_{CM}-m_2V_2
$$

che risultano essere uguali ed opposte.

L'energia cinetica precedente e successiva all'urto si può calcolare con il teorema di König

$$
\begin{aligned}
E_{K,in}&=\frac{1}2m_1V_1^2+\frac{1}2m_2V_2^2=E_K'+\frac{1}2(m_1+m_2)V_{CM}^2 \\
E_{K,fn}&=\frac{1}2(m_1+m_2)V_{CM}^2<E_{K,in}
\end{aligned}
$$

successivamente all'urto anelastico non c'è moto rispetto al centro di massa perché l'energia viene dissipata con l'energia cinetica finale ($E_K'$).

$$
\Delta E_K=E_{K,fn}-E_{K,in}=\frac{1}2(m_1+m_2)V_{CM}^2-\frac{1}2m_1V_1^2-\frac{1}2m_2V_2^2
$$

I due punti durante l'urto si deformano in modo permanente e restano compenetrati. Il lavoro per la deformazione non viene recuperato, le forze interne non sono conservative.

### 5.12 Urto elastico

In questo tipo di urto l'energia cinetica del sistema si conserva, quindi le forze interne sono conservative. I due corpi reali che si urtano subiscono una deformazione elastica, riprendendo la configurazione iniziale successivamente all'urto.

$$
P_{in}=P_{fn} \qquad \qquad E_{K,in}=E_{K,fn}
$$

Nell'urto semplificato nel piano unidimensionale presenta due incognite e due equazioni

$$
m_1V_{1,in}+m_2V_{2,in}=m_1V_{1,fn}+m_2V_{2,fn}=(m_1 + m_2)V_{CM}  \\

\frac{1}{2} m_1 V_{1,in}^2+\frac{1}{2} m_2 V_{2,i,}^2 = \frac{1}{2} m_1 V_{1,fn}^2 + \frac{1}{2} m_2 V_{2,fn}^2 \\ 

m_1 V_{1,in}^2 = -m_2 V_{2,in}^2 \qquad m_1 V_{1,in}^2 = -m_2 V_{2,in}^2  \\

\frac{1}{2} m_1 V_{1,in}^2 + \frac{1}{2} m_2 V_{2,in}^2 = \frac{1}{2} m_1 V_{1,fn}^2 + \frac{1}{2} m_2 V_{2,fn}'^2  
$$

La soluzione è

$$
V'_{1,fn}=-V'_{1,in} \qquad \qquad V'_{2,fn}=-V'_{2,in}
$$
