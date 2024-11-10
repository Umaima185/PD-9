
#include<iostream>
using namespace std;
void isFound(string movies[],string);

main(){
 string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
 string name;
    cout<<"Enter movie name:";
    cin>>name;
isFound(movies,name);
}

void isFound(string movies[],string name){
    bool found = false;
    int i;
        for( i=0;found == false&&i<5;i++){
        if(movies[i]==name){
            if(i%2==0){
                cout<<"discout will be 10%";
                break;
                found == true;
            }
            else
            cout<<"Discount will be 5%";
        }

    }
if(i>=5){
    cout<<"Movie not on list.";
}
    }
