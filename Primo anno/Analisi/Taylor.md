# Formule di Taylor

Una funzione $f(x)$ è o-piccolo di una funzione $g(x)$ per $x\to c$ e scriveremo:

$$
f(x) = o(g(x))
$$

se vale:

$$
\lim_{x\to c}\frac{f(x)}{g(x)} = 0
$$

Se scriviamo che $f(x) = o(x-2)^2$ per $x\to 2$, allora $f(x)$ è un infinitesimo di ordine superiore rispetto a $(x-2)^2$. 

Se consideriamo una funzione $f$ derivabile in $x_0$, allora:

$$
\lim_{x\to 0} \frac{f(x)- f(x_0)}{x-x_0} = f'(x)
$$

Formula di Taylor:

$$
f(x) = T_nf(x) + o((x-x_0)^n), x\to x_o
$$

$$
T_nf(x) = \sum_{k=0}^n\frac{1}{k!}f^{k}(x_0)(x-x_0)^k
$$
