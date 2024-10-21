#include <stdio.h>
#include <string.h>

void validateRailwayTime(char *time) {
    int hour, minute, second;
    sscanf(time, "%d:%d:%d", &hour, &minute, &second);

    if (hour >= 0 && hour <= 23 && minute >= 0 && minute <= 59 && second >= 0 && second <= 59) {
        printf("Hour:%02d Minutes:%02d Seconds:%02d\n", hour, minute, second);
    } else {
        printf("Invalid time\n");
    }
}

int main() {
    char time[10];
    printf("Enter a time in HH:MM:SS format: ");
    scanf("%s", time);
    validateRailwayTime(time);
    return 0;
}