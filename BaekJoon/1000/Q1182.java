import java.io.*;
import java.util.*;

public class Q1182 {

    static int N, S;
    static int[] arr;
    static int answer = 0;

    public static void check(int sum, int index, int cnt) {



        if (index == N) {
            if ((sum == S) && (cnt > 0)) {
//            System.out.println("=================");
                answer+=1;
//            System.out.println("answer : " + answer);
            }
            return;
        }

//        System.out.println("11 index: " + index + ", sum: " + (sum + arr[index]) + ", cnt: " + (cnt+1));
        check(sum + arr[index], index + 1, cnt+1);
//        System.out.println("22 index: " + index + ", sum: " + sum + ", cnt: " + cnt);
        check(sum , index + 1, cnt);

        return;
    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        // input
        N = Integer.parseInt(st.nextToken());
        S = Integer.parseInt(st.nextToken());

        arr = new int[N];

        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(arr);

//        System.out.println(Arrays.toString(arr));

        // solve
        check(0, 0, 0);

        System.out.println(answer);
    }
}