import java.util.*;
import java.io.*;

public class Q24416 {

    static int cnt1 = 1;
    static int cnt2 = 0;
    static int[] arr;

    static int fibo_recur(int n) {

        if (n == 1 || n == 2) {
            return 1;
        } else {
            cnt1++;
            return fibo_recur(n - 1) + fibo_recur(n - 2);
        }
    }

    static int fibo_dp(int n) {
        arr = new int[n + 1];

        arr[1] = arr[2] = 1;

        for (int i = 3; i <= n; i++) {
            arr[i] = arr[i - 1] + arr[i - 2];
            cnt2++;
        }

        return arr[n];

        // n-2
    }

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        fibo_dp(n);
        fibo_recur(n);

        System.out.print(cnt1 + " " + cnt2);
    }
}