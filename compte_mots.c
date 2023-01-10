#include <stdlib.h>
#include <assert.h>
#include <string.h>

#include "devel.h"
#include "liste.h"
#include "fonctions_2entiers.h"
#include "fonctions_string.h"

void compte(void *data, void *optarg) {
  /* a completer. Exercice 6, question 2 */
  char *idata = (char*) data;
  PElement pe = (PElement)optarg;
  while (pe) {
    Double_int *tmp = (Double_int*)pe->data;
    if ((int)strlen(idata)==tmp->a) {
      tmp->b++;
      return;
    }
    else compte(data,(void *)pe->suivant);
  }
  Double_int *tmp = (Double_int*)pe->data;
  tmp->a = (int)strlen(idata);
  tmp->b = 1;
  PElement new = malloc(sizeof(Element));
  new->data = (void *)tmp;
  new->suivant = NULL;
  pe->suivant = new;
}

int main(void) {

  /* a completer. Exercice 6, question 2 */
  PListe pl = malloc(sizeof(Liste));
  pl->elements = NULL;
  pl->afficher = afficher_str;
  pl->comparer = comparer_str;
  pl->copier = copier_str;
  pl->detruire = detruire_str;
  pl->dupliquer = dupliquer_str;
  pl->ecrire = ecrire_str;
  pl->lire = lire_str;

  //lire_liste(pl,"french_za");
  afficher_liste(pl);
  detruire_liste(pl);
  
  return 0;
}
