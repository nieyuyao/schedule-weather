#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("./README.md", "r+");
    if (fp == NULL) {
        printf("%s", "Open Failed!");
        return 1;
    }
    char line[BUFSIZ] = {0};
    char buf[BUFSIZ] = {0};
    char content[BUFSIZ] = "Today weather:  \n";
    // read line
    while(fgets(buf, BUFSIZ, fp) != NULL) {
        strncpy(line, buf, strlen(buf) - 1);
        strcat(line, "  \n");
        strcat(content, line);
        memset(line, 0, sizeof(line));
    }
    fseek(fp, 0, SEEK_SET);
    fwrite(content, strlen(content), 1, fp);
    fclose(fp);
    return 0;
}