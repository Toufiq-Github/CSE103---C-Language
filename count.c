#include<stdio.h>

int divBy5and7(int x, int y);

int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    printf("%d", divBy5and7(x,y));
    return 0;
}

int divBy5and7(int x, int y){
    int count =0;
    for (x; x<y; x+=1){
        if (x%5 == 0 && x%7 == 0)
            count+=1;
    }
    return count;
}

