#include<iostream>
using namespace std;

bool isOn(string num[]);

main(){
    bool r;
    string num[4];
     cout<<"Enter elements:"<<endl;
     for(int i=0;i<4;i++){
        cin>>num[i];
     }
   r = isOn(num);
   cout<<r;
}
bool isOn(string num[]){
    int i=0;
        if(num[i]==num[i+1]&&num[i+1]==num[i+2]&&num[i+2]==num[i+3]){
            return true;
        }
        else
            return false;
    }
