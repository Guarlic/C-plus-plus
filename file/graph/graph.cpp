#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int input;
    char temp;
    char c;
    vector<int> v;
    FILE* fp = fopen("/Users/jyjung/Desktop/Desktop/C-plus-plus/file/graph/data.txt", "w+");

    printf("* Prev Graph -----\n");

    while (fscanf(fp, "%c", &temp) != EOF) {
        printf("%c", temp);
    }

    printf("\nNum of datas: ");
    scanf("%d", &input);

    for (int i = 0; i < input; i++) {
        int input;
        printf("Data %d: ", i + 1);
        scanf("%d", &input);
        v.push_back(input);
    }

    fclose(fp);

    printf("\n* Graph -----\n");

    for (int i = 0; i < input; i++) {
        for (int j = 0; j < v[i]; j++)
            printf("■");

        printf("\n");
    }

save:
    printf("\nDo you wan't to Save this graph? (y/n) ");
    getchar();
    scanf("%c", &temp);

    switch(temp) {
        case 'y':
            fp = fopen("/Users/jyjung/Desktop/Desktop/C-plus-plus/file/graph/data.txt", "w");
            for (int i = 0; i < input; i++) {
                for (int j = 0; j < v[i]; j++)
                    fprintf(fp, "■");

                fprintf(fp, "\n");
            }

            fclose(fp);

            printf("Saved.\n");
            break;
        case 'n':
            printf("OK.\n");
            break;
        default:
            printf("Error; no option: %c\n", temp);
            goto save;
    }

    return 0;
}
