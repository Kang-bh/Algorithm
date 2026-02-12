
import java.util.*;

public class Q3020 {
    // 개똥벌레
    // Result
    // 장애물 최솟값, 해당 구간의 수


    static int uppderBinarySearch(int[] arr, int num) {
        // 중복값 존재 -> upper bound 특정 값 x이하를 만족하는 값들중 위치가 가장 큰 값

        int low = 0;
        int high = arr.length - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] <= num) {
                low = mid + 1;
            } else {
                high = mid  - 1;
            }
        }

        return high;
    }

    static int lowerBinarySearch(int[] arr, int num) {
        // 중복값 존재 -> upper bound 특정 값 x이하를 만족하는 값들중 위치가 가장 큰 값

        int low = 0;
        int high = arr.length - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] >= num) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return arr.length - low; // low => arr.length - low
    }


    static void main(String args[]) throws Exception {
        // 길이 : N 석순 , 종유석 순 (아래 위)
        // 높이 : H
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int H = sc.nextInt();

        int[] arr1 = new int[N/2]; // 석순
        int[] arr2 = new int[N/2]; // 종유석
        int[] sum = new int[H+1];

        // 입력 시에
        for (int i = 0; i < N/2; i++) {
            arr1[i] = sc.nextInt();
            arr2[i] = sc.nextInt();
        }

        // 순서 상관 없으니 sort
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        int min_value = Integer.MAX_VALUE;
        int cnt = 0;

        // 이분 탐색_
        for (int h = 1;  h <= H; h++) {
            // arr1, arr2 이분 탐색
//            int num1 = uppderBinarySearch(arr1, h);
//            int num2 = lowerBinarySearch(arr2, h);

            int num1 = lowerBinarySearch(arr1, h);
            int num2 = lowerBinarySearch(arr2, H - h + 1); // .해당 로직 이해

            int num = num1 + num2;
            if (min_value > num) {
                min_value = num;
                cnt = 1;
            } else if (min_value == num) cnt++;
        }

        // min 찾으면서 구간합 구하기
        // min count하기

        System.out.println(min_value + " " + cnt);

    }
}
