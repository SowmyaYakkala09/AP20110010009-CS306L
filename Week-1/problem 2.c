#include<stdio.h>
void main()
{
    int state=0,r=0;
    char token,input[20];
    printf("Enter input string \t :");
    scanf("%s",input);
    

    while((token=input[r++])!='\0')
    {
        switch(state)
        {
            case 0: if(token=='a')
                        state=1;
                    else if(token=='b')
                        state=3;
                    else
                    {
                        printf("Invalid token");
                        exit(0);
                    }
                    break;
            case 1: if(token=='a')
                        state=2;
                    else if(token=='b')
                        state=3;
                    else
                    {
                        printf("Invalid token");
                        exit(0);
                    }

                    break;
            case 2: if(token=='a')
                        state=2;
                    else if(token=='b')
                        state=3;
                    else
                    {
                        printf("Invalid token");
                        exit(0);
                    }
                    break;
            case 3: if(token=='a')
                        state=1;
                    else if(token=='b')
                        state=4;
                    else
                    {
                        printf("Invalid token");
                        exit(0);
                    }
                    break;
            case 4: if(token=='a')
                        state=1;
                    else if(token=='b')
                        state=4;
                    else
                    {
                        printf("Invalid token");
                        exit(0);
                    }
                    break;
        }
       
    }
    if(state==2 || state==4)
        printf("\n\nString accepted\n\n");
    else
        printf("\n\nString not accepted\n\n");
}
