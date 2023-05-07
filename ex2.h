#include<stdio.h>
#include<stdlib.h>
typedef struct vol
{
    char num_vol[6];
    char origine[10];
    int qte_fuel;
    int malade;
}vol;
typedef struct cellule
{
    vol info;
    struct cellule*suivant;
}cellule;
typedef struct piste
{
    cellule * tete ;
    cellule * queuee ;
}piste;

void creer_piste (piste * F);
int est_vide_piste (piste F);
void premier_piste(piste F,vol *v);
int longeur(piste F);
void enfiler_vol(piste *F,vol v);
void defiler_piste(piste *F,vol *v);
void AffichePiste(vol v);
void Affiche_Piste(piste * F);
