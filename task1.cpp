#include <iostream>
#include <cstdlib>
using namespace std;
void game(){
    int num;
    num=rand();
    int guess;
    do{
        cout<<endl<<"Guess the number : ";
        cin>>guess;
        if(guess==num){
            cout<<endl<<"Wonderfull!!You guessed it right"<<endl;
            cout<<"Thank you for playing this game"<<endl;
            return;
        }
        else if(guess<num){
            cout<<endl<<"Sorry!!But your guess is not right.The number is bigger than this"<<endl;
        }
        else{
            cout<<endl<<"Sorry!!But your guess is not right.The number is smaller than this"<<endl;
        }
    }while(guess!=num);
    cout<<endl<<"Thank you for playing this game"<<endl;
    return;
}
int main(){
    int choice;
    do{
    cout<<endl<<"Press 1 to start a new game"<<endl<<"Press 0 to end the code"<<endl;
    cin>>choice;
    if(choice==1){
        game();
    }
    }while(choice!=0);
}