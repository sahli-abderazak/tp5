#include"ex2.c"
void creer_piste (piste * F)
{
    F=NULL;
}
int est_vide_piste (piste F)
{
    return (F == NULL);
}
void premier_piste(piste F,vol *v)
{
    if(f.tete!=NULL)
    {
        *v=F.tete->info;
    }
}
int longeur(piste F)
{
    int nb=0;
    piste p;
    p=F.tete;
    while(p!=NULL)
    {
        nb++;
        p=p->suivant;
    }
    return nb;
}
void enfiler_vol(piste *F,vol v)
{

    cellule *nv;
    nv=malloc(sizeof(cellule));
    nv->info=v;
    nv->suivant=NULL;
    piste p;
    if(*p!=NULL)
    {
        p=*F.tete;
        while(p->suivant!=NULL)
        {
            p=p->suivant;
        }
        p->suivant=nv;

    }
    else
        *F.tete=nv;
}
void defiler_piste(piste *F,vol *v)
{
    piste p;
    if(*F!=NULL)
    {
        *e=(*F)->info;
        p=*F;
        *F=(*F)->suivant;
        free(p);

    }
}
void AffichePiste(vol v)
{

    printf("le num %s",v.num_vol);
    printf("origine  %s",v.origine);
    printf("le nom %i",v.qte_fuel);
    printf("le nom %i",v.malade);

}
void Affiche_Piste(piste * F)
{
    piste ft=NULL;
    vol v;
    while(*F!=NULL)
    {
        defiler_piste(F,&v);
        AffichePiste(v);
        enfiler_vol(&ft,v)
    }
    *F=ft;
}
int main()
{
    piste  F;
    vol v;
    int x;
    creer_piste (&F);
    premier_piste(F,&v);
    enfiler_vol(&F,v);
    x=longeur(F);
    printf("la longeur est %i",x);
    defiler_piste(&F,&v);
    Affiche_Piste(&F);
}
