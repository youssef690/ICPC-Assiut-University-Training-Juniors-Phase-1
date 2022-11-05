import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) {
        FastScanner in = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);

        String s = in.next();
        int t = in.nextInt();
        int[] freq = new int[200005];
        int sz = s.length();
        for (int i = 0; i < sz; i++) {
            if (s.charAt(i) == 'a') freq[i]++;
        }
        for (int i = 1; i < sz; i++) {
            freq[i] += freq[i - 1];
        }
        while (t-- > 0) {

            int l = in.nextInt(), r = in.nextInt(), res = 0;


            if (l == 1) out.println(freq[r - 1]);
            else out.println(freq[r - 1] - freq[l - 2]);

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
