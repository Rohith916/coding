import java.util.*;

class M {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int[][] arr = new int[a][a];
        int count = 0;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
                arr[i][j] = s.nextInt();
            }
        }
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
                if (arr[i][j] > 10 && arr[i][j] < 20) {
                    count++;
                }
            }
        }
        if (count == 0) {
            System.out.print("Yes");
        } else {
            System.out.print("No");
        }
    }
}
