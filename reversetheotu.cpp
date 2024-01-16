#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	fgets(s,300,stdin);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
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
    return dem;
}
int myStrcmp(char s1[MAX], char s2[MAX])
{
    if(s1[0]=='\n') return 0;
    for (int i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
    {
        if (s1[i]!=s2[i])
            return 1;
    }
    return myStrlen(s1,0)!=myStrlen(s2,0);
}
void StringReverse(char s1[])
{
    if (myStrlen(s1,0) > 0 && s1[myStrlen(s1,0) - 1] == '\n') {
        s1[myStrlen(s1,0) - 1] = '\0';
    }
    //Chuanhoa(s1);
    char s2[MAX][MAX];
    int pos=0;
    int n=0;
    for (int i=0;i<myStrlen(s1,0);i++)
    {
        if(s1[i]==' '&&i!=0)
        {
            for (int j=0;j<=i-pos;j++)
            {
                s2[n][j]=s1[pos+j];
            }
            n++;
            pos=i+1;
        }
        if (i==myStrlen(s1,0)-1)
        {
            int j;
            for (j=0;j<=i-pos;j++)
            {
                s2[n][j]=s1[pos+j];
            }
            s2[n][j]=' ';
            n++;
        }

    }
    for (int i=n-1;i>=0;i--)
        {
            cout<<s2[i];
        }
    s1[0]='\0';
}