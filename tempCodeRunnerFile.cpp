    ChenChuoiTaiVitriK(s, s1, k);
        cout << s;
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
    if (myStrlen(s,0) > 0 && s[myStrlen(s,0) - 1] == '\n') {
        s[myStrlen(s,0) - 1] = '\0';
    }
    if (myStrlen(s1,0) > 0 && s1[myStrlen(s1,0) - 1] == '\n') {
        s1[myStrlen(s1,0) - 1] = '\0';
    }
    // Move the characters after position k to make space for s1
    int len_s = myStrlen(s, 0);
    for (int i = len_s; i >= k; i--)
    {
        s[i + myStrlen(s1, 0)] = s[i];
    }

    // Insert characters from s1 at position k
    for (int i = k, j = 0; j < myStrlen(s1, 0); i++, j++)
    {
        s[i] = s1[j];
    }
}