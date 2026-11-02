
#include <stdio.h>

#define V 5

int main(void) {
    char *locations[V] = {
        "Anna Nagar",
        "Guindy",
        "T Nagar",
        "Velachery",
        "Tambaram"
    };

    printf("=== Shortest Path Finder ===\n");

    for (int i = 0; i < V; i++) {
        printf("%d. %s\n", i + 1, locations[i]);
    }

    return 0;
}
