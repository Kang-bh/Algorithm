class Solution {
    public int romanToInt(String s) {
        int result = 0;
        int maxLength = s.length();
        
        // 순회하면서 이전 값 다음 값 비교
        // 이전 값 < 다음 값 : 다음값 - 이전 값
        // 이접 값 = 다음 값 : 더하기
        // 이전 값 > 다음 값 : 더하기
        // two pointer

        for (int i = 0; i < maxLength -1; i++) {

            char prev = s.charAt(i);
            char next = s.charAt(i+1);

            int prevNum = getValue(prev);
            int nextNum = getValue(next);

            if (prevNum < nextNum) {
                result -= prevNum;
            } else {
                result += prevNum;
            }
        }

        return result + getValue(s.charAt(maxLength - 1));
    }

    private int getValue(char c) {
        switch (c) {
            case 'I' : return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
            default : return 0;
        }
    }
}