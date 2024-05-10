#include<stdio.h>
#include<stdlib.h>
int comparea(const int*a,const int *b){
    return(*a-*b);
}
int compareb(int*a,int*b){
    return(*b-*a);
}
int main(void){
    int N, A[50], B[50],sum = 0;
    scanf_s("%d", &N);
    for(int i=0;i<N;i++){
        scanf_s("%d",&A[i]);
    }
    for (int i = 0; i < N; i++)
    {
        scanf_s("%d",&B[i]);
    }
    qsort(A,N,sizeof(int),comparea);
    qsort(B,N,sizeof(int),compareb);
    for (int i = 0; i < N; i++)
    {
        sum+=A[i]*B[i];
    }
    printf("%d",sum);
}