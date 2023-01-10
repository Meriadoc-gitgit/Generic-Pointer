#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "devel.h"

void *dupliquer_str(const void *src) {
  /* a completer. Exercice 5, question 1 */
  char *isrc = (char *)src;
  char *idst = malloc(sizeof(char));
  if (idst==NULL) {
    affiche_message("Erreur d'allocation");
    return NULL;
  }
  idst = strdup(isrc);
  return (void *)idst; // pour que cela compile
}

void copier_str(const void *src, void *dst) {
  /* a completer. Exercice 5, question 1 */
  char *isrc = (char *)src;
  char *idst = (char *)dst;
  free(idst);
  idst = strdup(isrc);
}

void detruire_str(void *data) {
  /* a completer. Exercice 5, question 1 */
  free(data);
}

void afficher_str(const void *data) {
  /* a completer. Exercice 5, question 1 */
  char *idata = (char *)data;
  printf("%s",idata);
}

int comparer_str(const void *a, const void *b) {
  /* a completer. Exercice 5, question 1 */
  char *ia = (char *)a;
  char *ib = (char *)b;

  if (strlen(ia)<strlen(ib) || strlen(ia)>strlen(ib)) return -1;
  for (int i=0;i<(int)strlen(ia);i++) {
    if (ia[i]!=ib[i])
      return 0;
  }
  return 1; // pour que cela compile
}

int ecrire_str(const void *data, FILE *f) {
  /* a completer. Exercice 5, question 1 */
  const char *idata = (const char *)data;
  return fprintf(f, "%s", idata); // pour que cela compile
}

void * lire_str(FILE *f) {
  /* a completer. Exercice 5, question 1 */
  char buffer[256];
  char *res = fgets(buffer, 256, f);
  char a;
  while (res!=NULL) {
    sscanf(buffer, "%s",&a);
    res = fgets(buffer, 256, f);
  }
  char *pi = (char *)malloc(sizeof(char));
  *pi = a;
  return pi;
  // pour que cela compile
}
