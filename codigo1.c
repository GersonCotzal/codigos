#include <stdio.h>

int main() {
    FILE *archivo;
    archivo = fopen("archivo.txt", "r");

    if (archivo != NULL) {
        printf("El archivo se abrio correctamente. Un");
        int res = fclose(archivo);
        printf("fclose = %d\n", res);
    } else {
    printf("Error al abrir el archivo. \n");
    printf("El archivo no existe o no se tienen permisos de lectura. \n");

    }

    return 0;
}