#include<stdio.h>
#include<string.h>

int main() {
    char c;
    char s[100];
    scanf("%c", &c);
    scanf("%s", &s);
    int t=-1;
    for(int i=0;i<strlen(s);i++){
        if(s[i]==c){
            t=i;
            break;
        }
        
    }

    printf("%d",t);
    return 0;
}

