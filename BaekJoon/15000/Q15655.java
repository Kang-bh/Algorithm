import java.util.*;
import java.io.*;

public class Q15655 {
    static Set<String> data = new LinkedHashSet<>();

    static void solve(int[] arr, int[] output, boolean[] visited, int depth, int M, int N, int index) {

        if (index == N && depth < M) return;

        if (depth == M) {
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < M; i++) {
                sb.append(output[i] + " ");
            }
            data.add(sb.toString());
            return;

        }

        if (depth < M) {
            visited[index] = true;
            output[depth] = arr[index];
            solve(arr, output, visited, depth + 1, M, N, index + 1);
            visited[index] = false;
            solve(arr, output, visited, depth, M, N, index + 1);
        }
    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        int[] arr = new int[N];
        int[] output = new int[M];
        boolean[] visited = new boolean[N];
        st = new StringTokenizer(br.readLine());

        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(arr);

        solve(arr, output, visited, 0, M, N, 0);

        for (String s : data) {
            System.out.println(s);
        }

    }
}