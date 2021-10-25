#include <omp.h>
#include <cstdio>

int main(int argc, char *argv[])
{
    printf("Ola 1 - Fora da Regiao Paralela...\n");

    #pragma omp parallel
    {
        int id = omp_get_thread_num();
        int nt = omp_get_num_threads();

        printf("Sou a thread %d de um total de %d \n", id, nt);
    }

    printf("Ola 2 - Fora da Regiao Paralela...\n");

    return 0;
}
