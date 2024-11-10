#include<iostream>
using namespace std;
void isFound(string fruits[],int prices[],string,int);

main(){
 string fruits[] = {"peach", "apple", "guava", "watermelon"};
    int prices[] = {60, 70, 40, 30};
    string name;
    int quantity;
    cout<<"Enter the fruit name:";
    cin>>name;
    cout<<"Enter quantity in kgs:";
    cin>>quantity;
isFound(fruits,prices,name,quantity);
}

void isFound(string fruits[],int prices[],string name,int quantity){
    bool found = false;
    bool bill = true;
    int total = 0,i;
        for(i=0;found == false&&i<4;i++){
        if(fruits[i]==name){
            total = prices[i] * quantity;
            cout<<"the total bill for "<<quantity<<" kgs of "<<fruits[i]<<" is "<<total;
            found == true;
            break;
        }
    }
    if(i>=4){
        cout<<"fruit not found.";
    }
    }
