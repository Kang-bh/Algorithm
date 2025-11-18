import java.util.Scanner;

public class Q1978 {

    static boolean[] arr = new boolean[1001];

    public static void checkEratos () {
        arr[1] = false;

        for (int i = 2 ; i <= 1000; i++) {
            arr[i] = true;
        }

        for (int i = 2; i * i <= 1000; i++) {
            if (!arr[i]) continue;
            arr[i] = true;
            for (int j = i * i; j <= 1000; j += i) {
                arr[j] = false;
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        checkEratos();

        int N = sc.nextInt();
        int answer = 0;
        for (int i = 1; i <= N; i++) {
            int num = sc.nextInt();
//            System.out.println("num : " + num + " : " + arr[num]);
            if (arr[num]) answer++;
        }

        System.out.println(answer);
    }
}