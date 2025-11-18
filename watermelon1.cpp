#include<iostream>
int main(){
    int w;
    do{
        std::cout<<"w=\n";
        std::cin>>w;
    }while(w<=0||w>100);
    if (w%2==0){
        std::cout<<"YES";
    }
    else{
        std::cout<<"NO";
    }
}