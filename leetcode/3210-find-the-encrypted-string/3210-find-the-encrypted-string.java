class Solution {
    public String getEncryptedString(String s, int k) {
        // start 기준 다음 k 번째 문자
        String result = "";

        for (int i = 0; i < s.length(); i++) {
            int final_index = (i + k >= s.length()) ? (i + k) % s.length() : i + k;
            result = result + s.charAt(final_index);
        }

        return result;
    }
}