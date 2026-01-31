package BJ;

import java.util.*;
// 카드 놀이
public class Q3231 {
    // 박수 -> 맨 마지막으로 간 경우

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

//        Queue<int> q1 = new ArrayDeque<>();
//        Queue<Integer> q2 = new ArrayDeque<>();
        int N = sc.nextInt();
        int arr[] = new int[N+1];

        for (int i = 1; i <= N; i++) {
            arr[sc.nextInt()] = i;
        }

        int result = 0;
        int matchNum = 1;

        for (int i = 0; i < N; i++) {
            if (arr[i] > arr[i + 1]) result++;
        }

        System.out.println(result);

    }
}
