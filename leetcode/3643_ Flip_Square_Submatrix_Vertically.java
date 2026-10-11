class Solution {
    public int[][] reverseSubmatrix(int[][] grid, int x, int y, int k) {
        // 1. m, n 선언
        int m = grid.length;
        int n = grid[0].length;

        // 2. 세로로 k//2 만큼 swap
        for (int i = 0; i < k/2; i++) {
            for (int j = 0; j < k; j++) {
                int temp = grid[x + i][y + j];
                grid[x + i][y + j] = grid[x + k - 1 - i][y + j];
                grid[x + k - 1 - i][y+j] = temp;
            }
        }

        return grid;
    }
}
