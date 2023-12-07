# Cinematica del punto materiale

Il punto materiale è un'astrazione matematica perché non ha dimensioni (non esiste). Il sistema di riferimento è un sistema cartesiano ortogonale e su di esso si descrivono i cambiamenti dell'oggetto che stiamo osservando. Sul sistema di riferimento si utilizzano chilogrammi, metri e secondi come unità di misura.

Se si hanno più sistemi di riferimento, ogni misura effettuata su un evento deve essere autonoma dal sistema di riferimento. 

un sistema di riferimento è l'insieme di 4 numeri: 3 coordinate e 1 tempo. Il tempo è una quarta variabile perché viviamo in un mondo 3+1 dimensionale. Il tempo assume solo valori positivi e si sposta sempre in avanti. Una volta fissato il sistema di riferimento si può misurare cosa accade sui vari assi e creare una corrispondenza rispetto al tempo. **La fisica non è una scienza esatta come la chimica perché non ha bisogno di applicazioni**. La fisica è un insieme di approssimazioni.

Se si ottengono abbastanza dati relativi ad un evento si possono ottenere delle rappresentazioni dell'evento usando i grafici.

Per calcolare la **velocità media** di un punto è il rapporto tra lo spazio percorso su un opportuno intervallo di tempo:

$$
V_m = \frac{\Delta x}{\Delta x} = \frac {x_2(t_2) - x_1(t_1)}{t_2 - t_1}
$$

La **quiete** si ha quando la velocità media è $0$:

$$
V_m = \frac{cost-cost}{t_2-t_1} = 0
$$

Per la velocità istantanea sul piano si usa:

$$
V_i = \lim_{\Delta_t \to 0} \frac{\Delta x}{\Delta t} = \frac{dx}{dt} = \dot{x}(t) = x'(t)
$$

Il rapporto di due differenziali è **Leibnitz**: 

$$
\frac{dx}{dt}
$$

Esempio costruire prima la media poi la istantanea dove $x(t) = (t^2 +5)[m]$:

$$
\begin{split}
V_m &= \frac{\Delta x}{\Delta y}\\
&= \frac{x(t_2) - x(t_1)}{t_2 - t_1}\\
&= \frac{t^2 +5 - (t^2 +5)}{t_2 - t_1}\\
&\text{si semplifica il 5 e si scompone}\\
&= \frac{t_2^2 - t_1^2}{t_2 - t_1}\\
&= \frac{(t_2 - t_1) * (t_2 + t_1)}{t_2 - t_1}\\
&\text{si semplifica il numeratore } t_2 - t_1 \text{ con il denominatore}\\
&=t_2 - t_1\\
\\
V_i &= \lim_{\Delta t \to 0} \frac{\Delta x}{\Delta t}\\ 
&= \frac{dx}{dt}\\
&= 2t_1 + \Delta t\\
&= 2t_1
\end{split}
$$

$$
\begin{split}
\end{split}
$$

Ma si può fare lo stesso percorso partendo dalla velocità? Si, usando l'**accelerazione**

Si parte calcolando l'accelerazione media:

$$
a_m = \frac{\Delta v}{\Delta t} = \frac{v_2 - v_1}{t_2-t_1}
$$

$$
[a] = \frac{[L]}{[T^2]} = \frac{[L/T]}{[T]}a = m/sec^2
$$

Per calcolare l'accelerazione istantanea:

$$
a_i = \lim_{\Delta_t \to 0} \frac{\Delta v}{\Delta t} = \frac{dv}{dt} = \dot{v}(t) = v'(t)
$$

Per calcolare lo spazio si usa la derivata seconda, non si può fare direttamente la seconda perché bisogna conoscere la prima:

$$
\frac{d^2t}{dx^2} = \ddot{x}(t) = x''(t)
$$

Un oggetto che ha velocità costante avrà anche accelerazione nulla, se la $a_i=0$ allora l'oggetto avrà moto rettilineo uniforme.

Per descrivere i movimenti tridimensionali bisogna introdurre i vettori. Un vettore è composto da 3 proprietà:

- Intensità $\to$ sempre positiva

- Verso

- Direzione

Ci sono 2 operazioni con i vettori:

- Somma $\vec{v_1} + \vec{v_2}$ $\to$ geometricamente si usa la regola del parallelogramma

- Moltiplicazione per uno scalare $\to$ lo scalare non ha dimensione. 
  
  - $k>1$ il vettore di partenza verrà dilatato.
  
  - $0<k<1$ il vettore si accorcia. 
  
  - $k<0$ il verso del vettore è opposto

Lo spazio vettoriale è una delle qualità matematiche più importanti dove si può utilizzare la linearizzazzione.

I versori sono vettori di lunghezza unitaria. Per ricavare un versore da un vettore:

$$
\vec{v}_u= \frac{\vec{v}}{|\vec{v}|}
$$

Nelle tre dita si ha che $\vec{i} = x = (1,0,0)$, $\vec{j} = y = (0,1,0)$, $\vec{u} = z = (0,0,1)$

Un vettore mediano xy è la composizione di due vettori ortogonali con modulo uguale.

Accelerazione

$$
\begin{cases}
\frac{d^2\vec{r}}{dt^2} = \ddot{\vec{r}}(t)= \ddot{x}(t)\vec{i}=\frac{d^x}{dt^2}\\
\frac{d^2\vec{r}}{dt^2} = \ddot{\vec{r}}(t)= \ddot{x}(t)\vec{j}=\frac{d^x}{dt^2}\\
\frac{d^2\vec{r}}{dt^2} = \ddot{\vec{r}}(t)= \ddot{x}(t)\vec{k}=\frac{d^x}{dt^2}
\end{cases}
$$

Esempio:

$$
\vec{r}(t)=t^3\vec{i}+exp(t)\vec{j}

$$

$\vec{i}$, $\vec{j}$, $\vec{u}$ non si usano per calcolare il modulo perché sono versori

La derivata di $e^t$ = $e^t$

1) $|\vec{r}| = \sqrt{t^6+e^{2t}}$ 

2) $\dot{\vec{r}}(t) = 3t^2\vec{i}+e^t\vec{j}$ 

3) $|\dot{\vec{r}}| = \sqrt{9t^4 + e^{2t}}$ 

4) $\ddot{\vec{r}}(t) = 6t\vec{i} + e^t$ 

5) $|\ddot{\vec{r}}| = \sqrt{36t^2 + e^{2t}}$ 

Esempio 2:

$$
\vec{r}(t)=t^7\vec{i}+ln(t)\vec{j}+t^{-4}\vec{k}
$$

in questo esercizio non si può considerare lo zero perché $ln(t)\vec{j}$ e $t^{-4}$ non sono definiti in 0

1. $|\vec{r}| = \sqrt{t^{14} + }$

2. $\dot{\vec{r}}(t)= 7t^6\vec{i}+\frac{1}{t}\vec{i}-4t^{-5}\vec{k}$

Esempio 3:

$$
\vec{r}(t) = at^2\vec{i} + bt^{-3}\vec{j}
$$

$|\vec{r}| = \sqrt{a^2t^4+b^2t^{-6}}$

$\dot{\vec{r}}(t) = 2at\vec{i} -3bt^{-4} \to$ vettore velocità

$|\dot{\vec{r}}| = \sqrt{4a^2t^2 + 9b^2t^{-8}}$

$\ddot{\vec{r}}(t) = 2a\vec{i} + 12bt^{-5} \to$ vettore accelerazione

$|\ddot{\vec{r}}| = \sqrt{4a^2 + 144b^2t^{-10}}$

Nota la velocità istantanea per ricavare lo spazio percorso in un certo intervallo di tempo bisogna usare l'integrale definito:

$$
\int_{t_0}^{t^1}v(t)dt = \int_{x_0}^{x^1}dx = \int_{x_0}^{x^1}1dx=\Delta x
$$

$$
\Delta x = x(t_1) - x(t_0) = x_1 - x_0
$$

$$
x(t_1) = x(t_0) + \int_{t_0}^{t^1}v(t)dt
$$

$$
V_m = \frac{\Delta x}{\Delta y}
= \frac{x(t_2) - x(t_1)}{t_2 - t_1}

=v_m \Delta t = \Delta x
$$

$$
\Delta x = v_m \Delta t = \frac{1}{t_1-t_0}\int_{t_0}^{t^1}v(t)dt
$$

Se $t_1$ è generico e diventa $t$:

$$
x(t) = x_0 + \int_{t_0}^tv(t')dt'
$$

Si cambia $t$ con $t'$ perché l'estremo di integrazione non può avere lo stesso simbolo della variabile. Anche se si fa sta roba il risultato non cambia.

$$
x(t) = x_0 + \int_{t_0}^tvdt' = x_0 + v \int_{t_0}^t1dt'
$$

Esempio $v(t) = t^2$:

$$
\begin{split}
\Delta x &= \int_{t_0}^tv(t')dt'\\
x(t) - x(t_0) &= \int_{t_0}^tat'^2dt'\\
x(t) &= x(t_0) + \int_{t_0}^tat'^2dt'\\
x(t) &= x(t_0) + a\int_{t_0}^tt'^2dt'\\
x(t) &= x(t_0) + a\left[\frac{t'^3}{3} \right]^t_{t_0}\\
x(t) &= x(t_0) + a\left(\frac{t^3}{3} - \frac{t_0^3}{3} \right)^t_{t_0}\\
\end{split}
$$

Ricavare la velocità nota l'accelerazione media

$$
a_m = \frac{\Delta v}{\Delta t} \to a_i = \frac{dv}{dt}
$$

$$
\Delta V = \int_{V_0}^{V^1}(t')dt'
$$

$$
a=g-bv \to \frac{dv}{dt} = g-bv = g(\frac{g}{b} - v)
$$

## Moto di un cazzo di proiettile

$$
\begin{cases}
V_x(t)=V_0 \cos\theta\\
V_y(t)=V_0 \sin\theta - gt
\end{cases}
$$

$$
\vec{v}(t) = \vec{v}_0-gt\vec{j}
$$

# Madagascar

# I pinguini di madagascar
