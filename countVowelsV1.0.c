#include <stdio.h>
#include <stdlib.h>

int main(){
    char *word = "any word", l;
    int count = 0, vowel =0;
    char *userWord = malloc(sizeof(word)+1);
    printf("input your word: ");
    scanf("%s", userWord);

    for (int i = 0; userWord[i] != '\0'; i++){
        count++;
        //printf("the count of i gave: %d\n", i);
    }
    //printf("the count gave: %d\n", count);
    
    for (int j = 0; j < count; j++){
        if(userWord[j] == 97 || userWord[j] == 65 || userWord[j] == 101 || userWord[j] == 105 || userWord[j] == 111 || userWord[j] == 117 || userWord[j] == 69 || userWord[j] == 73 || userWord[j] == 79 || userWord[j] == 85){
            vowel++;
        }
    }

    printf("The word is: %s. with vowels as: %d\n", userWord, vowel);

}
