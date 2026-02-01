#include <stdio.h>
#include <math.h>

int main() {
    float  data[] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
    int n = sizeof(data) / sizeof(data[0]);
    float sum = 0.0, mean, sd = 0.0;
int i;
  
    for (i = 0; i < n; i++) {
        sum += data[i];
    }

   
    mean = sum / n;


    for (i = 0; i < n; i++) {
        sd += pow(data[i] - mean, 2);
    }
    sd = sqrt(sd / n);  

  
    printf("Mean = %.2f\n", mean);
    printf("Standard Deviation = %.2f\n", sd);

    return 0;
}

