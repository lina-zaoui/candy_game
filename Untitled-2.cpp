#include<iostream>
using str = std::string;
double max(double tab[],int size);
int main(){
   
   int size;
   cout<<"donner la taille du tableau :"<<'\n';
   cin>>size;
   double tab[size];
   for(int i=0;i<size;i++){
    cout<<"donner l'element numero"<<i+1<<":\n";
    cin>>tab[i];
   }
   cout<<"le max est :"<<max(tab,size);

    return 0;
}
double max(double tab[],int size){
    double max=tab[0];
    for (int i=0;i<size;i++){
        if(max<tab[i])
            max=tab[i];
    }
    return max;
}