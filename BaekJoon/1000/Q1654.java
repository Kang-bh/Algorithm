import java.io.*;
import java.util.*;

public class Q1654 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        // k개 랜선 n개 랜선 같은 길이로
        // 최소 n개 만들기
        int k = Integer.parseInt(st.nextToken());
        int n = Integer.parseInt(st.nextToken());

        long[] arr = new long[k];

        for (int i = 0; i < k; i++) {
            arr[i] = Long.parseLong(br.readLine());
        }

        Arrays.sort(arr);

        long max = arr[k-1];
        long min = 1;
        long mid = 0;
        long answer = 0;

        while (min <= max) {

            mid = min + (max - min) / 2;
            int count = 0;

            for (int i = 0; i < k; i++) {
                count += (arr[i] / mid);
            }
//            System.out.println("mid : " + mid + ", max : " + max + ", min : " + min + ", count : " + count);

            if (count >= n) {
                answer = Math.max(answer, mid);
                min = mid + 1;
            } else {
                max = mid - 1;
            }

        }

        System.out.println(answer);

    }
}