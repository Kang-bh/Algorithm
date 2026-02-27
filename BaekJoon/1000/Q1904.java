package BaekJoon;

import java.util.*;
import java.io.*;

public class Q1904 {

    static int[] arr = new int[1_000_001];

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        arr[1] = 1;
        arr[2] = 2;

        for (int i = 3; i < 1_000_001; i++) {
            arr[i] = (arr[i-1] + arr[i-2]) % 15746;
        }

        System.out.println(arr[N]);
    }
}
