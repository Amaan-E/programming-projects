/*
Modify Programming Project 8 from Chapter 5 so that the user enters a time using the 12-hour clock. 
The input will have the form hours:minutes followed by either A, P, AM or PM (either lower-case or upper-case). 
White space is allowed (but not required) between the numerical time and the AM/PM indicator. Examples of valid input:

1:15P
1:15PM
1:15p
1:15pm
1:15 P
1:15 PM
1:15 p
1:15 pm
You may assume that the input has one of these forms; there is no need to test for errors.
*/

/*
#include <stdio.h>

int main()
{
	int h, m, htom;
	char a, b;
	printf("Enter a time (expressed in hours and minutes, using the 12-hour clock): ");
	scanf("%d:%d%c%c", &h, &m, &a, &b);
	
	htom = (h * 60) + m;
	
	if(htom >= (8 * 60) && htom < ((9 * 60) + 43) && ((a == 'A' || (a == 'A' && b == 'M' ) || (a == 'a' || (a == 'a' && b == 'm' )))))
		printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
		
	else if(htom >= ((9 * 60) + 43) && htom < ((11 * 60) + 19) && ((a == 'A' || (a == 'A' && b == 'M' ) || (a == 'a' || (a == 'a' && b == 'm' )))))
		printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
		
	else if(htom >= ((11 * 60) + 19) && htom < ((12 * 60) + 47) && ((a == 'A' || (a == 'A' && b == 'M' ) || (a == 'a' || (a == 'a' && b == 'm' )))))
		printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");

	else if(htom >= ((12 * 60) + 47) && htom < (2 * 60) && ((a == 'P' || (a == 'P' && b == 'M' ) || (a == 'p' || (a == 'p' && b == 'm' )))))
		printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
	
	else if(htom >= (2 * 60) && htom < ((3 * 60) + 45) && ((a == 'P' || (a == 'P' && b == 'M' ) || (a == 'p' || (a == 'p' && b == 'm' )))))
		printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");

	else if(htom >= ((3 * 60) + 45) && htom < 7 * 60 && ((a == 'P' || (a == 'P' && b == 'M' ) || (a == 'p' || (a == 'p' && b == 'm' )))))
		printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");

	else if(htom >= 7 * 60 && htom < ((9 * 60) + 45) && ((a == 'P' || (a == 'P' && b == 'M' ) || (a == 'p' || (a == 'p' && b == 'm' )))))
		printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
		
	else if(htom >= ((9 * 60) + 45) && htom < (8 * 60) && ((a == 'P' || (a == 'P' && b == 'M' ) || (a == 'p' || (a == 'p' && b == 'm' )))))
		printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
		
	else	
	printf("\\o/ Kys");

}
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {

    int user_time,
        hour,
        minute,
        d1 = 480,
        d2 = 583,
        d3 = 679,
        d4 = 767,
        d5 = 840,
        d6 = 945,
        d7 = 1140,
        d8 = 1305;

    char c;

    printf("Enter a 12-hour time with AM/PM indicator: ");
    scanf("%d :%d %c", &hour, &minute, &c);
    user_time = (((toupper(c) == 'P' ? 12 : 0) + hour) * 60) + minute;

    printf("Closest departure time is ");

    if (user_time <= d1 + (d2 - d1) / 2)
        printf("8:00 a.m., arriving at 10:16 a.m.\n");
    else if (user_time < d2 + (d3 - d2) / 2)
        printf("9:43 a.m., arriving at 11:52 a.m.\n");
    else if (user_time < d3 + (d4 - d3) / 2)
        printf("11:19 a.m., arriving at 1:31 p.m.\n");
    else if (user_time < d4 + (d5 - d4) / 2)
        printf("12:47 p.m., arriving at 3:00 p.m.\n");
    else if (user_time < d5 + (d6 - d5) / 2)
        printf("2:00 p.m., arriving at 4:08 p.m.\n");
    else if (user_time < d6 + (d7 - d6) / 2)
        printf("3:45 p.m., arriving at 5:55 p.m.\n");
    else if (user_time < d7 + (d8 - d7) / 2)
        printf("7:00 p.m., arriving at 9:20 p.m.\n");
    else
        printf("9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}