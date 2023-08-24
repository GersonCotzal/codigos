#include <stdio.h>

int main() { 
    FILE *archivo; 
    char escribir[] = "Escribir cadena en archivo mediante fputs. \n\tFacultad de Ingeniería.\n"; 
    archivo = fopen("puts.txt", "r+");
    if (archivo != NULL) { 
        printf("El archivo se abrio correctamente.\n"); 
        fputs (escribir, archivo); 
        fclose(archivo); 
    } else { 
        printf("Error al abrir el archivo.\n"); 
        printf("El archivo no existe o no se tienen permisos de lectura.\n"); 
    } 
        return 0; 
}