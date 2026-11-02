
/*#include <stdio.h>

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
}*/


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

    int graph[V][V] = {
        {0, 8, 2, 4, 0},
        {8, 0, 3, 0, 7},
        {2, 3, 0, 1, 5},
        {4, 0, 1, 0, 6},
        {0, 7, 5, 6, 0}
    };

    printf("=== Shortest Path Finder ===\n\n");

    printf("Available Locations:\n");

    for (int i = 0; i < V; i++) {
        printf("%d. %s\n", i + 1, locations[i]);
    }

    printf("\nAdjacency Matrix:\n");

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            printf("%3d ", graph[i][j]);
        }
        printf("\n");
    }

    return 0;
}
