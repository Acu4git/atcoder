package ABC.ABC323;

import java.util.*;

public class C {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    int M = sc.nextInt();
    Quiz[] A = new Quiz[M];
    Person[] person = new Person[N];
    for (int i = 0; i < M; i++) {
      A[i] = new Quiz();
      A[i].id = i + 1;
      A[i].score = sc.nextInt();
    }
    List<Quiz> quiz = new ArrayList<>(Arrays.asList(A));
    quiz.stream().sorted((a, b) -> (a.score - b.score)).forEach(s -> System.out.println(s));
    for (int i = 0; i < N; i++) {
      person[i] = new Person(i + 1, 0);
      person[i].solved = new StringBuilder(sc.next());
    }
    List<Person> myList = new ArrayList<>();
    for (int i = 0; i < N; i++) {

    }
  }
}

class Person implements Comparable<Person> {
  public int id, score;
  public StringBuilder solved;

  public Person(int id, int score) {
    this.id = id;
    this.score = score;
  }

  @Override
  public int compareTo(Person other) {
    return this.score - other.score;
  }
}

class Quiz {
  public int id, score;
}