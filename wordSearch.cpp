#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int found=-1;
    char S[3][10]={"Ram","Aman","Akancha"};
    char word[10];
    cout<<"Enter Word: ";
    cin>>word;
    
    for(int i=0;i<3;i++){
        if (strcmp(S[i], word) == 0) {
            found = i;
            break;
        }
        
    }
    if(found==-1){
        cout<<"Not present";
    }
    else{
        cout<<"Present at position:"<<found+1;
    }

}