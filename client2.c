#include <stdio.h>

/*
 Client 2 - client receptor (simulat)
 Rol: receptie si procesare date pentru control iluminat
*/

int main() {
    printf("Client 2 pornit - abonare la topic MQTT\n");

    printf("Mesaj receptionat: miscare detectata\n");
    printf("Actiune: iluminat PORNIT\n");

    printf("Mesaj receptionat: fara miscare\n");
    printf("Actiune: iluminat OPRIT\n");

    return 0;
}
