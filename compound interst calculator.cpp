#include<iostream>
#include<cmath>
int main()
{
double principle;
double rate;
double years;
double total;
    std::cout<<"Enter principle:\n";
    std::cin>>principle;
    if(principle<=0){
        std::cout<<"principle cannot be less than or equals to zero";
    }
    
    

    std::cout<<"Enter rate:\n";
    std::cin>>rate;
    if(rate<=0){
        std::cout<<"rate cannot be less than or equals to zero";
    }
    
    
    std::cout<<"Enter time in years:\n";
    std::cin>>years;
    if(years<=0){
        std::cout<<"time cannot be less than or equals to zero";
    }
    
    total=principle*pow((1+rate/100),years);
    std::cout<<total;
    return 0;
}