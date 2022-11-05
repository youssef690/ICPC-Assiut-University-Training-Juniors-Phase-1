import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Collections;
import java.util.Objects;
import java.util.StringTokenizer;
import java.util.Vector;

public class Main {

    public static void main(String[] args) {
        FastScanner in = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);

        int n = in.nextInt(), q = in.nextInt();
        Vector<Integer> v = new Vector<>();
        for (int i = 0; i < n; i++) {
            v.add(in.nextInt());
        }

        // 2 4 9 5 3 4 7 2
        // 2 4 9 5 2 3 4 7
        // 2 4 9 5 2 3 4
        // 3 2 5
        while (q-- > 0) {
            String s = in.next();
            if (Objects.equals(s, "sort")) {
                Collections.sort(v.subList(in.nextInt() - 1, in.nextInt()));
            } else if (Objects.equals(s, "pop_back")) {
                v.removeElementAt(v.size() - 1);
            } else if (Objects.equals(s, "back")) {
                out.println(v.lastElement());
            } else if (Objects.equals(s, "front")) {
                out.println(v.firstElement());
            } else if (Objects.equals(s, "push_back")) {
                v.add(in.nextInt());
            } else if (Objects.equals(s, "print")) {
                out.println(v.elementAt(in.nextInt() - 1));
            } else if (Objects.equals(s, "reverse")) {
                Collections.reverse(v.subList(in.nextInt() - 1, in.nextInt()));
            }
        }
        out.close();
    }


    static class FastScanner {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer("");

        String next() {
            while (!st.hasMoreTokens())
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        int[] readArray(int n) {
            int[] a = new int[n];
            for (int i = 0; i < n; i++) a[i] = nextInt();
            return a;
        }

        long nextLong() {
            return Long.parseLong(next());
        }
    }
}
