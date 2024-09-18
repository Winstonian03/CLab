#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char L[10][5] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void dfs(int pos, int len, char* str, char** ans, char* D, int* count) {
    if (pos == len) {
        strcpy(ans[*count], str);
        (*count)++;
    } else {
        char letters[5];
        strcpy(letters, L[D[pos]-'0']);
        for (int i = 0; i < strlen(letters); i++) {
            char* new_str = (char*)malloc((len+1) * sizeof(char));
            strcpy(new_str, str);
            new_str[pos] = letters[i];
            dfs(pos+1, len, new_str, ans, D, count);
            free(new_str);
        }
    }
}

char** letterCombinations(char* D, int* returnSize) {
    int len = strlen(D);
    char** ans = (char**)malloc(5000 * sizeof(char*));
    for (int i = 0; i < 5000; i++) {
        ans[i] = (char*)malloc((len+1) * sizeof(char));
    }
    *returnSize = 0;
    if (!len) return ans;
    dfs(0, len, "", ans, D, returnSize);
    return ans;
}

int main() {
    char* D = "2345323";
    int returnSize;
    char** ans = letterCombinations(D, &returnSize);
    for (int i = 0; i < returnSize; i++) {
        printf("%s ", ans[i]);
    }
    for (int i = 0; i < 5000; i++) {
        free(ans[i]);
    }
    free(ans);
    return 0;
}
