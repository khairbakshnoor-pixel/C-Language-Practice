#include <stdio.h>

void Roman(int year) {

    while(year >= 1000) { printf("m"); year -= 1000; }
    while(year >= 900)  { printf("cm"); year -= 900; }
    while(year >= 500)  { printf("d"); year -= 500; }
    while(year >= 400)  { printf("cd"); year -= 400; }
    while(year >= 100)  { printf("c"); year -= 100; }
    while(year >= 90)   { printf("xc"); year -= 90; }
    while(year >= 50)   { printf("l"); year -= 50; }
    while(year >= 40)   { printf("xl"); year -= 40; }
    while(year >= 10)   { printf("x"); year -= 10; }
    while(year >= 9)    { printf("ix"); year -= 9; }
    while(year >= 5)    { printf("v"); year -= 5; }
    while(year >= 4)    { printf("iv"); year -= 4; }
    while(year >= 1)    { printf("i"); year -= 1; }
}

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    printf("Roman equivalent: ");
    Roman(year);

    return 0;
}

