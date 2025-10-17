package Q15663;

import java.io.*;
import java.lang.reflect.Array;
import java.util.*;

public class Q15663 {
    static LinkedHashSet<String> result = new LinkedHashSet<>();
    static int N, M;
    static int[] arr;
    static boolean[] visited;
    static int[] output;
    static void solve(int depth) {
        // 순서 존재 => 순열
        if (depth == M) {
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < M; i++) {
                sb.append(output[i]).append(" ");
            }
            String key = sb.toString();
            result.add(key);
            return;
        }

        for (int i = 0; i < N; i++) {
            if (visited[i] != true) { // 방문x
                visited[i] = true;
                output[depth] = arr[i];
                solve(depth + 1);
                visited[i] = false;
            }
        }

        return;

    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        // input
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        arr = new int[N];
        output = new int[M];
        visited = new boolean[N];

        st = new StringTokenizer(br.readLine());

        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(arr);

        // solve
        solve(0);

        for (String key : result) System.out.println(key);
    }
}