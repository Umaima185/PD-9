#include<iostream>
using namespace std;

bool isSeven(int num[],int n);
void boom(int num[],int n);

main(){
    int n=0;
    cout<<"Enter number of elemets:";
    cin>>n;
    int num[n];
     cout<<"Enter numbers:";
     for(int i=0;i<n;i++){
        cin>>num[i];
     }
    boom(num,n);
}
bool isSeven(int num[],int n){
    int mod;
    for(int i=0;i<n;i++){
        if(num[i]==7){
            return true;
        }
        if(num[i]!=7){
            mod= num[i]%10;
            num[i]==num[i]/10;
            if(mod==7){
                return true;
            }
            else
                return false;
        }
    }
}
void boom(int num[],int n){
    if (isSeven(num, n) == true){
        cout<<"Boom";
    }
    else
        cout<<"No digit 7 entered";
}