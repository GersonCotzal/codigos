#include <stdio.h>

int main(int argc, char **argv) { 
    FILE *archEntrada, *archivoSalida; 
    unsigned char buffer[2048]; // Buffer de 2 Kbytes 
    int bytesLeidos; 
    
     if(argc < 3) { 
        printf("Ejectuar el programa de la siguiente manera:\n"); 
        printf("\tnombre_programa \tarchivo_origen \tarchivo_destino\n"); 
        return 1; 
    } 

     archEntrada = fopen(argv[1], "rb"); 
    if(!archEntrada) { 
        printf("El archivo %s no existe o no se puede abrir", argv[1]); 
        return 1; 
    } 
            
        archivoSalida = fopen(argv[2], "wb"); 

    if(!archivoSalida) { 
        printf("El archivo %s no puede ser creado", argv[2]);
        return 1; 
    } 
 while (bytesLeidos = fread(buffer, 1, 2048, archEntrada)) 
    fwrite(buffer, 1, bytesLeidos, archivoSalida); 
    
    // Cerrar archivos 
    fclose(archEntrada); 
    fclose(archivoSalida); 
    return 0; 
}