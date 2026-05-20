#include <stdio.h>

struct arbol{
    int dato;
    struct arbol *izq, *der;
    
};

int menu(void){
    int opcion;
    printf("\n---Menu---\n");
    printf("1.- Crear datos\n");
    printf("2.- Eliminar dato\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);
    return opcion;
}
void CrearDato(struct arbol *raiz);
void EliminarDato(struct arbol **raiz);

int main(void){
    struct arbol *raiz, *ptrtemp;
    int opcion;
    do{
        opcion = menu();
        switch (opcion )
        {
        case 1:
            ptrtemp = crearNodo();
            if(ptrtemp == NULL)
                printf("No se creo el nodo");
            else{
                if(raiz == NULL){
                    raiz=ptrtemp;
                }else{
                {
                    
                }
                }
            }
            break;
        case 2:
            EliminarDato(&raiz);
            break;
        default:
            printf("Opcion invalida");
            break;
        }
    }while (opcion != 2);
    
      return 0;
}
