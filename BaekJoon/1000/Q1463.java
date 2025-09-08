package Q1463;

import java.util.*;
import java.io.*;

public class Q1463 {
    static int T, X;
    static final int INF = Integer.MAX_VALUE;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        X = Integer.parseInt(sc.nextLine());


        int[] dp = new int[X+1];
//        Arrays.fill(dp, Integer.MAX_VALUE);
        for (int i = X; i > 1; i--) {

            if (i%3 == 0) {
                int nextNum = i/3;
                if (dp[nextNum] == 0) {
                    dp[nextNum] = dp[i]+1;
                } else {
                    dp[nextNum] = Math.min(dp[nextNum], dp[i]+1);
                }
            }
            if (i%2 == 0) {
                int nextNum = i/2;
                if (dp[nextNum] == 0) {
                    dp[nextNum] = dp[i]+1;
                } else {
                    dp[nextNum] = Math.min(dp[nextNum], dp[i]+1);
                }
            }
            if (dp[i-1] == 0) {
                dp[i-1] = dp[i]+1;
            } else {
                dp[i-1] = Math.min(dp[i-1], dp[i]+1);
            }

        }
        System.out.println(dp[1]);
    }
}
