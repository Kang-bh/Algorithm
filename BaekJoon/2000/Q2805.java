
import java.util.*;
import java.io.*;
/*
* 나무 M미터
*
* 높이 H 설정, 나무 높이 M이면 M-H 획득 후 나무는 H가 된다. (M > H)
* 높이 H의 최댓값 설정
* */

public class Q2805 {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        int trees[] = new int [N];

        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            trees[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(trees);
        // 잘랐을 때 M 이상이면서 최소값
        long result = 0;

        int start = 0;
        int end = trees[N-1];

        while (start < end) {
            int mid = (start + end) / 2;
            long cnt = 0;
            for (int i = 0; i < N; i++) {
                long l = (trees[i] - mid > 0) ? trees[i] - mid : 0; ;
                cnt += l;
            }

            if (cnt >= M) {
                result = Math.max(result, mid);
                start = mid + 1;
            } else if (cnt < M) {
                end = mid;
            }
        }

        System.out.println(result);
    }
}