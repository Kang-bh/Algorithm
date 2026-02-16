import java.util.*;
import java.io.*;

// 인간 -컴퓨터 상호작용

public class Q16139 {
    public static void main(String[] args) throws IOException {
        // input
        // S, a, [l, r]
        int[][] cnt = new int[26][200_001];

        StringBuilder sb = new StringBuilder();


        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        String s = br.readLine();
        int len = s.length();

        int T = Integer.parseInt(br.readLine());

        // 누적합 처리
        for (int i = 0; i < 26; i++) {
            int sum = 0;
            char c = (char) (i + 'a');

            for (int j = 1; j <= len; j++) {
                if (c == s.charAt(j-1)) {
                    sum += 1;
//                    System.out.println("c : " + c + " sum : " + sum);
                }
                cnt[i][j] = sum;

            }
        }

        for (int i = 0; i < T; i++) {
            st = new StringTokenizer(br.readLine());
            char c = st.nextToken().charAt(0);
            int start = Integer.parseInt(st.nextToken());
            int end = Integer.parseInt(st.nextToken());

            int index = c - 'a';

//            System.out.println("====================================");
//            System.out.println("cnt[index][end] : " + cnt[index][end]);
//            System.out.println("cnt[index][start] : " + cnt[index][start]);
            int res = cnt[index][end+1] - cnt[index][start];
            sb.append(res).append("\n");
        }

        System.out.println(sb.toString());

    }
}
