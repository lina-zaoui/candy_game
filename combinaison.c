#include<stdio.h>
#include<string.h>
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
} Distrubiteur;
// Structure Combinaison
typedef struct Combinaison{
    int id;
    char couleurs[3][20];
    int points;
}Combinaison;
// Structure Joueur
typedef struct Joueur{
    char pseudo[20];
    int scoreTotale;



//cree combinaison 
Combinaison creeComnbinaison( int id,char couleur[3][20],int points )
{
    Combinaison comb ;
    comb.id = id ;
    comb.points = points;
    for (int i=0<3;i++){
        strcpy(comb.couleur[i],couleur[i]);
    }
            
}

//afficher combinaison 
void afficherCombinaison ( Combinaison comb){

    printf(" l'identifiant de cette combinaison est : %d  les points sont egale a : %d \n",comb.id,comb.points);
    for (int i =0; i<3;i++)
    {
        printf(" couleur numero %d : %s",i+1,com.couleur[i]);
    }
}

//modifier combinaison 
 Combinaison modifierCombinaison(Combinaison comb , int npoints , char ncouleurs[3][20])
 {
    Combinaison *c = &comb ;
    c-points=npoints;
    for (int i=0; i<3,i++)
    {
        strcpy(c->couleur[i],ncouleurs[i]);
    }
    return comb;
 }


 //supprimer combinaison 

 Combinaison supprimerCombinaison(Combinaison comb)
 {
    char vide[3][20];
    for (int i=0; i<3;i++)
    {
        strcpy(vide[i],"VIDE");
    }
    
    return modifierCombinaison( comb , 0,vide);
 }
