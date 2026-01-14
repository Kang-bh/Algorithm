package Q2417;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Q2559 {

    // 연속 인덱스의 온도 합 큰 값
    /* input
         N : 2 ~ 100000
         K : 1 ~ N
         N개의 정수

         1.순회
         2. 투 포인터
         O(N^2)
     */
    public static void main(String[] args) throws IOException {
        // input
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());

        int[] nums = new int[N];
        int max = Integer.MIN_VALUE;

        for (int i = 0 ; i < N; i++) {
            nums[i] = Integer.parseInt(st.nextToken());
        }

        // 2. solve
        for (int i = 0; i < N-K+1; i++) {
            int sum = 0;
            // 범위 내 합치기
            for (int j = i; j < i + K; j++) {
                sum += nums[j];
            }

            max = Math.max(sum, max);
        }

        System.out.println(max);

    }
}