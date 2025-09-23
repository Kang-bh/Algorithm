package BaekJoon;

import java.util.*;
import java.io.*;

/*
* 정수 집합 S 속 좋은 구간
* 구간 [A, B]
* A < B
* A, B 사이 모든 정수는 좋은 집합 S에 속하지 않음
* n을 포함한 좋은 구간
*
* output : 좋은 구간 수
* */


public class Q1059 {

    private static int solve(int min, int max, int n) {
        int cnt = 0;
        int s = min+1;
        int e = 0;

        while (s != n+1) {
            e = s + 1;
            for (int i = e; i < max; i++) {
                if (s <= n && n <= i) cnt++;
            }

            s++;
        }

        return cnt;
    }

    public static void main(String[] args) throws Exception {
        // input
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int L = Integer.parseInt(br.readLine());

        int arr[] = new int[L];
        StringTokenizer st = new StringTokenizer(br.readLine());

        for (int i = 0; i < L; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        int n = Integer.parseInt(br.readLine());

        Arrays.sort(arr);

        int ans = 0;

        int min = 0;
        int max = 0;
        for (int i = 0; i < L; i++) {
            min = max;
            max = arr[i];
            if (min < n && n < max) {
                ans = solve(min, max, n);
                break;
            }
        }




        // logic

        System.out.println(ans);



    }

}