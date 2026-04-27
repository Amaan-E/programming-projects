/*
4. Write a Java program to read two one-dimensional arrays
and merge them into a single array, then display the merged
array in sorted order.
*/
import java.util.Scanner;
import java.util.Arrays;

class Four {

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

    public static int[] dynamicArray() {
        Scanner input = new Scanner(System.in);
        int a[] = new int[1];

        int count = 1;
        int incCount = 1;
        for (int i = 0; i < count; ++i) {
            int c = input.nextInt();
            if (c == -1) {
                break;
            }

            a[i] = c;

            if (i >= count - 1) {
                count += incCount;
                int t[] = new int[count];
                for (int j = 0; j < count - incCount; ++j) {
                    t[j] = a[j];
                }
                a = t;
            }
        }

        // input.close();
        return a;
    }   

    public static void main(String[] args) {
        System.out.println("Enter array elements(-1 to exit): ");
        System.out.println("Array 1: ");
        int a[] = dynamicArray();
        System.out.println("Array 2: ");
        int b[] = dynamicArray();
        
        int c[] = new int[a.length + b.length - 2];
        for (int i = 0; i < c.length; ++i) {
            if (i < a.length) {
                c[i] = a[i];
            } else {
                c[i] = b[i];
            }
        }
        
        Arrays.sort(c);
        
        System.out.print("Merged: " + a[0]);
        for (int i = 1; i < c.length; ++i) {
            System.out.print(" " + c[i]);
        }
        System.out.println();
    }
}
