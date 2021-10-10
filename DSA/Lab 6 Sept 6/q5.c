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
int reduce_row(int n, int m, int matrix[n][m]){
    int i,j;
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
        return j+1;
}
int reduce_coloumn(int n, int m, int matrix[n][m]){
    int i,j;
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
        return j+1;
}

int main()
{
    int i, j, nz = 0, sr, s = 1, k, l,n,m;
    printf("Enter the number of rows of matrix: ");
    scanf("%d", &n);
    printf("Enter the number of columns of matrix: ");
    scanf("%d", &m);
    int matA[n][m];
    printf("Enter the elements in first matrix: \n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            scanf("%d", &matA[i][j]);
            if (matA[i][j] != 0)
                nz++;
        }
    int sparseA[nz + 1][3];
    printf("Entered Matrix: \n");
    display(n, m, matA);
    if (nz > (m * n) / 2)
    {
        printf("No sparse matrix");
    }
    else
    {
        sr = nz + 1;
        k = reduce_row(n,m,matA);
        l = reduce_coloumn(n,m,matA);
        sparseA[0][0] = k;
        sparseA[0][1] = l;
        sparseA[0][2] = nz;
        for (i = 0; i < k; i++)
        {
            for (j = 0; j < l; j++)
            {
                if (matA[i][j] != 0)
                {
                    sparseA[s][0] = i;
                    sparseA[s][1] = j;
                    sparseA[s][2] = matA[i][j];
                    s++;
                }
            }
        }
        printf("\nReduced Three Tuple Matrix: \n");
        display(sr, 3, sparseA);
    }
    int matB[n][m];
        nz=0,s=1;
    printf("Enter the elements in second matrix: \n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            scanf("%d", &matB[i][j]);
            if (matB[i][j] != 0)
                nz++;
        }
    int sparseB[nz + 1][3];
    printf("Entered Matrix: \n");
    display(n, m, matB);
    if (nz > (m * n) / 2)
    {
        printf("No sparse matrix");
    }
    else
    {
        sr = nz + 1;
        k = reduce_row(n,m,matB);
        l = reduce_coloumn(n,m,matB);
        sparseB[0][0] = k;
        sparseB[0][1] = l;
        sparseB[0][2] = nz;
        for (i = 0; i < k; i++)
        {
            for (j = 0; j < l; j++)
            {
                if (matB[i][j] != 0)
                {
                    sparseB[s][0] = i;
                    sparseB[s][1] = j;
                    sparseB[s][2] = matB[i][j];
                    s++;
                }
            }
        }
        printf("\nReduced Three Tuple Matrix: \n");
        display(sr, 3, sparseB);
    }
    int sumAB[sr][3];
    for (int i = 0; i < sr; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sumAB[i][j]=sparseA[i][j]+sparseB[i][j];
        }
    }
    printf("Sum of bots three Tuble matrix is: ");
    display(sr,3,sumAB);
    return 0;
}
