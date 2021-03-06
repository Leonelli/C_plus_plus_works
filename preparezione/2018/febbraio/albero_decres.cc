using namespace std;
#include <iostream>
#include  "albero.h"

void inizializza(Albero &t){
  t=NULL;
}
boolean vuoto(const Albero &t){
  return (t==NULL) ? VERO : FALSO;
}

boolean inserisci(Albero &t, int val){
  boolean res = FALSO;
  if (vuoto(t)==VERO) {
    t = new (nothrow) Nodo;
    if (t!=NULL) {
      t->val=val;
      t->sx = t->dx = NULL;
      res = VERO;
      }
  }
  else if(val < t->val){
    res = inserisci(t->dx,val);
    }
    else{
      res = inserisci(t->sx,val);
    }
  return res;
  }
boolean cerca(const Albero &t, int val){

}
void stampa(const Albero &t){
  if (vuoto(t)==FALSO) {
    stampa(t->sx);
    cout << t->val << " ";
    stampa(t->dx);
  }


}
