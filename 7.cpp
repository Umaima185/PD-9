
#include<iostream>
using namespace std;
void common(string,string);

string s1,s2;
int i;

main(){
    cout<<"Enter word 1:";
    cin>>s1;
    cout<<"Enter word 2:";
    cin>>s2;
common(s1,s2);

}

void common(string s1, string s2) {
    int count_s1[256] = {0}; 
    int count_s2[256] = {0}; 
    
    for (int i = 0; s1[i] != '\0'; i++) {
        count_s1[s1[i]]++;
    }
    
    for (int i = 0; s2[i] != '\0'; i++) {
        count_s2[s2[i]]++;
    }
    int common_count = 0;
    for (int i = 0; i < 256; i++) {
        common_count += min(count_s1[i], count_s2[i]);
    }
    
    cout << "Number of common characters: " << common_count << endl;
}

