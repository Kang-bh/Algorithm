import java.util.Scanner;

public class Q9095 {
    static int T, N;
    static int[] dp;

    public static void setN() {
        dp = new int[11];
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
        for (int i = 4; i <= 10; i++) {
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
//            System.out.println(dp[i]);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        T = sc.nextInt();

        setN();
        for (int t = 1; t <= T; t++) {
            N = sc.nextInt();

            // dp[n] = dp[n-1] + dp[n-2] + dp[n-3]
            // n-1 생성 방식에 1 더하기
            // n-2 생성 방식에 2 더하기
            // n-3 생성 방식에 3 더하기
            System.out.println(dp[N]);
        }
    }
}