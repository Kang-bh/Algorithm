package Q10828;

import java.util.*;
import java.io.*;

public class Q10828 {

    static int[] stack = new int[10_000];
    static int len = 0;

    static void push(int x) {
        stack[len++] = x;
    }

    static int pop() {
        if (len == 0) {
            return -1;
        }
        return stack[--len];
    }

    static int size() {
        return len;
    }

    static int empty() {
        return (len == 0) ? 1 : 0;
    }

    static int top() {
        return (len > 0) ? stack[len - 1] : -1;
    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int N = Integer.parseInt(br.readLine());

        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            String s = st.nextToken();
            switch (s) {
                case "push":
                    push(Integer.parseInt(st.nextToken()));
                    break;
                case "pop":
                    System.out.println(pop());
                    break;
                case "top":
                    System.out.println(top());
                    break;
                case "size":
                    System.out.println(size());
                    break;
                case "empty":
                    System.out.println(empty());
                    break;
            }

        }
    }
}