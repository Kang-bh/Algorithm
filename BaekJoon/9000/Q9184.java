package Q9012;

import java.util.*;
import java.io.*;

public class Q9184 {

    // 하나라도 0보다 작거나 같으면 return 1 -> 1
    // 20 초기화
    // a < b < c 인 경우 ->  a와 맞추기 위한 재귀
    // 아닌 경우 -> a는 기본으로 다 낮추기

    // top down 로직
    static int[][][] dp = new int[21][21][21];

    static int init(int a, int b, int c) {
        if (a <= 0 || b <= 0 || c <= 0) return 1;

        if (a > 20 || b > 20 || c > 20) return init(20, 20, 20);

        if (dp[a][b][c] != 0) return dp[a][b][c];

        if (a < b && b < c) {
            dp[a][b][c] = init(a, b, c-1) + init(a, b-1, c-1) - init(a, b-1, c);
            return dp[a][b][c];
        }

        return dp[a][b][c] = init(a-1, b, c) + init(a-1, b-1, c) + init(a-1, b, c-1) - init(a-1, b-1, c-1);
    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        StringTokenizer st;

        while (true) {
            int a, b, c;
            st = new StringTokenizer(br.readLine());
            a = Integer.parseInt(st.nextToken());
            b = Integer.parseInt(st.nextToken());
            c = Integer.parseInt(st.nextToken());

            if (a == -1 && b == -1 && c == -1) break;

            sb.append("w(").append(a).append(", ").append(b).append(", ").append(c).append(")").append(" = ").append(init(a, b, c)).append("\n");
        }

        System.out.print(sb.toString());
    }
}
