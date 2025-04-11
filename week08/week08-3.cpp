//week08-3.cpp
//LeetCode 2843. Count-Symmetric-Integers
//眖low...high计い,тちオ娩癬ㄓ==娩癬ㄓ
class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans=0;//癹伴玡ans琌0
        for(int i=low;i<=high;i++){
            int a=i/1000;//计
            int b=i/100%10;//κ计
            int c=i/10%10;//计
            int d=i%10;//计
            if(11<=i && i<=99 && c==d)ans++;//2计
            if(1000<=i && i<=9999 && a+b==c+d)ans++;//4计
        }//癹伴い丁ans++
        return ans;//癹伴,рansㄓノ
    }
};
