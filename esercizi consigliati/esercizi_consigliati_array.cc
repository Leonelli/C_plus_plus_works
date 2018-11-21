/*
1) scrivere una funzione che prenda come parametri 2 array di double
della stessa dimensione e ne calcoli il prodotto scalare.

2) scrivere una procedura che calcoli la norma di un vettore di double
(la radice quadrata del prodotto scalare con se' stesso).

3) scrivere una procedura che normalizzi un vettore, cio'che sostituisca un
vettore con quallo risultante dalla divisione di tutti i suoi elementi per
la nua norma.

4) scrivere una funzione che dica se due vettori della stessa dimensione
sono ortogonali (due vettori sono ortogonali se il loro prodotto scalare
e' nullo).

5) scrivere una procedura che prende in ingresso un vettore v e la sua dimensione d,
un nuovo elemento x e un indice i, e aggiunga l'elemento x in posizione i nel vettore,
e incrementi d di uno.
Il vettore passato deve avere almeno d+1 elementi.
Esempio:
v = [4 1 3 6 8]
d = 5
x = 7
i = 2
===>
v = [4 1 7 3 6 8]
d = 6

6) scrivere una procedura che prende in ingresso un vettore ORDINATO v, la sua dimensione d,
e un nuovo elemento x, e inserisca x nel vettore in modo ordinato.
Il vettore passato deve avere almeno d+1 elementi.
Esempio:
v = [1 3 4 6 8]
d = 5
x = 7
===>
v = [1 3 4 6 7 8]
d = 6

7) scrivere una procedura che prenda un vettore v e la sua dimensione d,
un  elemento x, ed elimina tutte le occorrenze di x (dimnuemdo la dimensione d del vettore)
Esempio:
v = [4 1 3 6 8 4 2]
d = 7
x = 4
===>
v = [1 3 6 8 2]
d = 5

8) scrivere una procedura che prende in ingresso due vettori ORDINATI v1 e v2 di dimensione
d1 e d2 e restituisce un vettore ORDINATO v di dimensione d1+d2 che contiene tutti gli elementi
che stanno in v1 e v2.
Esempio:
v1=[2 4 6 8], d1 = 4
v2=[1 2 5 7 8], d1 = 5
==>
v3=[1 2 2 4 5 6 7 8 8]


*/
using namespace std;
#include <iostream>
#include <cmath>

int scalare(int[],int[]);

int dim=4;

int main(){
  //cout << "Dimmi la dimensione: ";
  //cin >> dim;
  int vettore1 [dim] = {1,2,3,4};
  int vettore2 [dim] = {1,2,3,4};

  cout << scalare(vettore1,vettore2)<<endl;
  return 0;
}


int scalare(int v1[],int v2[]){
  int res = 0;
  for (int i = 0; i < dim; i++) {
    res+=v1[i]*v2[i];
  }
  return res;

}
