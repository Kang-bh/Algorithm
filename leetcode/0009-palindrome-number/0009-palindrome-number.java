import java.util.ArrayList;

class Solution {
    public boolean isPalindrome(int x) {
        // string 변환 없이 처리


        int originNum = x;
        int revNum = 0;
        if (x < 0) {
            return false;
        } else {
            
            while (x != 0) {

                int num = x % 10;
                revNum = revNum * 10 + num;
                x /= 10;
            }
            
            return revNum == originNum;

        }
    }
}