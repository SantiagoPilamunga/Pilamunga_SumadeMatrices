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
        for (int i = 0; i < m; i++)
        {
            matrix[i][j]=rand()%101;
        }
        
    }
    
    return 0;
}
