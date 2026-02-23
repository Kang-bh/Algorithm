import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Q13305 {
    // 주유소

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int N = Integer.parseInt(br.readLine());
        long[] dist = new long[N+1]; // 0~1 : 1
        long[] city = new long[N+1];

        st = new StringTokenizer(br.readLine());
        for (int i = 1; i < N; i++) {
            dist[i] = Long.parseLong(st.nextToken());
        }

        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            city[i] = Long.parseLong(st.nextToken());
        }

        long sum = 0;
        long dist_sum = 0;

        long cur = city[0];

        for (int i = 1; i <= N; i++) {

            dist_sum += dist[i];
            if (cur > city[i]) {
                sum += dist_sum * cur;
//                System.out.println("cur : " + cur);
//                System.out.println("dist_sum : " + dist_sum);
//                System.out.println("sum : " + sum);
//                System.out.println("==================");
                dist_sum = 0;
                cur = city[i];
            }
        }

        System.out.println(sum);

    }
}
