package Q2417;

import java.io.*;
import java.util.*;

public class Q2346 {

    static class Balloon {
        int index;
        int num;

        Balloon (int index, int num) {
            this.index = index;
            this.num = num;
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        StringBuilder sb = new StringBuilder();
        StringTokenizer st = new StringTokenizer(br.readLine());

        ArrayDeque<Balloon> dq = new ArrayDeque<>();

        for (int i = 0; i < N; i++) {
            int num = Integer.parseInt(st.nextToken());

            dq.addLast(new Balloon(i+1, num));
//            System.out.println("num : " + num);
        }



        while (true) {
            Balloon b = dq.pollFirst();
            int n = b.num;
            int index = b.index;
//            System.out.println("num : " + n + " index : " + index);
            sb.append(index).append(" ");


            if (dq.isEmpty()) break;


            if (n > 0) {
                n--;
                while (n!= 0) {
                    Balloon temp = dq.pollFirst();
                    dq.addLast(temp);
                    n--;
                }
            } else if (n < 0) {
                while (n!= 0) {
                    Balloon temp = dq.pollLast();
                    dq.addFirst(temp);
                    n++;
                }
            }

        }

        System.out.println(sb.toString());
    }
}
