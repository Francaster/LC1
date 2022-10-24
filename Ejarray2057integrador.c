#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 struct productos {
       int codigo[100];
    char descripcion[100][50];
    int cantidad[100];
    };
void main()
{
   struct productos stock[100];  
    
    int opcion,i,dim;
    int codigoingr;
    int encontrado =0;

    printf("ingrese cantidad de productos a cargar\n");
    scanf("%d",&dim);
    do
    {
        printf("\n");
        printf("elija una opcion:\n");
        printf("1. cargar productos\n");
        printf("2. modificar stock\n");
        printf("3. mostrar productos\n");
        printf("4. listar productos\n");
        printf("5. salir\n");
        scanf("%d", &opcion);

        if (opcion != 5)

            switch (opcion)
            {
            case 1:
                printf("carga de productos\n");
                for (i = 0; i < dim ; i++)
                {
                    printf("ingrese codigo de barras del producto %i\n", i + 1);
                    scanf("%i", &stock[i].codigo);
                }
                for (i = 0; i < dim ; i++)
                {
                    fflush(stdin);
                    printf("ingrese descripcion del producto %i\n", i+1);
                    gets(stock[i].descripcion);
                   
                }
                for (i = 0; i < dim ; i++)
                {
                    printf("ingrese cantidad de productos en stock\n");
                    scanf("%i", &stock[i].cantidad);
                }
                break;
            case 2:
                encontrado = 0;
                printf("ingrese codigo del electrodomestico: \n");
                scanf("%d", &codigoingr);

                for (i = 0; i < dim ; i++)
                {
                    if (stock[i].codigo == codigoingr)
                    {
                        printf("\ningrese nueva cantidad de stock . \n");
                        scanf("%d", &stock[i].cantidad);
                        encontrado = 1;
                    }
                }
                if (encontrado == 0)
                {
                    printf("producto inexistente..\n");
                }
                break;
            case 3:
                for (i = 0; i < dim ; i++)
                {
                    if (stock[i].cantidad == 0)
                    {
                        printf("%d - %s", stock[i].cantidad, stock[i].descripcion);
                    }
                }
                break;
            case 4:
                for (i = 0; i < dim ; i++)
                {
                    printf("producto %d - %s", i+1, stock[i].descripcion);
                }
                break;
            default:
                printf("opcion incorrecta");
                break;
            }
        } while (opcion != 5);

    system("pause");
}

 
