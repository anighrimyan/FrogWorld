import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> arr = new ArrayList<>(10);
        for (int i = 0; i < arr.length(); ++i) {
            arr.setElement(i, sc.nextInt());
        }
        for (int i = 0; i < arr.length(); ++i) {
            System.out.print(arr.getElement(i) + " ");
        }
        System.out.println();
        arr.addElement(sc.nextInt());
        arr.removeElement(3);
        for (int i = 0; i < arr.length(); ++i) {
            if (arr.getElement(i) == null) {
                break;
            }
            System.out.print(arr.getElement(i) + " ");
        }

    }
}