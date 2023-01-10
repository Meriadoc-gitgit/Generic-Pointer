
#include <stdlib.h>
#include "liste.h"
#include "devel.h"
#include "fonctions_entiers.h"

int main(void) {

  /* a completer. Exercice 4, question 1 */

  PListe pl = malloc(sizeof(Liste));
  pl->elements = NULL;
  pl->afficher = afficher_int;
  pl->comparer = comparer_int;
  pl->copier = copier_int;
  pl->detruire = detruire_int;
  pl->dupliquer = dupliquer_int;
  pl->ecrire = ecrire_int;
  pl->lire = lire_int;

  int *i1 = (int *)malloc(sizeof(int));
  int *i2 = (int *)malloc(sizeof(int));
  int *i3 = (int *)malloc(sizeof(int));
  *i1 = 1; *i2 = 2; *i3 = 3;

  inserer_debut(pl,(void*)i1);
  inserer_debut(pl,(void*)i2);
  inserer_debut(pl,(void*)i3);
  afficher_liste(pl);
  detruire_liste(pl);
  return 0;
}
