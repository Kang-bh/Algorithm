

class Solution {

    static int[] answer = new int[2];
    static int[] ratios = {10, 20, 30, 40};
    static int[][] globalUsers;
    static int[] globalEmoticons;


    public void dfs(int[] currentDiscounts, int depths) {
        if (depths == globalEmoticons.length) {
            int subscribers = 0; // 임티 가입자
            int sales = 0; // 판매액

            for (int[] user: globalUsers) {
                int userDiscountRate = user[0];
                int userMaxCost = user[1];
                int currentUserCost = 0;

                for (int i = 0; i < globalEmoticons.length; i++) {
                    if (currentDiscounts[i] >= userDiscountRate) {
                        currentUserCost += globalEmoticons[i] * (100 - currentDiscounts[i]) / 100;
                    }
                }

                if (currentUserCost >= userMaxCost) {
                    subscribers++;
                } else {
                    sales += currentUserCost;
                }
            }



            if (subscribers > answer[0]) {
                answer[0] = subscribers;
                answer[1] = sales;
            } else if (subscribers == answer[0] && sales > answer[1]) {
                answer[1] = sales;
            }
            return;

        }

        for (int rate : ratios) {
            currentDiscounts[depths] = rate;
            dfs(currentDiscounts, depths+1);
        }

    }



    public int[] solution(int[][] users, int[] emoticons) {
        // user : 비율, 금액
        globalUsers = users;
        globalEmoticons = emoticons;

        int[] currentDiscounts = new int[emoticons.length];

        dfs(currentDiscounts, 0);
        return answer;
    }
}