#include <stdio.h>
#include <string.h>

int main()
{
    static char s[10000001];

    scanf("%s", s);

    int length = strlen(s);

    int x[26] = {0};

    for (int i = 0; i < length; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            x[s[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (x[i] != 0)
        {
            printf("%c : %d\n", i + 'a', x[i]);
        }
    }

    return 0;
}
