#include <stdio.h>

void display(int n, int m, int matrix[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

int reduce_row(int n, int m, int matrix[n][m])
{
    int i, j;
    for (j = n - 1; j >= 0;)
    {
        for (i = 0; i < m; i++)
        {
            if (matrix[j][i] != 0)
                break;
        }
        if (i == m)
        {
            j--;
        }
        else
            break;
    }
    return j + 1;
}

int reduce_coloumn(int n, int m, int matrix[n][m])
{
    int i, j;
    for (j = m - 1; j >= 0;)
    {
        for (i = 0; i < n; i++)
        {

            if (matrix[i][j] != 0)
                break;
        }
        if (i == n)
        {
            j--;
        }
        else
            break;
    }
    return j + 1;
}

int main()
{
    int i, j, nz = 0, sr, s = 1, k, l, n, m;
    printf("Enter the number of rows of matrix: ");
    scanf("%d", &n);
    printf("Enter the number of columns of matrix: ");
    scanf("%d", &m);
    int mat[n][m];
    printf("Enter the elements in first matrix: \n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] != 0)
                nz++;
        }
    int tupleA[nz + 1][3], tupleB[nz + 1][3];
    printf("Entered Matrix: \n");
    display(n, m, mat);
    if (nz > (m * n) / 2)
    {
        printf("No sparse matrix");
    }
    else
    {
        sr = nz + 1;
        tupleA[0][0] = n;
        tupleA[0][1] = m;
        tupleA[0][2] = nz;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] != 0)
                {
                    tupleA[s][0] = i;
                    tupleA[s][1] = j;
                    tupleA[s][2] = mat[i][j];
                    s++;
                }
            }
        }
        printf("\nThree Tuple Matrix: \n");
        display(sr, 3, tupleA);
        k = reduce_row(n, m, mat);
        l = reduce_coloumn(n, m, mat);
        s = 1;
        tupleB[0][0] = k;
        tupleB[0][1] = l;
        tupleB[0][2] = nz;
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < l; j++)
            {
                if (mat[i][j] != 0)
                {
                    tupleB[s][0] = i;
                    tupleB[s][1] = j;
                    tupleB[s][2] = mat[i][j];
                    s++;
                }
            }
        }
        printf("\nReduced Matrix: \n");
        display(k, l, mat);
        printf("\nReduced Three Tuple Matrix: \n");
        display(sr, 3, tupleB);
    }
    int sumAB[sr][3];
    for (int i = 0; i < sr; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sumAB[i][j] = tupleB[i][j];
            if (i > 0)
                sumAB[i][2] = tupleA[i][2] + tupleB[i][2];
        }
    }
    printf("\nSum of both three Tuple matrix is: \n");
    display(sr, 3, sumAB);
    return 0;
}