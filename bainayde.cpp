#include <iostream>
#include<math.h>
using namespace std;
#define MAX 1000

int main()
{
	bool a[360];
    int n;
    cin>> n;
    int x=0;
    for(int i=0;i<=n;i++){
        int temp=0;
        cin>>temp ;
        x+=temp;
            if(x>360) a[x-360]=1;
            else a[x]=1;
        
    }
    int max=0;
    for(int i=0;i<360;i++){
        if(a[i]==1) max=i-max;
    }
    cout<< max;

}