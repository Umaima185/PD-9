#include<iostream>
using namespace std;

void time(string cols[],int n);

main(){
    int n=0;
    cout<<"Enter number of colors:";
    cin>>n;
    string cols[n];
     cout<<"Enter colors:";
     for(int i=0;i<n;i++){
        cin>>cols[i];
     }
    time(cols,n);
}
void time(string cols[],int n){
    int timetaken=1;
 for(int k=0;k<n;k++){
    if(cols[k]==cols[k+1]){
        timetaken = n*2;
    }
    else
         timetaken= n*2 + 1;
 }
 cout<<timetaken<<" seconds";
}