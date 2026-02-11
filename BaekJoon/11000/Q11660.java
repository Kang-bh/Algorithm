import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Q11660 {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        StringBuilder sb = new StringBuilder();

        // input
        // N, M : 표 크기 합
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        int arr[][] = new int[N][N];
        int sum[][] = new int[N+1][N+1];

        for (int i = 0 ; i < N; i++) { // x
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < N; j++) { // y
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        // 시간 초과 처리를 위한 구간합처리
//        sum[0][0] = arr[0][0];
//
//        for (int i = 1; i < N; i++) {
//            sum[i][0] = sum[i-1][0] + arr[i][0];
//        }
//
//        for (int i = 1; i < N; i++) {
//            sum[0][i] = sum[0][i-1] + arr[0][i];
//        }

        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                sum[i][j] = sum[i][j-1] + sum[i-1][j] - sum[i-1][j-1] + arr[i-1][j-1];
            }
        }

//        for (int i = 0; i <= N; i++) {
//            for (int j = 0; j <= N; j++) {
//                System.out.print(sum[i][j] + " ");
//            }
//            System.out.println();
//        }


        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            // solve
            int res = 0;
            int x1 = Integer.parseInt(st.nextToken());
            int y1 = Integer.parseInt(st.nextToken());
            int x2 = Integer.parseInt(st.nextToken());
            int y2 = Integer.parseInt(st.nextToken());

//            for (int x = x1-1; x <= x2-1; x++) {
//                for (int y = y1-1; y <= y2-1; y++) {
//                    res += arr[x][y];
//                }
//            }

            res = sum[x2][y2] - sum[x2][y1-1] - sum[x1-1][y2] + sum[x1-1][y1-1];

            System.out.println(res);
        }

    }
}
