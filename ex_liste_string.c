
#include <stdlib.h>
#include "liste.h"
#include "devel.h"
#include "fonctions_string.h"

int main(void) {

  /* a completer. Exercice 5, question 2 */
  PListe pl = malloc(sizeof(Liste));
  pl->elements = NULL;
  pl->afficher = afficher_str;
  pl->comparer = comparer_str;
  pl->copier = copier_str;
  pl->detruire = detruire_str;
  pl->dupliquer = dupliquer_str;
  pl->ecrire = ecrire_str;
  pl->lire = lire_str;

  char *c1 = (char *)malloc(sizeof(char));
  char *c2 = (char *)malloc(sizeof(char));
  char *c3 = (char *)malloc(sizeof(char));
  *c1 = 'a'; *c2 = 'b'; *c3 = 'c';

  inserer_debut(pl,(void*)c1);
  inserer_debut(pl,(void*)c2);
  inserer_debut(pl,(void*)c3);
  afficher_liste(pl);
  detruire_liste(pl);
  return 0;
}
