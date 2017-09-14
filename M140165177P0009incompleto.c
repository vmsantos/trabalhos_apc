/*
 * Linhas de livre preenchimento...
 *
 * Matr.: 14/0165177
 * Trab.: 0009
 *
 * Linhas de livre preenchimento...
 */

 #include <stdio.h>
 #include <string.h>
 
 int existe(char [], char [][6]);
 int main(void){
     char pal[26][6];
     char palavra[31];
     int ind;
     FILE *arq;
     for(char c1 = 'a'; c1 <= 'z'; c1++){
         pal[c1 - 'a'][0] = c1;
         pal[c1 - 'a'][1] = '\0';
     }
     arq = fopen("palavras.txt", "r");
     while(fscanf(arq, "%s", palavra) == 1){
         ind = existe(palavra, pal);
         printf("%s -> %d\n", palavra, ind);
     }
     fclose(arq);
     return 0;
 }

 int existe(char p[], char tp[][6]){
     for(int i = 0; i < 26; i++){
         if(strcmp(p, tp[i]) == 0){
             return i + 1;
         }
     }
 }
