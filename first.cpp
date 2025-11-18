#include<iostream>
#include <cmath>
#include<ctime>
using string = std ::string;
double sum(double a,double b);
int main(){
   double a;
   std::cout<<" donner a :"<<'\n';
   std::cin>>a;
   double b;
   std::cout<<" donner b :"<<'\n';
   std::cin>>b;
   std::cout<<a<<"+"<<b<<"= "<< sum(a,b);

    return 0;
    
}
double sum( double a,double b){
     return a+b;
}