#include<iostream>
using namespace std;
#define MAX 100
void Nhapmang(int *a,int n){
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
}
int firstnum(int n){
	if(n<10&&n>0){
		return n;
	}
	return firstnum(n/10);
}
bool isBenford(int *a, int n){
	int count =0,count1=0;
	for(int i=0;i<n;i++){
		if(firstnum(a[i])==1){
			count ++;
		}else if(firstnum(a[i])==4){
			count1++;
		}
	}
	if(count==3&&count1==1){
		return true;
	}
	return false;

}


int main()
{
	int a[100], n = 10;
	Nhapmang(a, n);
	if (isBenford(a, n) == true)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
	return 0;
}
