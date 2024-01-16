#include <iostream>
#include <cstring>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k);
void ChenChuoiTaiVitriK(char s[], char s1[], int k);

int main()
{
    char s[MAX], s1[MAX];
    fgets(s, MAX, stdin);
    fgets(s1, MAX, stdin);
    int k;
    cin >> k;
    if (k < 0 || k > myStrlen(s, 0))
        cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
    else
    {
        ChenChuoiTaiVitriK(s, s1, k);
    }
}

int myStrlen(char s[], int k)
{
    int count = 0;
    for (int i = k; s[i] != '\0'; i++)
        count++;
    return count-1;
}

void ChenChuoiTaiVitriK(char s[], char s1[], int k)
{
     if (myStrlen(s1,0) > 0 && s1[myStrlen(s1,0) - 1] == '\n') {
        s1[myStrlen(s1,0) - 1] = '\0';
    }
    if (myStrlen(s,0) > 0 && s[myStrlen(s,0) - 1] == '\n') {
        s[myStrlen(s,0) - 1] = '\0';
    }

    for (int i = 0; i < k; i++)
    {
        cout << s[i];
    }

    for (int i = 0; i < myStrlen(s1,0); i++)
    {
        cout << s1[i];
    }

    for (int i = k; s[i] != '\0'; i++)
    {
        cout << s[i];
    }
}
