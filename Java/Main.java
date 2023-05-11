
// You are using Java

class Main {
    public static void main(String[] args) {
        String s = "cool";
        for (int i = 0; i < s.length() - 1; i++) {
            if ((s.charAt(i + 1) == 'A' || s.charAt(i + 1) == 'a' ||
                    s.charAt(i + 1) == 'e' || s.charAt(i + 1) == 'E' ||
                    s.charAt(i + 1) == 'i' || s.charAt(i + 1) == 'I' ||
                    s.charAt(i + 1) == 'o' || s.charAt(i + 1) == 'O' ||
                    s.charAt(i + 1) == 'u' || s.charAt(i + 1) == 'U')
                    && (s.charAt(i) == 'A' || s.charAt(i) == 'a' ||
                            s.charAt(i) == 'e' || s.charAt(i) == 'E' ||
                            s.charAt(i) == 'i' || s.charAt(i) == 'I' ||
                            s.charAt(i) == 'o' || s.charAt(i) == 'O' ||
                            s.charAt(i) == 'u' || s.charAt(i) == 'U')) {

                continue;
            } else {
                System.out.print(s.charAt(i));

            }
        }
        System.out.print(s.charAt(s.length() - 1));

    }
}