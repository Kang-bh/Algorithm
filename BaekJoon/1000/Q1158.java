package Q1158;


/*
* 요세푸스 문제
*
* 1 ~ N, N명의 사람
* 양수 K
* 순서대로 K번째 사람 제거
*
* */

import java.util.*;

public class Q1158 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();

        Deque<Integer> deque = new ArrayDeque<>();

        for (int i = 1; i <= N; i++) {
            deque.addLast(i); // 1 2 3 4 ~~ N
        }
        System.out.print("<");

        while (deque.size() != 1) {
            for (int i = 1; i < K; i++) {
                int num = deque.removeFirst();
                deque.addLast(num);
            }
            System.out.print(deque.removeFirst() + ", ");
        }
        System.out.print(deque.removeFirst());
        System.out.println(">");

    }
}