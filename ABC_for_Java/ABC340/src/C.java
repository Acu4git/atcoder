import java.util.*;

public class C {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        long N = sc.nextLong();
        HashMap<Long, Long> hashMap = new HashMap<>();
        System.out.println(getTotalCost(N, hashMap));
    }

    private static long getTotalCost(long x, HashMap<Long, Long> map) {
        if (x == 1)
            return 0;
        if (map.containsKey(x)) {
            return map.get(x);
        }
        map.put(x, x + getTotalCost(x / 2, map) + getTotalCost((x + 1) / 2, map));
        return map.get(x);
    }
}