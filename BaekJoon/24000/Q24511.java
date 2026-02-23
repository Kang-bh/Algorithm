import java.util.*;
import java.io.*;

public class Q24511 {
    // queuestack

    // 1 -> stack : 그대로
    // 0 -> queue : 수 변화

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        StringBuilder sb = new StringBuilder();

        int N = Integer.parseInt(br.readLine());
        boolean[] types = new boolean[N];
        int[] nums = new int[N];

        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            int type = Integer.parseInt(st.nextToken());
            if (type == 0) {
                types[i] = false; // 큐
            } else {
                types[i] = true; // 스
            }
        }

        st = new StringTokenizer(br.readLine());
        ArrayDeque<Integer> dq = new ArrayDeque<>();

        for (int i = 0; i < N; i++) {
            int n = Integer.parseInt(st.nextToken());
            if (!types[i]) {
                // 큐 이면
                dq.addFirst(n);
            }
        }

        // array가 아닌 ArrayDeque로

        int M = Integer.parseInt(br.readLine());
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < M; i++) {
            int num = Integer.parseInt(st.nextToken());

            dq.addLast(num);
            sb.append(dq.pollFirst()).append(" ");
        }
        System.out.println(sb.toString());
    }
}
