import java.util.*;
import java.io.*;

public class Q1149 {

    static int[][] cost; // 0 : r, 1 : g, 2 : b
//    static int[] green_cost;
//    static int[] blue_cost;

    static int[][] dp;

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        StringTokenizer st;
        cost = new int[3][N];
        dp = new int[3][N];

        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            int red = Integer.parseInt(st.nextToken());
            int green = Integer.parseInt(st.nextToken());
            int blue = Integer.parseInt(st.nextToken());

            cost[0][i] = red;
            cost[1][i] = green;
            cost[2][i] = blue;
        }

        // 인접한 집들과 같은 색이면 안된다.
        int[] choices = new int[3];
        dp[0][0] = cost[0][0];
        dp[1][0] = cost[1][0];
        dp[2][0] = cost[2][0];
        choices[0] = 0;
        choices[1] = 1;
        choices[2] = 2;

        for (int i = 1; i < N; i++) { // 페인트질 하는 집
            // 빨간색 칠 : 이전 것이 파란색 또는 초록색 중 최소
            dp[0][i] = cost[0][i] + Math.min(dp[1][i-1], dp[2][i-1]);
            // 초록색 칠
            dp[1][i] = cost[1][i] + Math.min(dp[0][i-1], dp[2][i-1]);
            // 파란색 칠
            dp[2][i] = cost[2][i] + Math.min(dp[0][i-1], dp[1][i-1]);
        }

        int answer = Math.min(Math.min(dp[0][N-1], dp[1][N-1]), dp[2][N-1]);
        System.out.println(answer);

    }
}
