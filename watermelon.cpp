#include<iostream>
int main(){
    int weight;
    do{
        
        std::cout<<"give the weight of the watermelon: \n";
        std::cin>>weight;
    }while(weight<=0 || weight>100);
    
    if (weight%2==0)
    {
        std::cout<<"YES";
    }
    else{
        std::cout<<"NO";
    }
}