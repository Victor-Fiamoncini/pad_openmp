#include <omp.h>
#include <cstdio>

int main(int argc, char *argv[])
{
    int num = 0;

    printf("Exemplo 1 \n");
    printf("Serial %d \n", num);

    omp_set_num_threads(4);

    #pragma omp parallel private(num)
    {
        num = 0;
        int id = omp_get_thread_num();
        num += id;

        printf("Paralela - Thread id = %d e (num+id) = %d \n", id, num);
    }

    printf("Serial %d \n", num);
    printf("Exemplo 1 \n");

    int num02 = 0;

    printf("Exemplo 2 \n");
    printf("Serial %d \n", num02);

    omp_set_num_threads(4);

    #pragma omp parallel private(num02)
    {
        int id = omp_get_thread_num();
        num02 += id;

        printf("Paralela - Thread id = %d e (num02+id) = %d \n", id, num02);
    }

    printf("Serial %d \n", num02);
    printf("Exemplo 2 \n");

    return 0;
}
