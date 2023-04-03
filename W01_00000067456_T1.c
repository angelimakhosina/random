#include <stdio.h>
#include <string.h>

void Uppercase();
void Lowercase();
void Switching();

int main(){
    int Pilihan;

    printf("1. Uppercase\n");
    printf("2. Lowercase\n");
    printf("3. Switching\n");
    printf("4. Keluar\n");
    printf("Pilihan : ");
    scanf("%d", &Pilihan);

    if (Pilihan != 4)
    {
    char s[500];
    int i;
    printf("\nMasukkan kata: ");
    scanf(" %[^\n]", &s);
    switch(Pilihan){
            case 1 : Uppercase(s); break;
            case 2 : Lowercase(s); break;
            case 3 : Switching(s); break;
        }
    }
    return 0;
}

void Uppercase(char *s){
    int c;
    for (c = 0; s[c]!='\0'; c++)
    {
      if(s[c] >= 'a' && s[c] <= 'z')
        {
         s[c] = s[c] - 32;
        }
    }
    printf("\n%s", s);
}

void Lowercase(char *s){
    int j;
    for (j = 0; s[j]!='\0'; j++)
    {
      if(s[j] >= 'A' && s[j] <= 'Z'){
         s[j] = s[j] + 32;
        }
    }
    printf("\n%s", s);
}

void Switching(char *s){
    int k;
    for (k = 0; s[k]!='\0'; k++)
    {
      if(s[k] >= 'a' && s[k] <= 'z')
        {
            s[k] = s[k] - 32;
        }
    else
    if(s[k] >= 'A' && s[k] <= 'Z')
            {
                s[k] = s[k] + 32;
            }
   }
    printf("\n%s", s);
}