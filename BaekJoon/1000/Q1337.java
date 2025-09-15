package Q1337;

import java.util.*;
import java.io.*;

public class Q1337 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[] arr = new int[N];

        for (int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();
        }

        Arrays.sort(arr);

        int result = 4;

        int j = 0;
        for (int i = 0; i < N-1; i++) {
            while (j < N && arr[j] <= arr[i] + 4) {
                j+=1;
            }

            result = Math.min(result , 5 - j + i);
        }

        System.out.println(result);
    }
}