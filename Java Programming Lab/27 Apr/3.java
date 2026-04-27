/*
3.  Write a Java program to search for a given element in a one-
    dimensional array and display its position(s) if found.
*/

class Three
{
    public static int linearSearch(int a[], int key) {
        for (int i = 0; i < a.length; i++) {
            if (a[i] == key) {
                return i;
            }
        }
        
        return -1;
    }
    
    public static void main(String[] args) 
    {
        int a[] = {1, 2, 3, 4, 5};
        System.out.println("The index is: " + linearSearch(a, 3));
    }
}