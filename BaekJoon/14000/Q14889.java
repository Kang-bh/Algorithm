import java.util.*;
import java.io.*;

public class Q14889 {

    static int arr[][];
    static int N;
    static int answer = Integer.MAX_VALUE;

    static void solve(int[] start, boolean[] visited, int cnt, int index) {
        // 스타트팀 : true
        // 스타트팀 배정 수 : cnt -> 2/N 이면 종료

        if (cnt == N/2) {
            // 능력치 비교
            List<Integer> linkList = new ArrayList<Integer>();
            for (int i = 0; i < N; i++) {
                if(!visited[i]) linkList.add(i);
            }

            int[] link = linkList.stream()
                    .mapToInt(Integer::intValue)
                    .toArray();

            int num1 = cal(start);
            int num2 = cal(link);

            answer = Math.min(answer, Math.abs(num1-num2));

            return;
        } else if (cnt > N/2) {
            return;
        }
        if (index >= N) return;

        start[cnt] = index;
        visited[index] = true;
        solve(start, visited, cnt+1, index+1);
        visited[index] = false;
        solve(start, visited, cnt, index+1);
    }

    static int cal(int[] start) {
        int res = 0;

        for (int i = 0; i < N/2-1; i++) {
            for (int j = i+1; j < N/2; j++) {
                int a = start[i];
                int b = start[j];
                res += (arr[a][b] + arr[b][a]);
            }
        }

        return res;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        N = Integer.parseInt(st.nextToken());

        arr = new int[N][N];
        int visited[] = new int[N];

        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < N; j++) {
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        solve(new int[N/2], new boolean[N], 0, 0);

        System.out.println(answer);
    }
}
