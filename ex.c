#include <stdio.h>
#include <stdlib.h>
#include <time.h>

__attribute__((constructor)) void check_expiry() {
    // Define the expiry date (Year, Month, Day)
    int expiry_year = 2026;
    int expiry_month = 11;
    int expiry_day = 20;

    
    time_t now = time(NULL);
    struct tm *current_time = localtime(&now);

   
    if ((current_time->tm_year + 1900) > expiry_year) {
        printf(".\n");
        exit(EXIT_FAILURE);  
    } else if ((current_time->tm_year + 1900) == expiry_year) {
        if ((current_time->tm_mon + 1) > expiry_month) {
            printf("This file is closed by @MR_SID_001 ...");
            exit(EXIT_FAILURE); 
        } else if ((current_time->tm_mon + 1) == expiry_month) {
            if (current_time->tm_mday > expiry_day) {
                printf("This file is closed by @MR_SID_001 ...\n");
                exit(EXIT_FAILURE);  
            }
        }
    }
    printf("Welcome this is Free file for users\n");
}