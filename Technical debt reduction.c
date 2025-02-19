#include <stdio.h>

int main() {
    double debt = 1000000 * 0.1;  
    for (int month = 1; month <= 24; month++) {
        debt -= debt * 0.05;  
        printf("Month %d: %.2f lines of debt remaining\n", month, debt);
    }
    return 0;
}
