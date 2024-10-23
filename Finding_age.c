/*Get the no. of passengers and their details as input which is of 15 characters where, 1st 10 characters represent phone no.
Next character represents Gender Next 2 characters represent age Last 2 characters represent seat no.
From this find the no. of passengers count whose age is greater than 60 INPUT: 3 [9874653210M6245, 8976453218F2144, 8732542435M7011] OUTPUT: 2    
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char passengerDetails[100][100];
    int numberOfPassengers;
    scanf("%d", &numberOfPassengers);

    for (int i = 0; i < numberOfPassengers; i++) {
        scanf("%s", passengerDetails[i]);
    }

    int ages[100];
    int ageCount = 0;

    for (int i = 0; i < numberOfPassengers; i++) {
        ages[i] = (passengerDetails[i][11] - '0') * 10 + (passengerDetails[i][12] - '0');
    }

    for (int i = 0; i < numberOfPassengers; i++) {
        printf("%d ", ages[i]);
        if (ages[i] > 60) {
            ageCount++;
        }
    }

    printf("count greater than 60 yrs: %d", ageCount);

    return 0;
}