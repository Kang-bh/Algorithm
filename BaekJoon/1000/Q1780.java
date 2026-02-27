package BaekJoon;

import java.util.*;
import java.io.*;

// 종이의 개수
public class Q1780 {

    static int[][] arr;
    static int first, second, third = 0;

    public static void divide(int k, int startX, int startY) {
        // 정복 확인
        if (k == 1) {
            if (arr[startX][startY] == -1) first++;
            else if (arr[startX][startY] == 0) second++;
            else third++;
            return;
        }

        if (check(startX, startX + k, startY, startY + k)) {
            if (arr[startX][startY] == -1) first++;
            else if (arr[startX][startY] == 0) second++;
            else third++;
            return;
        }

        for (int i = 0; i < 3; i++) { // x
            for (int j = 0; j < 3; j++) { // y
                int offsetX = i * (k / 3);
                int offsetY = j * (k / 3);
                divide(k/3, startX + offsetX, startY + offsetY);
            }
        }

        return;

        // divide
    }

    public static boolean check(int startX, int endX, int startY, int endY) {
        int num = arr[startX][startY];

        for (int x = startX; x < endX; x++) {
            for (int y = startY; y < endY; y++) {
                if (num != arr[x][y]) return false;
            }
        }

        return true;
    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        StringTokenizer st;

        arr = new int[N][N];

        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < N; j++) {
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        divide(N, 0, 0);

        System.out.println(first);
        System.out.println(second);
        System.out.println(third);

    }
}
