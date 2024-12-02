
############################################# INTRODUZIONE AD R ###################################################

#set the directory
#call the directory
library(pracma)
install.packages("pracma")
getwd()
funzione <- function(x, y){x*y*(2/3)*(x+2*y)}
funzione2 <- function(x){x*(2-x)}
ff <- integrate(funzione, lower = 0, upper = 1)
gg <- integrate(funzione2, lower = 1, upper = 2)
g <- ff[[1]]+gg[[1]]
g3<-integral2(funzione, 0, 1, 0, 1)

# oppure fisso la directory
# TOOLS --> GLOBAL OPTIONS --> GENERAL --> BROWSE --> APPLY
# oppure setto la directory
# SESSION --> SET WORKING DIRECTORY --> CHOOSE DIRECTORY

# termina la sessione
#q()

#the hash key (#) to insert comments


#help
help(log)
?log
# log: base naturale, log10: base 10
# richiamo la funzione
log
# eseguo la funzione
log(10)
log10(10)

# install packages (hand written)

# load package
library("ggplot2")
# oppure dalla tab dei pacchetti
# oppure TOOLS --> INSTALL PACKAGES


# Operazioni --------------------------------------------------------------

4 + 5

3 + 5 * 2

(3 + 5) * 2

0/0
# infiniti risultati, quindi "not a number" (NaN)

0/Inf

Inf/0

# Operatori logici --------------------------------------------------------

3 + 5 * 2 == (3 + 5) * 2

3 + 5 * 2 <= (3 + 5) * 2
# il true è associato all' 1, il false allo 0.
TRUE == 1
TRUE == 0

FALSE == 0
FALSE == 1

# Assegnazioni ed espressioni ------------------------------------------------------------

x <- 6; y <- 7 # assegnazione di valori alle variabili x e y
x + y # espressione

z <- x + y # assegnazione
z
# se vogliamo assegnare e stampare assieme:
rm(z)
(z <- x + y)

# andiamo avanti con gli operatori logici
(z > 10) | (z > 20)
# | "OR"
# TRUE perchè con OR è sufficiente una delle 2 condizioni

(z > 10) & (z < 12)
# & "AND"
# FALSE perchè con AND devono essere soddisfatte entrambe le condizioni

# lista oggetti
objects()
rm(x)
# rimuove x
rm()
# rimuove tutti gli oggetti salvati


# Vettori -----------------------------------------------------------------

vettore <- c(5, 6, 7, 8, 9, 10)

vettore
str(vettore)

vettore[1] # estraggo il primo elemento del vettore

vettore[-5] # estraggo tutti gli elementi tranne il quinto

vettore[2:4] # estraggo dal secondo al quarto elemento del vettore

vettore[c(1, 4)] # estraggo il primo e il quarto elemento del vettore

vettore > 8

vettore[vettore > 8]

vettore[(vettore > 8) | (vettore < 6)]

vettore * 2

vettore + 10

sqrt(vettore)

vettore_1 <- c(1, 2, 3, 4, 5, 6)

vettore + vettore_1

# se i due vettori non sono della stessa lunghezza
vettore_2 <- c(2, 3)

length(vettore)
length(vettore_2)

vettore + vettore_2
# somma al vettore il vettore_2 ripetuto fino ad arrivare a 6
# illogico


# Funzioni per vettori ----------------------------------------------------

v <- c(23, 7, 3, 15, 30)

min(v)

max(v)

range(v)
# restituisce minimo e massimo

length(v)

sum(v)

cumsum(v)

mean(v)

sum(v) / length(v)

(v_ordinato <- sort(v))

median(v)
# mediana funziona anche su vettori non ordinati

v_ordinato[3]

quantile(v, probs = c(0.1, 0.5, 0.9))
# i 3 quantili

summary(v)
# i 3 quantili, la media, minimo e massimo.

# varianza campionaria
var(v)
sum( (v - mean(v)) ^ 2 ) / (length(v) - 1)


# Sequenze ----------------------------------------------------------------

1:20

20:1

seq(from=5, to=15)

5:15

seq(5, 15, by=3)

seq(5, 15, length=3)

seq(5, length=3)

x <- 1:4
x
s1 <- rep(x, times=5)
s1

s2 <- rep(x, each=5)
s2


# Matrici -----------------------------------------------------------------

matrix(1:6, nrow = 2)

matrix(1:6, nrow = 2, byrow = TRUE)

matrix(1:6, ncol = 2)

(mat = matrix(1:6, ncol = 2))
str(mat)


dati <- c(59, 68, 47,  196, 101, 94,  -0.21, 0.47, -0.30)
matrice_pop <- matrix(dati, nrow=3, byrow=FALSE)
matrice_pop

dimnames(matrice_pop)
# NULL

nazioni <- c("Italia", "Francia", "Spagna")
variabili <- c("Popolazione","Densita","Tasso_di_crescita")
dimnames(matrice_pop) <- list(nazioni, variabili)
dimnames(matrice_pop)
# il primo argomento fa riferimento alle righe, il secondo ai nomi di colonna

str(matrice_pop)
is.matrix(matrice_pop)
# abbiamo generato una matrice con attributi


# elemento sulla prima riga e seconda colonna
matrice_pop[1, 2]

# tutti gli elementi sulla seconda riga (dati della Francia)
matrice_pop[2, 1:3]

# oppure, equivalentemente
matrice_pop[2, ]

# tasso di crescita in Francia
matrice_pop["Francia", "Tasso_di_crescita"]
# che equivale a:
matrice_pop[2, 3]

# densita per tutte le nazioni
matrice_pop[ , "Densita"]

matrice_pop["Francia", "Tasso_di_crescita"] <- -0.1
matrice_pop
# ho modificato il tasso di crescita della Francia a -0.1


##### operazioni tra matrici ####

# somme

A <- matrix(0:5, 2, 3)
A

B <- matrix(seq(0, 10, 2), 2, 3)
B

A + B

# aggiunta di scalare c a matrice A (a tutti i suoi elementi)
c <- 5
A + c

# moltiplicazioni

# check rows ad columns dimensions
ncol(A) == nrow(B)

C <- t(B)
ncol(A) == nrow(C)

print(A); print(C)

A %*% C
# moltiplicazione tra matrici

A * B
# moltiplicazione elemento per elemento di matrici di pari dimensioni

A / B
# divisione elemento per elemento

matrice_pop
## Popolazione Densita Tasso_di_crescita
## Italia 59 196 -0.21
## Francia 68 101 -0.10
## Spagna 47 94 -0.30

# calcolo della superficie in km quadrati
# è una divisione tra due vettori (colonne della matrice)
matrice_pop[ , 'Popolazione'] * 1000000 / matrice_pop[ , 'Densita'] 
# NB attenzione agli arrotondamenti
# usare funzione round
Superficie <- round(matrice_pop[ , 'Popolazione'] * 1000000 / matrice_pop[ , 'Densita'], 0)

# aggiungere colonna alla matrice - cbind
matrice_pop <- cbind(matrice_pop, Superficie)
matrice_pop

# aggiungere righe alla matrice - rbind
Germania <- c(83, 233, -0.197, 357582)
Regno_Unito <- c(67, 278, 0.765, 242521)
matrice_pop <- rbind(matrice_pop, Germania, Regno_Unito)
matrice_pop

# Data Frame --------------------------------------------------------------

# aggiungo una colonna di dati categorici
Capitale <- c('Roma', 'Parigi', 'Madrid', 'Berlino', 'Londra')
matrice_pop_1 <- cbind(matrice_pop, Capitale)
matrice_pop_1

sum(matrice_pop_1[ , 'Popolazione'])
## Error in sum(matrice_pop_1[, "Popolazione"]) :
## invalid 'type' (character) of argument

# l'aggiunta ha reso tutte le colonne categoriche (tra virgolette)

# bisogna creare un oggetto data.frame
df_paesi <- data.frame(matrice_pop, Capitale, row.names = dimnames(matrice_pop)[[1]])
df_paesi
str(df_paesi)
# osservazioni
# variabili

# ora è possibile calcolare somma di valori numerici
sum(df_paesi[ , 'Popolazione'])

# per richiamare una "variabile" del data.frame
df_paesi$Popolazione
# accesso diretto alle variabili del data.frame
attach(df_paesi)
Popolazione
detach(df_paesi)
df_paesi$Popolazione


# Liste -------------------------------------------------------------------

paesi_euro <- c('Austria', 'Belgio', 'Cipro', 'Estonia', 'Finlandia', 
                'Francia', 'Germania', 'Grecia', "Irlanda", "Italia",
                "Lettonia", "Lituania", "Lussemburgo", "Malta", "Paesi Bassi",
                "Portogallo", "Slovacchia", "Slovenia", "Spagna")
str(paesi_euro)

lista_paesi <- list(df_paesi, paesi_euro)
lista_paesi

lista_paesi$paesi_euro
# no. paesi_euro non è una variabile di un dataframe
# ma un oggetto della lista

#accenni su operazioni if/else cicli for

# if/else
x = 2
if (x<0) {y=2*x; z = 1} else {y=-3*x + 1; z = 0}
y; z

# loops
f = numeric(10)
# creo un vettore numerico di zeri
for(i in 1:10) {
  f[i] <- i^2
}
f

# ad ogni passo, il ciclo sostituisce l'i-esimo elemento di f con un dato valore  

# con la funzione sapply

f <- sapply(1:10, function(x) x^2)
f
# applica la funzione x^2 al vettore 1:10


# another example
f = numeric(10)
f[1] = 1; f[2] = 2
for (i in 3:10){f[i] = f[i-1] + 2*f[i-2]}
f

#print: stampa in console l'oggetto in input ad ogni passo del ciclo.
#paste: unisce (concatena) stringhe

for (year in c(2010,2011,2012,2013,2014,2015)) {
  print(paste("The year is", year))
}

# simplified code
for (i in 2010:2015){
  print(paste("The year is", i))
}


# Plot --------------------------------------------------------------------

# funzione sin
x <- seq(-pi,pi,0.1)
plot(x)
plot(x, sin(x))
plot(x, sin(x), main = "Sine", ylab="sin(x)", xlab="")
plot(x, sin(x), main = "Sine", ylab="sin(x)", xlab="", type="l", col="dodgerblue", lwd=2)

# Plot and lines for sin and cos
plot(x, sin(x), main = "Sine and cosine", ylab="sin(x)", xlab="", type="l", col="dodgerblue", lwd=2)
lines(x,cos(x), col="maroon2")
legend("topleft", c("sin(x)","cos(x)"), fill=c("dodgerblue","maroon2"))


################ Scatterplot
set.seed(123) 
# fisso il seme, ogni volta che eseguo un generatore casuale, lo fa allo stesso modo
x1 <- rnorm(500)
# genera 500 elementi da una distribuzione normale
y1 <- x1 + rnorm(500)

print(x1)
print(y1)

plot(x1, y1)
abline(a=0, b=1, col="red")
# y = a + b*x
# a = 0
# b = 1

############


# Bar plot (diagramma a barre)

mydata <- rep(LETTERS[1:5], c(7,4,2,9,11))
# replico tali lettere rispettimanente 7, 4, 2 etc.. volte
str(mydata)

mytable <- table(mydata)
mytable
barplot(mytable, col=rainbow(length(unique(mydata))))


# Histograms (dati numerici)

hist(x1, col="seagreen2")
# frequenza assoluta
hist(x1, col="turquoise3", freq=FALSE)
# densità (un concetto che vederemo più avanti)

hist(x1, col="seagreen2", breaks = 4)
# troppi pochi intervalli
hist(x1, col="seagreen2", breaks = 200)
# troppi intervalli


# Boxplots

set.seed(1)
A <- rnorm(100,4,2)
B <- rnorm(100,6,1)
C <- rnorm(100,5.2,1.2)

df <- data.frame(A,B,C)

head(df)

boxplot(df$A)
# singola variabile

boxplot(df)
# boxplot multiplo

# add more informations
boxplot(df, main="Waiting Time | Comparative Boxplots",
        xlab="Call Centres",
        ylab="Waiting Time in minutes",
        outpch=18, outcex=1.7, outcol="red",
        col="lightblue")
# outpch: modifica la forma geometrica degli outlier
# outcex: dimensione dell'outlier
# outcol: colore degli outlier


boxplot(df, main="Waiting Time | Comparative Boxplots",
        xlab="Waiting Time in minutes",
        ylab="Call Centers",
        outpch=18, outcex=1.5, outcol="blue",
        col="bisque",
        horizontal = TRUE)


# Ggplot ------------------------------------------------------------------

# install.packages("ggplot2")
library(ggplot2)

period <- seq(as.Date("2021/1/1"), by = "month", length.out = 12)
sales <- sample(500:1000,12,replace = TRUE)

df <- data.frame(period,sales)

ggplot(df, aes(x=period, y=sales))+
  geom_line(size=1)

ggplot(df, aes(x=period, y=sales))+
  geom_line(size=1, colour="black", lty="dashed")+
  labs(title="Sales by Month (CAD)",
       subtitle = "Jan to Dec, 2021",
       caption = "Created with RStudio")+
  theme_bw()

# Boxplot

Male <- rnorm(100,70,4)
Female <- rnorm(100,65,3.5)
NBA_Player <- rnorm(100,80.4,5) 

df <- data.frame(Male,Female,NBA_Player)
library(reshape2)
# reshape: male, female, nba_player divetano i caratteri di una variabile.
df <- melt(df)
df


ggplot(df, aes(x=value, y=variable))+
  geom_boxplot()

ggplot(df, aes(x=value, y=variable, fill=variable))+
  geom_boxplot()+
  theme_classic()+
  coord_flip()+
  scale_fill_brewer(palette = "Pastel1")+
  labs(title = "Comparative Boxplots | Height (in)",
       subtitle = "by Group",
       caption = "Proudly built with RStudio",
       x="Height in inches\n",
       y="\nGroup")+
  scale_x_continuous(breaks=seq(60,95,5))


##### MATERIALE AGGIUNTIVO

# Density 
ggplot(df, aes(x=value, color=variable))+
  geom_density()+
  theme_bw()

ggplot(df, aes(x=value, fill=variable))+
  geom_density(alpha=0.7)+
  theme_classic()+
  scale_fill_brewer(palette = "Set3")+
  labs(title = "Building Simple Comparative Density Curves",
       subtitle = "by Group",
       caption = "Proudly built with RStudio",
       x="\nHeight in inches",
       y="Density\n")+
  scale_x_continuous(breaks=seq(60,95,5))

# Bar plot (diagramma)

set.seed(4)
position <- c(rep("WB",3),
              rep("GB",3),
              rep("BB",3),
              rep("MBB",3))
Industry <- rep(c("Food", "Aerospace", "Recycling"),4)
years <- round(rnorm(12,10,2))

ci <- data.frame(position,Industry,years)

ggplot(ci, aes(colour=Industry, y=years, x=position))+ 
  geom_bar(position="stack",
           stat="identity")

ggplot(ci, aes(position, years, fill=Industry))+ 
  geom_bar(position="stack", stat="identity")+
  labs(title = "Six Sigma Positions Summary",
       subtitle = "By years of experience and industry",
       caption = "Created with RStudio",
       x = "\nPosition",
       y = "Years of Experience\n")+
  theme_bw()


# Histograms

set.seed(2)

rainfall <- data.frame(Month=factor(rep(c("April","May","June"),
                                        each=100)),
                       Rain=c(rnorm(100, mean=20, sd=5),
                              rnorm(100, mean=15, sd=3),
                              rnorm(100,mean=25,sd=7)))

ggplot(rainfall, aes(x=Rain))+
  geom_histogram(binwidth = 2)

library(ggthemes)
ggplot(rainfall, aes(x=Rain, fill=Month))+
  geom_histogram(binwidth = 2, alpha=0.8)+
  theme_economist()+
  scale_fill_brewer(palette = "Accent")+
  labs(title = "Past Spring Rainfall",
       subtitle = "\nby Month",
       caption = "Proudly built with RStudio",
       x="\nRainfall in mm",
       y="Count\n")

ggplot(rainfall, aes(x=Rain, fill=Month))+
  geom_histogram(binwidth = 2, alpha=0.8)+
  theme_economist_white()+
  scale_fill_brewer(palette = "Accent")+
  labs(title = "Past Spring Rainfall",
       subtitle = "\nby Month",
       caption = "Proudly built with RStudio",
       x="\nRainfall in mm",
       y="Count\n")+
  facet_grid(~Month)+
  theme(legend.position = "none")

# References and Acknowledgement -----------------------------------------

# Materiale utilizzato:
# . "Introduzione a R" - Claudio Agostinelli (https://cran.r-project.org/doc/contrib/manuale.0.3.pdf)
# . "An Introduction to R" - W. N. Venables, D. M. Smith and the R Core Team (https://cran.rproject.org/doc/manuals/r-release/R-intro.pdf)
# . "R Essentials" (https://bookdown.org/content/4e34e34f-ca48-4090-90ca-8ae7b1b65e0e/plotting-with-r-base-code.html)
# Thanks to Anna Giabelli for part of the material                                                                           


