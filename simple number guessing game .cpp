#include<iostream>
#include<ctime>
int main()
{
    int num;
    int guess;
    int tries;
    srand(time(0));
    num=(rand()%100)+1;

    do{
        std::cout<<"enter a guess between(1-100):\n";
        std::cin>>guess;
        tries++;

        if(guess>num){
            std::cout<<"Too high!\n";

        }
        else if(guess<num){
            std::cout<<"too low!\n";
        }
        else{
            std::cout<<"correct!# of tries:"<<tries<<'\n';
        }
        
    }
    while(guess!=num);
    return 0;
}