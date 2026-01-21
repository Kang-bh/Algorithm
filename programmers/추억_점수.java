package programmers;

import java.util.*;

public class 추억_점수 {
    public int[] solution(String[] name, int[] yearning, String[][] photo) {

        Map<String, Integer> scores = new HashMap<String, Integer>();
        // int[] answer = {};
        int n = name.length;

        for (int i = 0; i < n; i++) {
            scores.put(name[i], yearning[i]);
        }

        int l = photo.length;

        int[] answer = new int[l];
        for (int i = 0; i < l; i++) {
            String[] p = photo[i];
            int sum = 0;
            for (int j = 0; j < p.length; j++) {
                String key = p[j];
                // System.out.println(key);
                Integer num = scores.get(key);
                // System.out.println(num);
                if (num != null) {
                    sum += num;
                }
            }
            answer[i] = sum;
        }

        return answer;
    }
}
