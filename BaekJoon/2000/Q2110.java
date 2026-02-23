package Q2417;

import java.io.*;
import java.util.*;

public class Q2110 {

    static int[] arr;
    static int answer = 0;

    static boolean recur(int distance, int cnt) {

        int n = 1;
        int lastInstalled = arr[0];
        // 설치로직
        for (int i = 1; i < arr.length; i++) {
            int currentHouse = arr[i];

            if (currentHouse - lastInstalled >= distance) {
                n++;
                lastInstalled = currentHouse;
            }

        }

        return n >= cnt;
    }

    public static void main(String[ ] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int C = Integer.parseInt(st.nextToken());

        arr = new int[N];

        for (int i = 0 ; i < N; i++) {
            arr[i] = Integer.parseInt(br.readLine());
        }

        Arrays.sort(arr);

        int start = 1;
        int end = arr[N-1] - arr[0];


        while (start <= end) {
            int mid = (start + end) / 2;

            if (recur(mid, C)) {
                answer = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        System.out.println(answer);;


    }
}
