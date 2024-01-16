
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void DemTieng(char s1[]);
int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void myMemmove(char s[], int vt, int k);
int myStrstr(char s[], char s1[]);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s[MAX];
	fgets(s,300,stdin);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemTieng(s);
	return 0;
}

int myStrlen(char s[],int k)
{
    int dem=0;
    for (int i=k;;i++)
    {
        if (s[i]!='\0')
            dem++;
        else break;
    }
    return dem-1;
}
void myMemmove(char s[],int vt,int k)
{
    int test=1;
    while(test<=k)
    {
        for (int i=vt;i<myStrlen(s,0)-1;i++)
        {
            s[i]=s[i+1];
        }
        s[myStrlen(s,0)-1]='\0';
        test++;
    }
}
int myStrstr(char s[],char s1[])
{
    for (int i=0;i<myStrlen(s,0);i++)
    {
        if (s[i]==s1[0])
        {
            int dem=0; int test=i;
            for (int j=0;j<myStrlen(s1,0);j++)
            {
                if (s[i]!=s1[j]) break;
                else dem++;
                i++;
            }
            if (dem==myStrlen(s1,0)) return test;
        }
    }
    return -1;
}
void Chuanhoa(char s[])
{
    while (s[0]==' ')
    {
        myMemmove(s,0,1);
    }
    for (int i=1;i<myStrlen(s,0);i++)
    {

        if (s[i-1]==' ' && s[i]==' ')
        {
            myMemmove(s,i,1);i--;
        }
        if (s[i]==' ' && s[i+1]=='\0')
        {
            myMemmove(s,i,1);i--;
        }
        else if (s[i]==' ' && s[i-1]=='\0')
        {
            myMemmove(s,i,1);i--;
        }
    }
}
int myStrcmp(char s1[MAX], char s2[MAX])
{
    if (s1[0]=='\n') return 0;
    for (int i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
    {
        if (s1[i]!=s2[i])
            return 1;
    }
    return myStrlen(s1,0)!=myStrlen(s2,0);
}
void myStrcpy(char s[], int vt, char s1[], int k);
int n=0;
char check[MAX][MAX];
int dem[MAX];
bool checkin(char ch[][MAX],char s[],int dem[],int n)
{
    for (int i=0;i<n;i++)
    {
        if (!myStrcmp(ch[i],s))
        {
            dem[i]++;
            return 1;
        }
    }
    dem[n]++;
    return 0;
}
void fillin(char ch[][MAX],char s1[],int st,int en)
{
    char s2[MAX];
    for (int i=0;i<=en-st;i++)
    {
        s2[i]=s1[st+i];
    }
    s2[en-st+1]='\0';
    if (!checkin(ch,s2,dem,n))
    {
        for (int i=0;i<=en-st;i++)
        {
            ch[n][i]=s1[st+i];
        }
        n++;
    }

}
void DemTieng(char s1[])
{
    Chuanhoa(s1);
    int pos=0;
//    s1[myStrlen(s1,0)]='\0';
    for (int i=0;i<myStrlen(s1,0);i++)
    {
        if(s1[i]==' ')
        {
            fillin(check,s1,pos,i-1);
            pos=i+1;
        }
        if(i==myStrlen(s1,0)-1)
        {
            fillin(check,s1,pos,i);
        }
    }
    for (int i=0;i<n;i++)
    {
        cout<<check[i]<<": "<<dem[i]<<endl;
    }
}