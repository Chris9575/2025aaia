//week03-1.cpp �G�X�@��c++����
//Leetcode 2579. Count Total Number of Colored Cells
class Solution {
public:
    long long coloredCells(int n) {
        long long ans=n;//�n�h�g�o��A��Ʀr�ɯšA��64�줸(�ܪ��ܪ������)
        return ans*ans +(ans-1)*(ans-1);//c/c++/c#���n�[����
    }
};
