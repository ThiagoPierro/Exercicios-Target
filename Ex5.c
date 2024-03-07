#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
    int comprimento = strlen(str);
    int i, j;

    for (i = 0, j = comprimento - 1; i < j; i++, j--) {
        
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char minhaString[100];  

    
    printf("Informe uma string: ");
    scanf("%s", minhaString);

    
    inverterString(minhaString);

    
    printf("String Invertida: %s\n", minhaString);

    return 0;
}
