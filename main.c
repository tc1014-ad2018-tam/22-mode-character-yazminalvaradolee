/*
 * Este programa es diseñado para que el usuario ponga una oracion
 * y que nuestro programa muestre la letra que mas se repitio
 *
 * Autora: Yasmin Alvarado Lee
 * Correo: yazminalvlee@gmail.com
 * fecha: 18 de octubre del 2018
 */
#include <stdio.h>
#include <string.h>

int main() {
    //VARIABLES
    char string[1000];
    char mode = string[0];
    int counter = 0;
    int count = 0;


    printf("Escribe una oracion y te diremos la letra que mas se repite:\n");
    fgets(string, sizeof(string), stdin);

    //OPERACIONES
    for (int k = 0; k < strlen(string); k++) {
        counter = 0;

        for (int n = k + 1; n < strlen(string); n++) {

            //Aqui comparas las oraciones que pone el usuario
            if (string[k] == string[n] && string[n] != ' ') {
                counter++;
            }
        }

        //Aqui utilizaremos las variables para ver las oraciones y la cuenta de cuanto se repite
        if (counter > count) {
            count = counter;
            mode = string[k];
        }
    }

    printf("La letra que se repite mas es: %c", mode);

    return 0;
}