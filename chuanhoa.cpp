
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void ChenChuoiTaiVitriK(char s[], char s1[], int k);
void Chuanhoa(char s[]);
int myStrlen(char s[], int k);
bool myStrcat(char s[], char s1[], char s2[]);
void myStrcpy(char s[], int vt, char s1[], int k);
int myStrstr(char s[], char s1[]);


int main()
{
	char s[MAX];

	fflush(stdin);
	fgets(s,300,stdin);

	char s1[MAX];
	myStrcpy(s1, 0, s, 0);
	Chuanhoa(s1); 
	puts(s);
	puts(s1); 
	return 0;
}
int myStrlen(char s[], int k){
	int count=0;
	for(int i=k;s[i]!='\0';i++){
		count++;
	}
	return count;
}
void myStrcpy(char s1[], int a, char s[], int b)
{
	int i=0;
	for (i;i<myStrlen(s,0);i++)
	{
		s1[i]=s[i];
	}
	s1[i]='\0';
}
void del(char a[],int s,int e)
{
    for (int i=s;i<myStrlen(a,0)-e;i++)
    {
        a[i]=a[i+e];
    }
    a[myStrlen(a,0)-e]='\0';
}
void add(char a[],char b,int s)
{
    int n=myStrlen(a,0);
    for (int i=n;i>s;i--)
    {
        a[i]=a[i-1];
    }
    a[s]=b;
    a[n+1]='\0';
}
void Chuanhoa(char s[])
{
    for (int i=0;i<myStrlen(s,0);i++)
    {
        if (s[i]=='.')
        {
            if (s[i+1]==' ')
            {
                del(s,i+1,1);
                i--;
            }
        }
    }
    for (int i=myStrlen(s,0)-1;i>=0;i--)
    {
        if (s[i]=='.')
        {
            if (s[i-1]==' ')
            {
                del(s,i-1,1);
            }
        }
    }
    for (int i=0;i<myStrlen(s,0);i++)
    {
        if (s[i]=='.')
        {
            add(s,' ',i+1);
        }
    }
}