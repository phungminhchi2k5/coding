#include <iostream>
#include <cstring>
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
    fgets(s, 300, stdin);
    fgets(s1, 300, stdin);
    int k;
    cin >> k;
    if (k < 0 || k > myStrlen(s, 0))
        cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
    else
    {
        ChenChuoiTaiVitriK(s, s1, k);
        cout << s;
    }

    return 0;
}

// Hàm tính chiều dài của chuỗi
int myStrlen(char s[], int k)
{
    int i = 0;
    while (s[i] != '\0' && i < k)
        i++;
    return i;
}

// Hàm sao chép chuỗi
void myStrcpy(char s[], int vt, char s1[], int k)
{
    int i;
    for (i = 0; i < k; i++)
        s[vt + i] = s1[i];
    s[vt + i] = '\0';
}

// Hàm trích xuất một phần của chuỗi
void mySubstr(char s[], int b, int count, char ss[])
{
    int i;
    for (i = 0; i < count; i++)
        ss[i] = s[b + i];
    ss[i] = '\0';
}

// Hàm nối chuỗi
bool myStrcat(char s1[], char s2[])
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 + len2 < MAX)
    {
        strcat(s1, s2);
        return true;
    }
    else
    {
        return false;
    }
}

// Hàm chèn chuỗi s1 vào vị trí k của chuỗi s
void ChenChuoiTaiVitriK(char s[], char s1[], int k)
{
    char temp[MAX];
    mySubstr(s, 0, k, temp);
    myStrcat(temp, s1);
    myStrcat(temp, s + k);
    myStrcpy(s, 0, temp, myStrlen(temp, 0));
}
