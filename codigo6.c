#include <stdio.h> 

int main(int argc, char **argv) { 
    FILE *ap; 
    unsigned char buffer[2048]; // Buffer de 2 Kbytes 
    int bytesLeidos; 
    
    if(argc < 2) { 
        printf("Ejecutar el programa de la siguiente manera:\n\tnombre_\tprograma nombre_archivo\n"); 
        return 1; 
    } 
  
    ap = fopen(argv[1], "rb"); 
    if(!ap) { 
        printf("El archivo %s no existe o no se puede abrir", argv[1]); 
        return 1; 
    } 
    while(bytesLeidos = fread(buffer, 1, 2048, ap)) 
    printf("%s", buffer); 
    
    fclose(ap); 
    return 0; 
}