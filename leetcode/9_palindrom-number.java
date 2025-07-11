import java.util.ArrayList;

class Solution {
    public boolean isPalindrome(int x) {
        // string 변환 없이 처리

        ArrayList<Integer> divNums = new ArrayList<Integer>(); // 타입 지정

        if (x < 0) {
            return false;
        } else {
            
            while (x != 0) {

                int num = x % 10;
                divNums.add(num);

                x /= 10;
            }

            int n = divNums.size();

            for (int i = 0; i < n/2; i++) {
                int lastNum = n - i - 1;
                System.out.println(lastNum);
                if (divNums.get(i) != divNums.get(lastNum)) {
                    return false;
                }
            }
        }

        return true;

    }
}
