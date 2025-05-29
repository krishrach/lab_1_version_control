#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    int m,n; // number of rows and columns
    int i,j;
    int a;
    srand(time(NULL));
    //вводимо матрицю
   printf("\nInput matrix dimension:\n");
    scanf("%d%d",&m,&n);
    int matrix[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        matrix[i][j]=rand()%100+1;
       }
    }
// вивід матриці

    printf("\n Matrix \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

//  сортування
      printf("\nInput a:\n");
   scanf("%d",&a);

    for (i=0; i<m-a;i+=a){
            for (j=0;j<n;j++){
                for(int b=0; b<m-a-i;b++){
                if (b<(b+a)&& b%a==0){
         int temp = matrix[b][j];
        matrix[b][j] = matrix[(b+a)][j];
       matrix[(b+a)][j]=temp;
}
    }
}}




   printf("\n");
     printf("Sorted matrix\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
   printf("\n");
    for (i=0; i<m;i++){
    int sum=0;
    if(i%a!=0){
            for (j=0;j<n;j++){
                sum+=matrix[i][j];
            }
    double k= sum/(float)n;
    printf("average %2.3lf in %d row\n", k, i);
    }
}

    return 0;
}
