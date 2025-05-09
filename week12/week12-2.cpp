///week12-2.cpp
///Fibonacci 數列是什麼
#include <stdio.h>
int main()
{///陣列的宣告,右邊有他的值,沒寫的都放0
    int a[30]={0,1};///裡面放答案
    printf("1 ");///先印出第一項
    for(int i=2;i<30;i++){///再印後面的項
        a[i]=a[i-1]+a[i-2];///前二項相加
        printf("%d ",a[i]);
        }
}
