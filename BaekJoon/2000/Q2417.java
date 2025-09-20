package Q2417;
import java.math.BigInteger;
import java.util.*;

/*
* 정수 -> 정수 젲곱근 구하기
* q^2 >= n : 오버플로우 가능
* q >= sqrt(n)
* */
public class Q2417 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();

        BigInteger bigN = BigInteger.valueOf(n);
        BigInteger start = BigInteger.ZERO;
        BigInteger end = bigN;
        BigInteger mid;

        while (start.compareTo(end) < 0) {
            mid = start.add(end).divide(BigInteger.valueOf(2));

            BigInteger sqrt = mid.multiply(mid);

            if (sqrt.compareTo(bigN) < 0) {
                start = mid.add(BigInteger.ONE);
            } else {
                end = mid;
            }

        }

        System.out.println(start);
    }

}