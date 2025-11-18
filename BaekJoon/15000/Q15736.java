import java.util.Scanner;

// 출전 번째의 배수들은 뒤집기
// 1 진행 후 모두 백색


public class Q15736 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        // 어떤 수의 제곱만 백색
        int answer = 0;
        for (int i = 1; i * i <= N; i++) {
            answer = i;
        }

        System.out.println(answer);
    }
}