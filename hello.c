#include <stdio.h>
#include <omp.h>

int main() {
    // Parallel region starts here
    #pragma omp parallel
    {
        int thread_id = omp_get_thread_num(); // Get the thread ID
        printf("Hello World from thread %d\n", thread_id);
    }
    return 0;
}
