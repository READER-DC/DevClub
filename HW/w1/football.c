/*
Считать с клавиатуры 2 целых положительных числа, 
количество забитых голов хозяевами и гостями на футбольном матче. 
Вывести на экран результат матча «Home team wins», «Away team wins», «Draw».
*/
#include <stdio.h>

int main() {
    int goalHome, goalAway;
    
    scanf("%d %d", &goalHome, &goalAway);
    
    if ( goalHome > goalAway ) {
        printf("Home team wins\n");
    } else if ( goalHome < goalAway ) {
        printf("Away team wins\n");
    } else {
        printf("Draw\n");
    }
    
    return 0;
}
