///week12-2.cpp
///Fibonacci �ƦC�O����
#include <stdio.h>
int main()
{///�}�C���ŧi,�k�䦳�L����,�S�g������0
    int a[30]={0,1};///�̭��񵪮�
    printf("1 ");///���L�X�Ĥ@��
    for(int i=2;i<30;i++){///�A�L�᭱����
        a[i]=a[i-1]+a[i-2];///�e�G���ۥ[
        printf("%d ",a[i]);
        }
}
