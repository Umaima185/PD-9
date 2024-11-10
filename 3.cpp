
#include<iostream>
using namespace std;
bool isFound(string);

string name;
int i;

main(){
 bool r;
    cout<<"Enter name:";
    cin>>name;
r = isFound(name);
cout<<r;
}

bool isFound(string name){
        for( i=0;name[i]!='\0';i++)
        if(i%2==0){
            return true;
        }
        else
             return false;
    }

