#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char s1[3],s2[3];
    cin.getline(s1,3);
    cin.getline(s2,3);
    int cogas=0;
    int khonggas=0;
    cout<< endl;
    for(int i=0;i<2;i++){
        if(s1[i]=='#') cogas++; 
        if(s2[i]=='#') cogas++; 
    }
    if(cogas==4)cout<<"Yes";
    if(cogas==3) cout<< "Yes"; else if(cogas==2){
        if(s1[0]=='#'&&s1[1]=='#') cout<<"Yes"; else
        if(s2[0]=='#'&&s2[1]=='#') cout<<"Yes"; else
        if(s1[0]=='#'&&s2[0]=='#') cout <<"Yes"; else
        if(s1[1]=='#' &&s2[1]=='#') cout<<"Yes"; else
         cout<<"No";
    }else if(cogas==1) cout<<"No";
}