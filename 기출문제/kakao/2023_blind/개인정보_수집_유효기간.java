
/*
 * 개인정보 - 유효기간(유효기간 지나면 파기)
 * 파기할 개인정보 번호수집
 */

import java.util.*;
import java.io.*;

class Solution {

    static HashMap<String, Integer> termMap = new HashMap<>(); // term, period
    static HashMap<Integer, Integer> privMap = new HashMap<>(); // num, deadLine

    private Integer calDeadLine(String date, String term) {

        Integer period = termMap.get(term);


        int year = Integer.parseInt(date.substring(0, 4));
        int month = Integer.parseInt(date.substring(5, 7));
        int day = Integer.parseInt(date.substring(8, 10));


        day -= 1;
        month += period;

        if (month > 12) {
            if (month % 12 == 0) {
                year += (month / 12) - 1;
                month = 12;
            } else {
                year += (month / 12);
                month = month % 12;
            }
        }

        if (day == 0) {
            day = 28;
            month -= 1;
        }

        if (month == 0) {
            month = 12;
            year -= 1;
        }

        int res = year * 10000 + month * 100 + day;
        return res;
    }

    public int[] solution(String today, String[] terms, String[] privacies) {
        int[] answer = new int[1];
        answer[0] = 1;
        int maxLen = privacies.length;
        int[] arr = new int[maxLen+1];


        int year = Integer.parseInt(today.substring(0, 4));
        int month = Integer.parseInt(today.substring(5, 7));
        int day = Integer.parseInt(today.substring(8, 10));
        int todayNum = year * 10000 + month * 100 + day;


        StringTokenizer st;
        for (String term : terms) {
            st = new StringTokenizer(term);
            String str = st.nextToken();
            Integer num = Integer.parseInt(st.nextToken());
            termMap.put(str, num);
        }

        int i = 0;
        for (String privacy : privacies) {
            st = new StringTokenizer(privacy);
            String date = st.nextToken();
            String term = st.nextToken();

            Integer deadLine = calDeadLine(date, term);
            privMap.put(++i, deadLine);
        }

        List<Integer> ans = new ArrayList<>();


        for (int j = 1; j <= maxLen; j++) {
            int deadLine = privMap.get(j);

            System.out.println("today Num : " + todayNum + " deadLine : " + deadLine);

            if (todayNum > deadLine) ans.add(j);
        }


        return ans.stream()
                .mapToInt(Integer::intValue)
                .toArray();
    }
}