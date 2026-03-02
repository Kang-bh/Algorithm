package Q2417;

import java.util.*;
import java.io.*;

public class Q2156 {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int[] arr = new int[n+1];
        int[][] dp = new int[n+1][3];
        // 0 : 이번 잔 안마심
        // 1 : 이번 잔 마시고 전 잔 안마심
        // 2 : 이번 잔 마시고 전 잔 마심

        for (int i = 1; i <= n; i++) {
            arr[i] = sc.nextInt();
        }

        dp[1][0] = 0;
        dp[1][1] = arr[1];


        for (int i = 2; i <= n; i++) {
            dp[i][0] = Math.max(Math.max(dp[i-1][1], dp[i-1][2]), dp[i-1][0]);
            dp[i][1] = dp[i-1][0] + arr[i];
            dp[i][2] = dp[i-1][1] + arr[i]; // i-1 먹은 걸로
//            System.out.println("i : " + i + " / dp[i][0] : " + dp[i][0] + "/ dp[i][1] : " + dp[i][1]);
        }

        System.out.println(Math.max(Math.max(dp[n][0], dp[n][1]), dp[n][2]));
    }
}
