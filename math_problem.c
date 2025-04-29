#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int n, m, d;
        scanf("%d %d %d", &n, &m, &d);

        int md = n * d;
        int x = n + m;
        int y = md / x;
        int z = d - y;

        printf("%d\n", z);
    }

    return 0;
}