// Online C compiler to run C program online
#include<stdio.h>
#include<string.h>
int reverse(char c[],char output[]){
    int n=strlen(c);
    int k=0;
    for(int i=n-1;i>=0;i--){
        output[k]=c[i];
        k=k+1;
    }
    output[k]='\0';
}
int main(){
    char a[100],b[100];
    printf("enter the sentence:");
    scanf("%99[^\n]",a);
    reverse(a,b);
    char *word=strtok(b," ");
    while(word!=NULL){
        char corrected_word[100];
        reverse(word,corrected_word);
        printf("%s ",corrected_word);
        word=strtok(NULL," ");
    }
    
}
