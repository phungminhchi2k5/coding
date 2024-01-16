
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 255

int myStrlen(char *s);
char* myStrcat(char *s1, char *s2);

int main()
{
	int a=100;
	int *ptr = &a;
	cout << ptr<<endl;
	cout << *ptr;
}
int myStrlen(char *s){
	int count =0;
	for(int i=0;s[i]!='\0';i++){
		count++;
	}
	return count;
}
char* myStrcat(char *s1, char *s2){

}