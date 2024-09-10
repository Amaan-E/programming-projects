#include <stdio.h>

int main() {
    int h, m, time;
    
    const int departureTimes[8] = { 480, 583, 679, 767, 840, 1025, 1440, 1545 };
    const int arrivalTimes[8] = { 616, 712, 831, 900, 1048, 1355, 1560, 1718 };

    printf("Enter a time (expressed in hours and minutes, using the 24-hour clock): ");
    scanf("%d:%d", &h, &m);

    time = h * 60 + m;
    
    int found = 0; // Flag to check if a match is found

    for (int i = 0; i < 8; i++) {
        if (time >= departureTimes[i] && time < arrivalTimes[i]) {
            int hour = departureTimes[i] / 60;
            int minutes = departureTimes[i] % 60;
            int hourA = arrivalTimes[i] / 60;
            int minutesA = arrivalTimes[i] % 60;
            char indicationD, indicationA;

            // Determine AM/PM for departure
            if (hour == 0) {
                hour = 12;
                indicationD = 'A';	
            } else if (hour >= 1 && hour <= 11) {
                indicationD = 'A';
            } else if (hour == 12) {
                indicationD = 'P';
            } else {
                hour -= 12;
                indicationD = 'P';
            }
            
            // Determine AM/PM for arrival
            if (hourA == 0) {
                hourA = 12;
                indicationA = 'A';	
            } else if (hourA >= 1 && hourA <= 11) {
                indicationA = 'A';
            } else if (hourA == 12) {
                indicationA = 'P';
            } else {
                hourA -= 12;
                indicationA = 'P';
            }    
                
            // Print the result
            printf("Closest departure time is %d:%02d %c.m. arriving at %d:%02d %c.m.\n", 
                   hour, minutes, indicationD, hourA, minutesA, indicationA);
            
            found = 1; // Set the flag to indicate a match was found
            break; // Exit the loop after finding the first match
        }
    }

    if (!found) {
        printf("No departure time found for the given input.\n");
    }

    return 0;
}
