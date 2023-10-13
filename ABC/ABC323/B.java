package ABC.ABC323;

import java.util.*;

public class B {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String[] s = new String[n];
    for (int i = 0; i < n; i++) {
      s[i] = sc.next();
    }
    List<Score> myList = new ArrayList<>();

    for (int i = 0; i < n; i++) {
      int tmp = 0;
      for (int j = 0; j < n; j++) {
        if (i != j && s[i].charAt(j) == 'o')
          tmp++;
      }
      myList.add(new Score(i + 1, tmp));
    }
    Collections.sort(myList, Collections.reverseOrder());
    for (Score list : myList) {
      System.out.print(list.num + " ");
    }
  }

}

class Score implements Comparable<Score> {
  public int num, score;

  public Score(int num, int score) {
    this.num = num;
    this.score = score;
  }

  @Override
  public int compareTo(Score other) {
    return this.score - other.score;
  }
}