#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 Client 1 - client embedded (simulat)
 Rol: detectare miscare si publicare evenimente
*/

int main() {
    int motion_detected;
    srand(time(NULL));

    printf("Client 1 pornit - simulare senzor PIR\n");

    // simulare evenimente de miscare
    for (int i = 0; i < 5; i++) {
        motion_detected = rand() % 2;

        if (motion_detected) {
            printf("Eveniment: miscare detectata -> publicare mesaj MQTT\n");
        } else {
            printf("Eveniment: fara miscare\n");
        }
    }

    return 0;
}
