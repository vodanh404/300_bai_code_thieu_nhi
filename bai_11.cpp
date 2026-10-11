#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char player, computer;
    int score_player = 0, score_computer = 0;
    const char choices[] = {'b', 'd', 'k'};

    srand((unsigned)time(NULL));
    printf("Nhap ky tu (b-d-k), ky tu khac de thoat:\n");
    scanf(" %c", &player);

    if (player != 'b' && player != 'd' && player != 'k') {
        printf("thoat chuong trinh\n");
        return 0;
    }

    computer = choices[rand() % 3];

    if (computer == player) {
        printf("Hoa nhau\n");
    } else if ((player == 'b' && computer == 'k') ||
               (player == 'd' && computer == 'b') ||
               (player == 'k' && computer == 'd')) {
        printf("Ban thang\n");
        score_player++;
    } else {
        printf("May thang\n");
        score_computer++;
    }

    printf("Diem cua ban: %d\n", score_player);
    printf("Diem cua may: %d\n", score_computer);

    return 0;
}