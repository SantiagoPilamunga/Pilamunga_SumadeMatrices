#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n,m;
    printf("Ingrese el numero de filas: ");
    scanf("%d", &n);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &m);
    srand(time(NULL));
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j]=rand()%101;
        }
        
    }
    int matrix2[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix2[i][j]=rand()%101;
        }
        
    }
    
    return 0;
}
