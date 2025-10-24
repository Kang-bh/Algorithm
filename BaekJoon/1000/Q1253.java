import java.util.*;
import java.io.*;

// 어던 수 - > 다른 수 두 개의 합으로 표현 -> "좋다(GOOD)"

public class Q1253 {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        int[] arr = new int[N];

        // input

        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(arr);

        int answer = 0;

        for (int i = 0; i < N; i++) {
            int num = arr[i];
            int start = 0;
            int end = N-1;
//            int mid = (start + (end - start))/2;

            while (start < end) {
//                mid = (start + (end - start))/2;
                if (start == i) {
                    start++;
                    continue;
                } else if (end == i) {
                    end--;
                    continue;
                }

                if (arr[start] + arr[end] == num) {
                    answer++;
                    break;
                } else if (arr[start] + arr[end] < num) {
                    start++;
                } else if (arr[start] + arr[end] > num) {
                    end--;
                }
            }
        }

        System.out.println(answer);
    }
}