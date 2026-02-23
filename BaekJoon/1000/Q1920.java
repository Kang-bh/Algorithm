package BaekJoon;

import java.io.*;
import java.util.*;

public class Q1920 {

//    static long[] arr;

    static Set<Long> data = new TreeSet<>();

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        int N = Integer.parseInt(br.readLine());

        StringTokenizer st = new StringTokenizer(br.readLine());

//        arr = new long[N];

        for (int i = 0; i < N; i++) {
//            arr[i] = Long.parseLong(st.nextToken());

            data.add(Long.parseLong(st.nextToken()));
        }

        int M = Integer.parseInt(br.readLine());

        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < M; i++) {
            long num = Long.parseLong(st.nextToken());
            if (data.contains(num)) sb.append(1).append('\n');
            else sb.append(0).append('\n');
        }

        System.out.println(sb.toString());

    }
}
