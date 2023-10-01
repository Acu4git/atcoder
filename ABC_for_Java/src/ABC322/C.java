package ABC322;

import java.util.Scanner;

public class C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();

        int[] count = new int[n + 1];
        for (int i = 0; i < m; i++) {
            count[sc.nextInt()] = 1;
        }

        // count[i]:=i日目までに花火が上がる回数（累積和）
        for (int i = 1; i <= n; i++) {
            count[i] += count[i - 1];
        }

        for (int i = 1; i <= n; i++) {
            System.out.println(getDiff(i, n, count));
        }

        sc.close();
    }

    // startの日以降（当日含む）に初めて花火が上がる日がstartから何日後かを返す
    private static int getDiff(int start, int end, int[] count) {
        if (count[start] - count[start - 1] == 1)
            return 0;

        int diff = 0;
        int left = start;
        int right = end;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (count[start] == count[mid]) {
                left = mid + 1;
            } else if (count[mid] - count[start] > 1) {
                right = mid - 1;
            } else if (count[mid] - count[start] == 1) {
                if (count[mid] - count[mid - 1] == 1) {
                    diff = mid - start;
                    break;
                } else {
                    right = mid - 1;
                }
            }
        }

        return diff;
    }
}
