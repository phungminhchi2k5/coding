#include<iostream>
using namespace std;

int main(){
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    bool checknum[3];
    int n;
    cin>> n;
    for(int i=1;i<n;i++){
        int temp=0;
        cin>>temp;
        checknum[temp]=1;
    }
  
    for(int i=0;i<3;i++){
        int count=0;
        int count1=0;
        int count2=0;
        int count3=0;
        for(int j=0;j<3;j++){
            if(checknum[a[i][j]])
            count++;
            if(checknum[a[j][i]])
            count1++;
            if(checknum[a[j][j]])
            count2++;
            if(checknum[a[3][j]])
            count3++;
        }
        if( count==3||count1==3||count2||count3) cout<< "Yes"; else cout<<"No";
        count=0; 
    }
}