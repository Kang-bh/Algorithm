import java.util.Scanner;

public class Q9461 {
    // 파도반 수열
    // DP

    static long arr[] = new long[101];

    public static void init() {
        // max : 100
        arr[0] = arr[1] = arr[2] = arr[3] = 1;
        arr[4] = arr[5] = 2;

        for (int i = 6; i <= 100; i++) {
            arr[i] = arr[i-1] + arr[i-5];

        }
    }

    public static void main(String[] args) throws Exception {
        // P(N) = P(N-1) + P(N-5)
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();
        init();

        for (int i = 0; i < T; i++) {
            System.out.println(arr[sc.nextInt()]);
        }
    }
}
