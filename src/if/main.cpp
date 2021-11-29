#include <omp.h>
#include <cstdio>

int main(int argc, char *argv[])
{
    printf("Exemplo 1 \n");

    int t = omp_get_max_threads();

    #pragma omp parallel if(t >= 4)
    {
        int id = omp_get_thread_num();
        int nt = omp_get_num_threads();

        printf("Paralela - Thread id = %d de um total de %d \n", id, nt);
    }

    printf("Exemplo 1 \n");

    return 0;
}
