import java.util.*;
import java.io.*;

// 거점 세워 그 곳을 방문해 선물 충전
// 가장 가치가 큰 선물 하나 선물

public class Q14235 {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());

        StringBuilder sb = new StringBuilder();

        int n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            int a = sc.nextInt();

            if (a == 0) {
                if (pq.size() > 0) {
                    sb.append(pq.poll()).append("\n");
                } else {
                    sb.append("-1").append("\n");
                }
            }

            for (int j = 0; j < a; j++) {
                int num = sc.nextInt();
                pq.add(num);
            }

        }

        System.out.println(sb.toString());
    }
}