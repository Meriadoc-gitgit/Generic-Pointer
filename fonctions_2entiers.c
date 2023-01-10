#include <stdlib.h>
#include <stdio.h>
#include "devel.h"

#include "fonctions_2entiers.h"

void *dupliquer_2int(const void *src) {
  /* a completer. Exercice 6, question 1 */
  Double_int *isrc = (Double_int *)src;
  Double_int *idst = malloc(sizeof(Double_int));
  if (idst==NULL) {
    affiche_message("Erreur d'allocation");
    return NULL;
  }
  idst->a = isrc->a;
  idst->b = isrc->b;
  return (void *)idst; // pour que cela compile
}

void copier_2int(const void *src, void *dst) {
  /* a completer. Exercice 6, question 1 */
  Double_int *isrc = (Double_int *)src;
  Double_int *idst = (Double_int *)dst;
  free(idst);
  idst->a = isrc->a;
  idst->b = isrc->b;
}

void detruire_2int(void *data) {
  /* a completer. Exercice 6, question 1 */
  free(data);
}

void afficher_2int(const void *data) {
  /* a completer. Exercice 6, question 1 */
  Double_int *idata = (Double_int *)data;
  printf("a=%d b=%d",idata->a,idata->b);
}

int comparer_2int(const void *a, const void *b) {
  /* a completer. Exercice 6, question 1 */
  Double_int *ia = (Double_int *)a;
  Double_int *ib = (Double_int *)b;
  if (ia->a==ib->a && ia->b==ib->b) return 1;
  return 0; // pour que cela compile
}

int ecrire_2int(const void *data, FILE *f) {
  /* a completer. Exercice 6, question 1 */
  const Double_int *idata = (const Double_int *)data;
  return fprintf(f,"a=%d b=%d",idata->a,idata->b); // pour que cela compile
}

void * lire_2int(FILE *f) {
  /* a completer. Exercice 6, question 1 */
  int ia, ib;
  int r = fscanf(f,"a=%d b=%d",&ia,&ib);
  if (r<1) return NULL;
  Double_int *p = (Double_int *)malloc(sizeof(Double_int));
  p->a = ia;
  p->b = ib;
  return p; // pour que cela compile
}
