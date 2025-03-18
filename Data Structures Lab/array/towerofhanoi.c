#include <stdio.h>

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    // Base case: If only 1 disk, move directly from source to destination
    if (n == 1) {
        printf("\nMove disk 1 from %c to %c", source, destination);
        return;
    }
    
    // Move n-1 disks from source to auxiliary using destination as helper
    towerOfHanoi(n - 1, source, auxiliary, destination);
    
    // Move remaining disk from source to destination
    printf("\nMove disk %d from %c to %c", n, source, destination);
    
    // Move n-1 disks from auxiliary to destination using source as helper
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int num_disks;
    printf("Enter number of disks: ");
    scanf("%d", &num_disks);
    
    // A = source tower, C = destination tower, B = auxiliary tower
    towerOfHanoi(num_disks, 'A', 'C', 'B');
    return 0;
}
