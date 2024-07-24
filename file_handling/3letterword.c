#include <stdio.h>
#include <string.h>

int main() {
    FILE *f;
    int count = 0;
    char word[100];

    f = fopen("count.txt", "r");
    if (f == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(f, "%s", word)!=EOF) {
        if (strlen(word) == 3) {
            count++;
        }
    }

    printf("Number of three-letter words: %d\n", count);

    fclose(f);
    return 0;
}
