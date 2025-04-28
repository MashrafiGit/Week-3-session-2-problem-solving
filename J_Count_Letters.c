#include <stdio.h>
#include <string.h>
int main()
{
    static char s[10000001];

    scanf("%s", s);

    int length = strlen(s);

    int x[27] = {0};

    for (int i = 0; i < 27; i++)
    {
        x[s[i] - 'a']++;
    }

    for (int i = 0; i < 27; i++)
    {
        if (x[i] != 0)
        {
            printf("%c : %d\n", i + 'a', x[i]);
        }
    }

    return 0;
}