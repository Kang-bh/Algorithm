
// N과 M(7)


import java.io.*;
import java.util.*;

public class Q15656 {

    static int[] arr;
    static int N;
    static int M;
    static int[] output;
    static StringBuilder sb = new StringBuilder();

    public static void solve(int depth) {
        if (depth == M) {
            // sb 추가, output 내용 이용
            for (int i = 0; i < M; i++) {
                sb.append(output[i]);
                sb.append(" ");
            }
            sb.append("\n");
            return;
        }

        for (int i = 0; i < N; i++) {
            output[depth] = arr[i];
            solve(depth + 1);
        }

    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        output = new int[M];

        st = new StringTokenizer(br.readLine());

        arr = new int[N];
        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(arr);

        solve(0);

        System.out.println(sb.toString());


    }
}
