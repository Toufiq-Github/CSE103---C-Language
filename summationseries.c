#include <stdio.h>
#include <math.h>

int main(){
    int i,num,n,sum=1;
    scanf("%d",&num);

    for(i=1;i<=num;i+=1){
        n=pow(3,i);
        sum=sum+(i*n);
    }
    printf("%d", sum);
    return 0;
}
