#include <iostream>
#include <cstring>
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
    fgets(s, MAX, stdin);
    if (myStrcmp(s, "") == 0)
        cout << "Chuoi rong." << endl;
    else
    {
        StringReverse(s);
        cout << s << endl;
    }
    return 0;
}

int myStrlen(char s[], int k)
{
    int dem = 0;
    for (int i = k; s[i] != '\0'; i++)
    {
        if (s[i] != '\0')
            dem++;
        else
            break;
    }
    if (dem > 290)
    {
        while (1)
        {
        }
    }
    else
        return dem;
}

int myStrcmp(char s1[MAX], char s2[MAX])
{
    if(s1[0]==0) return 0;
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
            return 1;
    }
    return myStrlen(s1, 0) != myStrlen(s2, 0);
}

void StringReverse(char s1[])
{
       if (myStrlen(s1,0) > 0 && s1[myStrlen(s1,0) - 1] == '\n') {
        s1[myStrlen(s1,0) - 1] = '\0';
    }
    // Chuanhoa(s1);
    int pos = 0;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (s1[0] == ' ' && pos == 0)
        {
            while (s1[i] == ' ')
            {
                cout << " ";
                i++;
            }
            pos = i;
        }
        if (s1[i] == ' ' && i != 0)
        {
            for (int j = i - 1; j >= pos; j--)
            {
                cout << s1[j];
            }
            cout << s1[i];
            pos = i + 1;
        }
        if (s1[i + 1] == '\0' && s1[i] != ' ')
        {
            for (int j = i; j >= pos; j--)
            {
                cout << s1[j];
            }
        }
    }
    s1[0] = '\0';
}
