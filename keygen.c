#include <stdio.h>

int generar_contrasenia(int id_usuario)
{
    double contrasenia = ((id_usuario * 786 * 17) / 12) + 1991;
    return (int)contrasenia;
}

int main()
{
    int id_usuario;
    printf("Ingrese el ID de usuario: ");
    scanf("%d", &id_usuario);

    int contrasenia_generada = generar_contrasenia(id_usuario);
    printf("La contrasenia generada es: %d\n", contrasenia_generada);

    return 0;
}
