#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int m, n, p, q, i, j, k, sum = 0;
        scanf("%d %d", &m, &n);
        int first[m][n];
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &first[i][j]);
        scanf("%d %d", &p, &q);
        int second[p][q];
        for (i = 0; i < p; i++)
            for (j = 0; j < q; j++)
                scanf("%d", &second[i][j]);
        int multiply[m][q];
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                multiply[i][j] = 0;
                for (k = 0; k < p; k++)
                {
                    multiply[i][j] = multiply[i][j] + first[i][k] * second[k][j];
                }
            }
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
                printf("%d\t", multiply[i][j]);
            printf("\n");
        }
    }

    return 0;
}