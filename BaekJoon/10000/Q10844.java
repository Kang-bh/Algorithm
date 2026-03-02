package Q10828;

import java.util.Scanner;

public class Q10844 {
    static long div = 1_000_000_000;

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        long[][] dp = new long[N+1][10]; //
        // j : -1 -> 0, 0 -> 1, ... , 9 -> 10, 10 -> 11
        // 1 arr : 1 ~ 9 =>

        for (int i = 1; i <= 9; i++) dp[1][i] = 1;

        // i 번째 자리수에서 1차이 나는거 선책하는 과정으로 처리
        for (int i = 2; i <= N; i++) {
            dp[i][0] = dp[i-1][1] % div;
            for (int j = 1; j <= 8; j++) { // 0 ~ 11 :j -1
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % div;
            }
            dp[i][9] = dp[i-1][8] % div;
        }
        long answer = 0;

        for (int i = 0; i <= 9; i++) {
//            System.out.print(dp[N][i] + " ");
            answer += dp[N][i];
        }
//        System.out.println();

        System.out.println(answer % div);

    }

}
