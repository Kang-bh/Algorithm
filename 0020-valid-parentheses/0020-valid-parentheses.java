class Solution {
    public boolean isValid(String s) {
        // 같은 모양으로 닫혀야함.
        // Stack

        Stack<Character> stack = new Stack<>();

        for (char c : s.toCharArray()) {

            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            }

            else { 
                if (stack.isEmpty()) {
                    return false;
                }

                char top = stack.pop();

                if (c == ')' && top != '(') return false;
                if (c == ']' && top != '[') return false;
                if (c == '}' && top != '{') return false;

            }
        }

        return stack.isEmpty();

    }
}