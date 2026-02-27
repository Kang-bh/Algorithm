package Q2417;

import java.util.*;
import java.io.*;

public class Q2630 {

    // 1 : 파란색
    // 0 : 하얀색
    static int white = 0;
    static int blue = 0;
    static int[][] arr;

    static void recur(int k, int startX, int startY) {
        if (k == 1) {
            // 색종이 확인 후 count
            if (arr[startX][startY] == 1) blue++;
            else white++;
            return;
        }

        if (check(startX, startX+k, startY, startY+k)) {
            if (arr[startX][startY] == 1) blue++;
            else white++;
            return;
        }

        // 검사 후 재분할
        // divide and conquer
        // 4분할
        // 색종이면 count
        // 색종이 아니면 다시 재분할
        recur(k/2, startX, startY);
        recur(k/2, startX + k/2, startY);
        recur(k/2, startX, startY + k/2);
        recur(k/2, startX + k/2, startY + k/2);


    }

    static boolean check(int startX, int endX, int startY, int endY) {
        int check = arr[startX][startY];

        for (int i = startX; i < endX; i++) {
            for (int j = startY; j < endY; j++) {
                if(check != arr[i][j]) return false;
            }
        }

        return true;
    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        StringTokenizer st;

        arr = new int[N][N];

        for (int i = 0 ; i < N; i++) {
            st = new StringTokenizer(br.readLine());

            for (int j = 0; j < N; j++) {
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        recur(N, 0, 0);

        System.out.println(white);
        System.out.println(blue);
    }
}
