#include<stdio.h>
#include<stdlib.h>
#define gcx getchar_unlocked
typedef long int lint;
static inline lint getValue(){
    lint n = 0;
    int c = gcx();
    while(c<'0' || c>'9') c = gcx();
    while(c>='0' && c<='9'){
        n = n*10 + c - '0';
        c = gcx();
    }
    return n;
}
void BubbleSort(int a[], int array_size)
{
    int i, j, temp;
    for (i = 0; i < (array_size - 1); ++i)
    {
        for (j = 0; j < array_size - 1 - i; ++j )
        {
            if (a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main(){
    lint testCase = getValue();
    while(testCase--){
        lint N = getValue();
        int varN = N;
        int candiesArr[N],i;
        for(i=0;i<N;i++){
            candiesArr[i] = getValue();
        }
        BubbleSort(candiesArr,N);
        int prev = candiesArr[0]+candiesArr[1];
        int sum = prev;
        if(N>2){
            for(i=2;i<N;i++){
                prev = prev+candiesArr[i];
                sum+=prev;
            }
        }
        printf("%d",sum);
    }
    
    
}
