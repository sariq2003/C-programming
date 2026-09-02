#include<stdio.h>
# define ISSMALLCASE(C) (C>=97&&C<=122)
# define ISUPPERCASE(C) (C>=65&&C<=90)
# define ISALPHABET(C) (ISSMALLCASE(C) || ISUPPERCASE(C) )
# define BIG(x,y) (x>y?x:y)

int main(){

    char c;
    int x,y,number;
    printf("Enter any character/Alphabet to check:");
    scanf("%c",&c);

    if(ISSMALLCASE(c))

        printf("%c is Small case letter\n",c); 

    if (ISUPPERCASE(c))
        printf("%c is Upper case letter\n",c);

    if(ISALPHABET(c)!=1)
        printf(" You entered an character other than alphabet\n",c);

    printf("Enter any  two number\n");
    scanf("%d %d",&x,&y);
    number = BIG(x,y);
    printf("%d is Bigger number",number);
    
    return 0;

}