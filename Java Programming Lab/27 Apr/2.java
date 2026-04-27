/*
2. Write a Java program to read n elements in a one-
dimensional array and display the elements in reverse order
and count the number of even and odd elements.
*/

import java.util.Scanner;

class Two {

    public static void readArray(int a[], int n) {
        System.out.println("Enter array: ");
        Scanner input = new Scanner(System.in);
        for (int i = 0; i < n; ++i) {
            System.out.print("a[" + (i + 1) + "]= ");
            a[i] = input.nextInt();
        }
        System.out.println();
        input.close();
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter number of elements: ");
        int n = input.nextInt();

        int a[] = new int[n];
        readArray(a, n);

        enum Count {
            even,
            odd,
            max_count,
        }

        System.out.println("Reverse: ");
        int count[] = new int[(int) (Count.max_count.ordinal())];
        for (int i = n - 1; i >= 0; --i) {
            if (i < n - 1) {
                System.out.print(" ");
            }
            System.out.print(a[i]);
            if (a[i] % 2 == 0) {
                count[Count.even.ordinal()] += 1;
            } else {
                count[Count.odd.ordinal()] += 1;
            }
        }
        System.out.println("");

        System.out.println("Even: " + count[Count.even.ordinal()]);
        System.out.println("Odd: " + count[Count.odd.ordinal()]);

        input.close();
    }
}
