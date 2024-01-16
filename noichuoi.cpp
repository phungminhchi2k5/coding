
#include <iostream>
#include <string>
using namespace std;
#define MAX 255

int myStrlen(char s[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	fgets(s1,300,stdin);
	fgets(s2,300,stdin);
	bool kt = myStrcat(s1, s2);
if(kt==false) cout <<"Khong noi duoc. Khong du bo nho." ; else{
        if (myStrlen(s1) > 0 && s1[myStrlen(s1) - 1] == '\n') {
        s1[myStrlen(s1) - 1] = '\0';
    }
        cout<<s1;
        cout<<" ";
        cout<<s2;
    }
}
int myStrlen(char s[]){
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        count++;
    }
    return count;
}
bool myStrcat(char s1[], char s2[]){
    if((myStrlen(s1)+myStrlen(s2))>=MAX){
        return false;
    }else
    return true;
}