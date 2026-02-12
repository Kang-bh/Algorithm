package BaekJoon;

import java.util.*;


/*
* k가 소수 -> 0
* k가 합성수 ->
* */

public class Q3896 {

    public static void main(String[] args) {

        boolean [] arr = new boolean[1299709 + 1];

        Arrays.fill(arr, true);
        arr[0] = arr[1] = false;

        for (int i = 2; i <= 1299709; i++) {
            if (arr[i]) {
                for (int j = 2 * i; j <= 1299709; j += i) {
                    arr[j] = false;
                }
            }

        }

        List<Integer> primes = new ArrayList<>();
        for (int i = 2; i <= 1299709; i++) {
            if (arr[i]) primes.add(i);
        }


        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        for (int tc = 1; tc <= T; tc++) {
            int k = sc.nextInt();

            // 소수만 찾으면 된다.
            int s_index = 0;
            int e_index = primes.size() - 1;

//            System.out.println("s : " + s_index + " e : " + e_index) ;

            // 1. k가 소수인 경우 -> 0
            if (primes.contains(k)) {
//                System.out.println("1111");
                System.out.println(0);
            }
            else {

                // k 보다 큰 수 중 최소
                // k 보다 작은 수 중 최소
                int minPrime = 0;
                int maxPrime = 0;

                while (s_index < e_index) {
                    int mid = (s_index + e_index) / 2;
                    int num = primes.get(mid);
//                    System.out.println(num);
                    if (num < k) {
                        minPrime = num;
                        s_index = mid + 1;
                    } else if (num > k) {
                        maxPrime = num;
                        e_index = mid;
                    }

                }

                System.out.println(maxPrime-minPrime);
                // mid_e ~ e 의 최소 소수 찾기
            }
            // s~k 최대 소수
            // k~e 최소 소수




        }
    }
}