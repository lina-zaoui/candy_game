#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_BONBON 100


//Structure Bonbon
typedef struct Bonbon{
    char couleur[20];
    int valeur;
} Bonbon;


//Structure Distributeur
typedef struct Distrubuteur {
    int id;
    Bonbon  reserve[MAX_BONBON];
    int nb_bonbon_actuelle;
} Distributeur;


int main(){

    Bonbon creeBonbon(char couleur[20],int valeur);
    Distributeur creeDistributeur (int id,Bonbon reserve[MAX_BONBON] ,int nb_bnbn);
    int chercher_bonbon( Distributeur dist,Bonbon bonbon);
    void supprimerBonbon( Distributeur *dist,Bonbon bonbon );
    void afficherDistributeur(Distributeur dist );
    void afficherBonbon(Bonbon bonbon);
    

    Bonbon bonbon ;
    Bonbon bonbon1;
    Bonbon bonbon2;
    Bonbon bonbon3;
    Bonbon bonbon4;
    int x;

    bonbon1= creeBonbon("rouge",3);
    bonbon2= creeBonbon("bleu",2);
    bonbon3= creeBonbon("orange",5);
    bonbon4 = creeBonbon("jaune",1);
    bonbon = creeBonbon("rouge", 4);
    Bonbon reserve[4]={bonbon1,bonbon2,bonbon3,bonbon4};
    Distributeur dist;
    dist = creeDistributeur(1,reserve,4);
    afficherDistributeur(dist);
    supprimerBonbon(dist,bonbon);
    afficherDistributeur(dist);
    


}



//cree bonbon
Bonbon creeBonbon(char couleur[20],int valeur)
{
    Bonbon bonbon;
    bonbon.valeur=valeur ;
    strcpy(bonbon.couleur,couleur);
    return bonbon;
}

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

//chercher bobon
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

//afficher bobon
void afficherBonbon(Bonbon bonbon)
{
    printf("le couleur du bonbon est :%s  la valeur du bonbon est :%d\n ",bonbon.couleur,bonbon.valeur);
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