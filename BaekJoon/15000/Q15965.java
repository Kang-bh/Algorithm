package BaekJoon;


import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class Q15965 {


    static final int lastNum = 7368787;
    static boolean [] primes = new boolean[lastNum + 1];

    private static void eratos () {

        Arrays.fill(primes, true);

        for (int i = 2; (i *i) <= lastNum; i++) {
            if(primes[i]) {
                for (int j = i*i; j <= lastNum; j += i) {
                    primes[j] = false;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int K = sc.nextInt();

        eratos();

        for(int i = 2; i <= lastNum; i++) {
//            System.out.println(primes[i] ? "YES" : "NO");
            if(primes[i]) {
                K--;
                if (K == 0) {
                    System.out.println(i);
                    break;
                }
            }
        }

    }
}