#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(char you, char computer){
    if (you==computer)
    return -1;

    if(you=='s' && computer=='p')
    return 0;
    else if(you=='p' && computer=='s') return 0;
}