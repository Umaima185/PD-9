#include<iostream>
using namespace std;

void newArray(int num[],int n);

main(){
    int n=0;
    cout<<"Enter number of elemets:";
    cin>>n;
    int num[n];
     cout<<"Enter numbers:";
     for(int i=0;i<n;i++){
        cin>>num[i];
     }
     newArray(num,n);
}
void newArray(int num[],int n){
    int i,j;
    for(j=0;j<n;j++){
        for(i=0;i<n;i++){
        if(num[i]%2==0){
            num[i]= num[i]-2;
        }
        else
            num[i]=num[i]+2;
    }
    }
cout<<"The new array will be:";
for(int k=0;k<n;k++){
    cout<<num[k]<<endl;
}
}
