
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void ChenChuoiTaiVitriK(char s[], char s1[], int k);

int main()
{
	char s[MAX], s1[MAX];
	fgets(s,300,stdin);
	fgets(s1,300,stdin);
	int k;
	cin >> k;
	if (k < 0 || k>myStrlen(s, 0))
		cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
	else
	{
    ChenChuoiTaiVitriK(s, s1, k);
     cout<<s;
    }
}

int myStrlen(char s[], int k)
{
    int count = 0;
    for (int i = k; s[i] != '\0'; i++)
        count++;
    return count;
}

void ChenChuoiTaiVitriK(char s[], char s1[], int k)
{
    if (myStrlen(s1,0) > 0 && s1[myStrlen(s1,0) - 1] == '\n') {
        s1[myStrlen(s1,0) - 1] = '\0';
    }
    int len_s = myStrlen(s, 0);
    for (int i = len_s; i >= k; i--)
    {
        s[i + myStrlen(s1, 0)] = s[i];
    }
    for (int i = k, j = 0; j < myStrlen(s1, 0); i++, j++)
    {
        s[i] = s1[j];
    }
}