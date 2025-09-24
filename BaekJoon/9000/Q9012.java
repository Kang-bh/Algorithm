package Q9012;

/*
* 괄호 문자열 PS (, )
* () => 기본 VPS
*  x가 기본 VPS -> (x) 또한 VPS
* x, y VPS -> xy (VPS)
* (())(), ((())) => vps
* (()( =:> VPS X
* */

import java.util.*;
import java.io.*;

public class Q9012 {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int T = Integer.parseInt(br.readLine());

        for (int i = 0; i < T; i++) {
            String str = br.readLine();

            // solve
            Deque<Character> deque = new ArrayDeque<>();

            int cnt = 0;


            for (int j = 0; j < str.length(); j++) {
                deque.addLast(str.charAt(j));
            }


            // ) 먼저 나와서 해당 개수 만큼 ( 나와야 정상처리
            // ) -> cnt ++;
            // ( -> cnt --;
            // cnt가 있으면서 ) 가 나오면 추가
            // cnt가 있으면서 ( 나오면 계속 ( 나와야함
            // (, ) 존재 확인 필요
            // (()()) ((()))

            boolean check = false; // ( 나와야하는 차례인지 확인

            while (!deque.isEmpty()) {
                char c = deque.removeLast();

                if (cnt == 0 && c == '(') {
                    cnt--;
                    break;
                } else if (cnt >= 0 && c == ')') {
                    cnt += 1;
                } else if (cnt > 0 && c == '(') {
                    cnt--;
                }
            }

//            System.out.println(cnt);
//            System.out.println(deque.isEmpty());

            if (deque.isEmpty() && cnt == 0) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        // ((()()(()))(((())))()
    }

}