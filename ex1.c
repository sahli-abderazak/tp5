#include "ex1.h"
/*void initialiser (File * F)
{
    *F=NULL;
}
int fileVide(File F)
{
    return (F == NULL);
}
void saisieetudiant(Etudiant *etud)
{
    printf("donner le num d'etudiant");
    scanf("%i",&etud->num);
    printf("donner le nom d'etudiant");
    scanf("%s",etud->nom);
    printf("donner la moyenne d'etudiant");
    scanf("%f",&etud->moy);
}
void enfiler_etudiant(File * F,Etudiant etud)
{

    cellule *nv;
    nv=malloc(sizeof(cellule));
    nv->info=etud;
    nv->suivant=NULL;
    File p;
    if(*F!=NULL)
    {
        p=*F;
        while(p->suivant!=NULL)
        {
            p=p->suivant;
        }
        p->suivant=nv;

    }
    else
        *F=nv;
}
void defiler_etudiant(File*F,Etudiant*e)
{
    File p;
    if(*F!=NULL)
    {
        *e=(*F)->info;
        p=*F;
        *F=(*F)->suivant;
        free(p);

    }
}
void afficheetudiant(Etudiant etud )
{

    printf("le nom %s",etud.nom);
}
void Affiche_etudiants(File* F)
{
    File ft=NULL;
    Etudiant etud;
while(*F!=NULL)
{
     defiler_etudiant(F,&etud);
     afficheetudiant(etud);
     enfiler_etudiant(&ft,etud);
}
*F=ft;
}
int main()
{
 Etudiant etud;
 File F;
    saisieetudiant(&etud);
    initialiser(&F);
    enfiler_etudiant(&F,etud);
    saisieetudiant(&etud);
    enfiler_etudiant(&F,etud);
    Affiche_etudiants(&F);
    defiler_etudiant(&F,&etud);
   Affiche_etudiants(&F);
}*/

