import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Q11659 {

    static int[] arr;
    static int[] sum_arr;
    static int N;
    static int M;

//    public static int solve(int start, int end) {
//        int sum = 0;
//        for (int i = start; i <= end; i++) {
//            sum += arr[i];
//        }
//
//        return sum;
//    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        arr = new int[N];
        sum_arr = new int[N+1];

        // 구간합 미리 구하기
        st = new StringTokenizer(br.readLine());

        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
//            if (i == 0) {
            sum_arr[i+1] = sum_arr[i] + arr[i];
//            } else if (i != 0) {
//                sum_arr[i] = sum_arr[i-1] + arr[i];
//            }
        }

//        for (int i = 0; i < N; i++) {
//            System.out.print(sum_arr[i] + " ");
//        }
//        System.out.println();

        for (int a = 0; a < M; a++) {
            st = new StringTokenizer(br.readLine());
            int i = Integer.parseInt(st.nextToken());
            int j = Integer.parseInt(st.nextToken());
//            System.out.println(solve(i-1, j-1));
            System.out.println(sum_arr[j] - sum_arr[i-1]);
        }
    }
}
