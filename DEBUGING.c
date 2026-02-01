#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char line[100];
    int total_words = 0, four_letter_words = 0;

    fp = fopen("TRIAL.TXT", "r");
    if(fp == NULL)
    {
        printf("Cannot open file.\n");
        return 1;
    }

    while(fgets(line, sizeof(line), fp))
    {
        char word[100];
        int i = 0, j = 0;

        while(1)
        {
            if(line[i] == ' ' || line[i] == ',' || line[i] == '.' || line[i] == '\n' || line[i] == '\0')
            {
                if(j > 0)
                {
                    word[j] = '\0';
                    total_words++;
                    if(j == 4) four_letter_words++;
                    j = 0;
                }
                if(line[i] == '\0') break;
            }
            else
            {
                word[j++] = line[i];
            }
            i++;
        }
    }

    fclose(fp);

    printf("Total words in file: %d\n", total_words);
    printf("Total four-letter words: %d\n", four_letter_words);

    return 0;
}

