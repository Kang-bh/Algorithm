import java.util.Scanner;

public class Q2193 {

    static int N;
    static long [] dp;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();

        dp = new long[91];
        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 2;
        for (int i = 4; i <= 90; i++) {
            dp[i] = dp[i-4] * 2 + dp[i-3] * 3;
        }

        System.out.println(dp[N]);

    }

}