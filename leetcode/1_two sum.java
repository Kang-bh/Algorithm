/*
    1 아이디어 : nums.length 가 최대 10^4 이기에 완전탐색 수행
    2 시간복잡도 : O(n*m)
    3 자료구조 : 배열
 */


class Solution {
    public int[] twoSum(int[] nums, int target) {
        int sum;
        int n = nums.length;
        int[] results = new int[2];
        
        for (int i = 0; i < n; i++) {
            sum = 0;
            sum += nums[i];
            for (int j = i+1; j < n; j++) {
                if (sum + nums[j] == target) {
                    results[0] = i;
                    results[1] = j;
                    break;
                }
            }
        }

        return results;
    }
}
