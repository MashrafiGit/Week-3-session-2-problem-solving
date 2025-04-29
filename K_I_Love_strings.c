#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char s[51], t[51];
        scanf("%s %s", &s, &t);
        // printf("%s %s", s, t);

        char u[101] = {0};

        int length = strlen(s) + strlen(t);

        int countS = 0;
        int countT = 0;
        for (int i = 0; i < length; i++)
        {
            if (s[countS] == '\0')
            {
                u[i] = t[countT];
                countT++;
            }
            else if (t[countT] == '\0')
            {
                u[i] = s[countS];
                countS++;
            }
            else if (i % 2 == 0)
            {
                u[i] = s[countS];
                countS++;
            }
            else if (i % 2 != 0)
            {
                u[i] = t[countT];
                countT++;
            }
        }

        printf("%s\n", u);
    }

    return 0;
}
