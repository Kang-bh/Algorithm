import java.util.*;
import java.io.*;


// 다솜이 누구 찍을지 미리 읽을 수 있음
// 후보 N명
// 주민 M명
// 다솜이 1번

public class Q1417 {

//    static class Mem() implements Comparable<Mem>{
//        int id;
//        int votes;
//
//        Mem(int id, int votes) {
//            this.id = id;
//            this.votes = votes;
//        }
//
//        @Override
//        public int compareTo(Mem o) {
//            if (this.votes > o.votes) {
//                return 1;
//            } else if (this.votes == o.votes) {
//                if (this.id > o.id)  return 1;
//                else if (this.id < o.id) return -1;
//            } else return -1;
//            return 0;
//        }
//    }

    public static void main(String[] args) {

        PriorityQueue<Integer> pq = new PriorityQueue(Collections.reverseOrder());

        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int num = sc.nextInt();
        int cnt = 0;

        if (N > 1) {

            for (int i = 0; i < N-1; i++) {
                pq.add(sc.nextInt());
            }
            while (num <= pq.peek()) {
                int num1 = pq.poll();
                pq.add(num1-1);
                num+=1;
                cnt++;
            }
        }

        System.out.println(cnt);

    }
}