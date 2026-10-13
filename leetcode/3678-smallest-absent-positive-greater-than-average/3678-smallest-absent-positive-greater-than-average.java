import java.util.*;

class Solution {
    public int smallestAbsent(int[] nums) {
        // 존재하지 않는 최소값 찾기
        // 평균값보다 큰
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
        }

        int avg = (sum / nums.length) + 1;

        Set<Integer> set = new HashSet<>();

        for (int num : nums) set.add(num);

        if (avg <= 0) {
            avg = 1;
        }

        while (true) {
            if (set.contains(avg)) avg+=1;
            else return avg;
        }

    }
}