//week06-3.cpp
//LeetCode 1780.check-if-number-is-a-sum-of-powers-of-three
//�D�جݦ�����,���{��²��,�u�nwhile(�j��)if(�P�_)�N�n�F
class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){//�u�nn�٦��Ʀr,���3������
            //n%3�|�ѤU??��1�ܦn,��0�ܦn,����2�N���n
            if(n%3==2) return false;
            n=n/3;//�鱼3������
        }
        return true;
    }
};
