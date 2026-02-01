#include <stdio.h>
#include <conio.h>

#define PAGE_LINES 50
#define LINE_LENGTH 200

int main()
{
    FILE *fp;
    char line[LINE_LENGTH];
    int line_count = 0, page = 1;

    fp = fopen("file.txt", "r");
    if(fp == NULL)
    {
        printf("Cannot open NOTES.TXT\n");
        return 1;
    }

    while(fgets(line, sizeof(line), fp))
    {
        printf("%s", line);
        line_count++;

        if(line_count == PAGE_LINES)
        {
            printf("\n--- End of Page %d ---\n", page);
            printf("Change paper and press any key to continue...");
            getch();
            printf("\n");
            line_count = 0;
            page++;
        }
    }

    if(line_count > 0)
    {
        printf("\n--- End of Page %d ---\n", page);
        printf("End of file reached.\n");
    }

    fclose(fp);
    return 0;
}

