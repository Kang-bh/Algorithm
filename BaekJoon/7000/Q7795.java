import java.io.*;
import java.util.Arrays;
import java.util.Collections;
import java.util.StringTokenizer;

public class Q7795 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int T = Integer.parseInt(br.readLine());

        for (int i = 0; i < T; i++) {
            st = new StringTokenizer(br.readLine());
            int A = Integer.parseInt(st.nextToken());
            int B = Integer.parseInt(st.nextToken());

            int[] arrA = new int[A+1];
            int[] arrB = new int[B+1];

            st = new StringTokenizer(br.readLine());
            for (int a = 1; a <= A; a++) {
                arrA[a] = Integer.parseInt(st.nextToken());
            }

            st = new StringTokenizer(br.readLine());
            for (int b = 1; b <= B; b++) {
                arrB[b] = Integer.parseInt(st.nextToken());
            }

            Arrays.sort(arrA);
            Arrays.sort(arrB);

            int result = 0;

            for (int a = A; a >= 1; a--) {
                int b = B;
                while (arrB[b] >= arrA[a] && b >= 1) {
                    b--;
                }
                result += b;
            }

            System.out.println(result);
        }
    }
}