#include <stdio.h>
#include <ctype.h>

void input_word(char w1[], char w2[], int w1C[], int w2C[]) {

    printf("Enter word one: ");
    scanf("%s", w1);
    printf("Enter word two: ");
    scanf("%s", w2);

    printf("%s\n", w1);
    printf("%s\n", w2);

    for(int j = 0; j < 100; j++) {
        ++w1C[toupper(w1[j])-65];
        ++w2C[toupper(w2[j])-65];
    }

}

void test_arrays(int w1C[], int w2C[]) {
    int sameTest = 1;
    for (int i = 0; i < 26; ++i) {
        if (toupper(w1C[i]) != toupper(w2C[i])) {
            sameTest = 0;
            break;
        }
    }
    if (sameTest == 0)
        printf("\nBoth words aren't anagrams.\n");
    else
        printf("\nBoth words are anagrams.\n");
}


int main() {
    char word1[100], word2[100];
    int word1C[26], word2C[26];

    for (int y = 0; y < 100; y++) { //Needs replacement
        word1[y] = '\0';
        word2[y] = '\0';
    }

    for (int x = 0; x < 26; x++) { //Needs replacement
        word1C[x] = 0;
        word2C[x] = 0;
    }

    input_word(word1, word2, word1C, word2C);

    for (int i = 0; i < 26; i++)
        printf("%d %d | ", word1C[i], word2C[i]);

    test_arrays(word1C, word2C);

    return 0;
}