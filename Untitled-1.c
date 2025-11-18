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
typedef struct Distrubiteur {
    int id;
    Bonbon  reserve[MAX_BONBON];
    int nb_bonbon_actuelle;
} Distributeur;


//main

int main(){
    Bonbon creeBonbon(char couleur[20],int valeur);
    void afficherBonbon(Bonbon bonbon);
    int chercher_bonbon( Distributeur dist,Bonbon bonbon);
    Distributeur creeDistributeur (int id,Bonbon reserve[MAX_BONBON] ,int nb_bnbn);
    void ajouterBonbon(Distributeur *dist, Bonbon bonbon);
    void afficherDistributeur(Distributeur dist );
    void afficherBonbon(Bonbon bonbon);
    
    

    Distributeur dist;
    Bonbon bonbon1 ;
    Bonbon bonbon2;
    Bonbon bonbon3;
    Bonbon bonbon4;
    bonbon1= creeBonbon("rouge",3);
    bonbon2= creeBonbon("bleu",2);
    bonbon3= creeBonbon("orange",5);
    bonbon4 = creeBonbon("jaune",1);
    Bonbon reserve[3]={bonbon1,bonbon2,bonbon3};

    dist= creeDistributeur(1,reserve , 3);
    afficherDistributeur(dist);
    Distributeur *d =&dist;
    ajouterBonbon(d,bonbon4);
    afficherDistributeur(dist);



   
   


    return 0;
}

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


//retirer bonbon
void retirerBonbon(Distributeur *dist ,Bonbon bonbon)
{
    supprimerBonbon(*dist , bonbon);
}

//chercher bobon
int chercher_bonbon( Distributeur dist,Bonbon bonbon)
{
    int v=0;
    for (int i=0;i<dist.nb_bonbon_actuelle,i++)
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
//supprimer bonbon
void supprimerBonbon( Distributeur *dist,Bonbon bonbon )
{
    int x;
    x=chercher_bonbon(dist,bonbon);
    if (x!=-1)
    {
        dist->reserve[i].valeur=0;
        strcpy(dist->rese[i],"VIDE");
        p->nb_bonbon_actuelle-=1;
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
