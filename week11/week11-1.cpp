///week11-1.cpp
///�禡/���function
#include <stdio.h>
///�e���w�q�禡
///�e�X�Ӫ��Oint���
///�e�i�h���a,���b
int addnum(int a,int b)
{
    printf("�b�禡addum()��,�o��Ѽ�a:%d b:%d\n",a,b);
    int ans=a+b;
    printf("��X����%d�nreturn�X�h��\n",ans);
    return ans;///���X�Ӫ����G�ǥX�h
}
int main()
{///�D�n���禡�B�D�{��
    printf("�bmain()�I�s�ϥ�addum()\n");
    int ans=addnum(2,3);
    printf("�bmain()�o�쵪��:%d\n",ans);
}
