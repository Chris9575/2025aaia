//week09-1.cpp
//LeetCode 38. Count-and-Say  �Ʀr�s��X�{,�N�ҥ�RLE��k�i�Ʀr�[�r���j���Φ�
class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return"1";//��²�檺case,�p�G�O1�Ϧ^��"1"
        string prev= countAndSay(n-1);//�禡�I�s�禡�j���D�i�A�ݡj�p���D
        string ans="";
        char prevC=prev[0];//�e�@�Ӧr��
        int prevN=1;//�e�@�Ӧr��,�ֿn�X�{����
        for(int i=1;i<prev.length();i++){
            if(prevC==prev[i])prevN++;//�ۦP,�N+1
            else{//�r�����ۦP��
                ans+= string(to_string(prevN)) +prevC;//�X�{����+���Ӧr��(�e�X���e�ֿn���r��)
                prevC=prev[i];//�s���r��
                prevN=1;//�q1�}�l(�s���r��,���@��)
            }
        }
        ans += string(to_string(prevN))+prevC ;  //�̫�@��,�]�n
        return ans;
    }
};
