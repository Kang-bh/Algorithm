package programmers;
// https://school.programmers.co.kr/learn/courses/30/lessons/172927
public class 광물_캐기 {
    static int answer = Integer.MAX_VALUE;

    public int cal(String mineral, int pick) {
        if (pick == 0) return 1;
        else if (pick == 1) {
            if (mineral.equals("diamond")) return 5;
            return 1;
        } else {
            if (mineral.equals("diamond")) return 25;
            else if (mineral.equals("iron")) return 5;
            return 1;
        }
    }

    public int totalCal(String[] minerals, int index, int pick) {
        int sum = 0;
        int maxIndex = (minerals.length > index + 5) ? index + 5: minerals.length;
        for (int i = index; i < maxIndex; i++) {
            sum += cal(minerals[i], pick);
        }

        return sum;
    }

    public void solve(int diaCount, int ironCount, int stoneCount, String[] minerals, int n, int index, int cnt) {
        // 종료 조건
        if (diaCount == 0 && ironCount == 0 && stoneCount == 0) {
            answer = Math.min(cnt, answer);
            return;
        }

        if (n <= index) {
            answer = Math.min(cnt, answer);
            return;
        }
        // 계산, 한 번에 다섯개
        if (diaCount > 0) {
            int num = totalCal(minerals, index, 0);
            solve(diaCount-1, ironCount, stoneCount, minerals, n, index+5, cnt+num);
        }

        if (ironCount > 0) {
            int num = totalCal(minerals, index, 1);
            solve(diaCount, ironCount-1, stoneCount, minerals, n, index+5, cnt+num);
        }

        if (stoneCount > 0) {
            int num = totalCal(minerals, index, 2);
            solve(diaCount, ironCount, stoneCount-1, minerals, n, index+5, cnt+num);
        }

    }

    public int solution(int[] picks, String[] minerals) {

        // picks 의 sum이 minerals의 길이보다 큰 경우 -> 곡괭이 부족
        // picks 의 sum이 minerals의 길이보다 작은 경우 -> 광물 다 캐는 경우
        int n = minerals.length;


        solve(picks[0], picks[1], picks[2], minerals, n, 0, 0);

        return answer;
    }
}
