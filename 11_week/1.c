#include <stdio.h>
#include <ctype.h>
#include <string.h>

// struct Inf {
//     int level;
//     int hp;
// };

// struct Player {
//     char name[100];
//     struct Inf inf;
// };

enum MOVE {
    Go,
    Back,
    Left,
    Right,
};

int main() {
    int x = 0, y = 0; 
    char cmd[5] = {Go, Right, Go, Back, Right};
    
    for (int i = 0; i<5; i++) {
        enum MOVE move = cmd[i];
        switch (move) {
            case Go:
                y--;
                break;
            case Back:
                y++;
                break;
            case Left:
                x--;
                break;
            case Right:
                x++;
                break;
            default:
                x = 0, y = 0;
                break;
        }
    }
    
    printf("현재 위치 [%d , %d]", x, y);

    // struct Player player[4] = {0};

    // strcpy(player[1].name, "Fir");
    // strcpy(player[2].name, "Sec");
    // strcpy(player[3].name, "Thi");
    // for (int i = 1; i<3; i++) {
    //     player[1].inf.hp = 10;
    //     player[1].inf.level = 1;
    //     player[i+1].inf.level = 5;
    //     player[i].inf.hp = 20;
    // }

    // player[3].inf.level += 1;

    // for (int i = 1; i<=3; i++) {
    //     printf("%d. [name: %s| hp: %d| level: %d]\n", i, player[i].name,player[i].inf.hp,player[i].inf.level);
    // }
}