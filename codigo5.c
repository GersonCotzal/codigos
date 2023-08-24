#include <stdio.h> 

int main() { 
    FILE *archivo; 
    char escribir[] = "Escribir cadena en archivo mediante fprinft. \nFacultad de Ingeniería.\n"; 
    archivo = fopen("fprintf.txt", "r+"); 
    if (archivo != NULL) { fprintf(archivo, escribir); 
    fprintf(archivo, "%s", "USAC\n"); 
    fclose(archivo); 
    } else { 
        printf("El archivo no existe o no se tiene permisos de lectura / escritura.\n"); 
    } 
    return 0; 
}