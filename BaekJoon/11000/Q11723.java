import java.io.*;
import java.util.*;

public class Q11723 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Set<Integer> set = new HashSet<Integer>();
        int M = Integer.parseInt(br.readLine());
        StringBuilder sb = new StringBuilder();

        StringTokenizer st;

        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            String s = st.nextToken();
            int x;
            boolean exist;
            switch (s) {
                case "add":
                    x = Integer.parseInt(st.nextToken());
                    set.add(x);
                    break;
                case "remove":
                    x = Integer.parseInt(st.nextToken());
                    set.remove(x);
                    break;
                case "check":
                    x = Integer.parseInt(st.nextToken());
                    exist = set.contains(x);
//                    System.out.println(exist ? "YES" : "NO");
                    if (exist) sb.append(1).append("\n");
                    else sb.append(0).append("\n");
                    break;
                case "toggle":
                    x = Integer.parseInt(st.nextToken());
                    exist = set.contains(x);
                    if (exist) set.remove(x);
                    else set.add(x);
                    break;
                case "all" :
                    for (int j = 1; j < 21; j++) {
                        set.add(j);
                    }
                    break;
                case "empty":
                    for (int j = 1; j < 21; j++) {
                        set.remove(j);
                    }
                    break;
            }
        }

        System.out.print(sb.toString());
    }
}