#include<iostream>
using str= std::string;
/*int main(){
    double x1;
    std::cout<<"give me x1 : "<<'\n';
    std::cin>>x1;
    double x2;
    std::cout<<"give me x2 : "<<'\n';
    std::cin>>x2;
    char op;
    std::cout<<"enter the operation : "<<'\n';
    std ::cin>>op;
    switch(op){
        case '+' :{
            std::cout<<" the result is : "<< x1+x2<<'\n';
            break;
        }
        case '-':
        
        {
            std::cout<<" the result is : "<< x1-x2<<'\n';
            break;
        }
        case '*':
        {
            std::cout<<" the result is : "<< x1*x2<<'\n';
            break;
        }
        case '/':
        {
            std::cout<<" the result is : "<< x1/x2<<'\n';
            break;
        }
    }
    x1<=x2 ? std::cout<<x1<<" <"<<x2 : std ::cout<<x2<<"<"<<x1;



}
*/
int main(){
   
    using str = std::string;
    int main(){
        str car[3];

        for (int i=0 ;i<3;i++)
        {
            std::cout<<"give car number "<<i+1<<":"<<'\n';
            std::cin>>car[i];
        }

        for (int j=0;i<3;i++){
            std::cout<<" car number"<<j+1<<"is :"<<car[j]<<'\n';
        }


        return 0;
    }
}