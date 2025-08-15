package BaekJoon.Q1747;

// 소수 + 팰린드롬 구하기
// N 보다 크거나 같은 수

import java.util.Arrays;
import java.util.Scanner;

public class Q1747 {

    static final int lastNum = 2000000;
    static boolean[] nums = new boolean[lastNum + 1];

    private static void eratos() {
        Arrays.fill(nums, true);

        nums[0] = false;
        nums[1] = false;

        for (int i = 2; (i*i) <= lastNum; i++) {
            if (nums[i]) { // 소수이면
                for (int j = i*i; j <= lastNum; j += i) {
                    // 배수들 모두 false 처리
                    nums[j] = false;
                }
            }
        }
    }

    private static boolean checkPalindrome(String num) {
        int length = num.length();

        for (int i = 0; i < length / 2; i++) { // 0 1 2 3 4
            if (num.charAt(i) != num.charAt(length- i - 1)) {
                return false;
            }
        }

        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        eratos();

        for (int i = N; i < lastNum; i++) {
            if (nums[i]) {
                if (checkPalindrome(Integer.toString(i))) {
                    System.out.println(i);
                    break;
                }
            }
        }

    }

}