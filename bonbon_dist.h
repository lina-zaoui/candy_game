#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bonbon.h"
//fonctions de la structure bonbon

//cree bonbon
Bonbon creeBonbon(char couleur[20],int valeur)
{
    Bonbon bonbon;
    bonbon.valeur=valeur ;
    strcpy(bonbon.couleur,couleur);
    return bonbon;
}
//afficher bobon
void afficherBonbon(Bonbon bonbon)
{
    printf("le couleur du bonbon est :%s  la valeur du bonbon est :%d\n ",bonbon.couleur,bonbon.valeur);
}

//modifier Bonbon
void modifierBonbon(Bonbon *bonbon , int nvaleur, char ncouleur[20])
{
    bonbon->valeur=nvaleur;
    strcpy(bonbon->couleur,ncouleur);
}

//supprimer bonbon
void supprimerBonbon( Bonbon bonbon )
{
   Bonbon * b= &bonbon;
   b->valeur = 0;
   strcpy(b->couleur,"VIDE");
}


//fonction de la structure Distributeur 

//cree distributeur
Distributeur creeDistributeur (int id,Bonbon reserve[MAX_BONBON] ,int nb_bnbn)
{
    Distributeur dist;
    dist.id= id;
    for (int i=0;i<nb_bnbn;i++)
    {
        dist.reserve[i]=reserve[i] ;
    }
    dist.nb_bonbon_actuelle=nb_bnbn;
    return dist;
}

//ajouter bonbon
void ajouterBonbon(Distributeur *dist, Bonbon bonbon)
{
    if (dist->nb_bonbon_actuelle+1<=MAX_BONBON)
    {
        
        dist->reserve[dist->nb_bonbon_actuelle].valeur=bonbon.valeur;
        strcpy(dist->reserve[dist->nb_bonbon_actuelle].couleur,bonbon.couleur);
        dist->nb_bonbon_actuelle+=1;
    } 

}

//chercher bobon( j'ai ajouter cette fontion pour simplifier  )
int chercher_bonbon( Distributeur dist,Bonbon bonbon)
{
    int v=0;
    for (int i=0;i<dist.nb_bonbon_actuelle;i++)
    {
       
        if (strcmp(dist.reserve[i].couleur,bonbon.couleur)==0)
        {
            return i;
        }
        v+=1;
    }
    if (v==dist.nb_bonbon_actuelle)
    {
        return -1;
    }
}

//retirer bonbon
void retirerBonbon(Distributeur dist ,Bonbon bonbon)
{
   Distributeur * d=&dist;
   int x;
   x=chercher_bonbon(dist,bonbon);
   if (x!=-1){
         for (int i=0;i<dist.nb_bonbon_actuelle;i++)
        {
            if (x==i)
            {
                supprimerBonbon(dist.reserve[i]);
                d->nb_bonbon_actuelle-=1;
                break;
            }
        }
   }
  
}

//affichaer distributeur
void afficherDistributeur(Distributeur dist )

{
    printf("l'identifiant du distributeur : %d",&dist.id);
    for (int i=0;i<=dist.nb_bonbon_actuelle;i++)
    {
        afficherBonbon(dist.reserve[i]);
    }
}