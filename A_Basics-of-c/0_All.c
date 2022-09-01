#include<stdio.h>
#include<conio.h>
int main(){
    int i=1,n,s;
    s=0;
    printf("\n1. print Hello Students");
    printf("\n2. print Hello on the first line and Students in the second line");
    printf("\n3. print \"MysirG\" ");
    printf("\n4. print \"Teacher's Day\" ");
    printf("\n5. print \\n");
    printf("\n6. print %%d");
    printf("\n7. assign some values to some variables and print them");
    printf("\n8. print character stored in a char variable & its ASCIIcode");
    printf("\n9. Exit code");
    while(i>0){       
        printf("\n\nEnter the option no:==");
        scanf("%d",&n);
        switch(n){
            case 1 :                                             
                printf("Hello Students");
                getch();
                break;
            case 2 :                                                  
                printf("Hello");
                getch();
                printf("\nStudents");
                getch();
                break;
            case 3:
                printf("\"MysirG\"");
                getch();
                break;
            case 4:                                                   
                printf("\"Teacher's Day\"");
                getch();
                break;
            case 5:
                    printf("\\n");
                    getch();                                          
                break;
            case 6:
                printf("%%d");
                getch();
                break;
            case 7:                                                   
                printf("enter age:-");
                int Age;
                scanf("%d",&Age);
                float Mark;
                printf("Enter Mark:-");
                scanf("%f",&Mark);
                printf("Age is:--%d\nmark is:--%f\n",Age,Mark);
                getch();
                break;
            case 8: 
                printf("Enter cherecter:-  ");
                char ch;
                scanf("%c",&ch);
                printf("cherecter is:    %c\nThe ascii value is : %d",ch,ch);  
                getch();
                break;
            case 9:
                printf("Exit the code");
                s=1;
                break;
            default :
                printf("Entered Wrong option");
                }
        if(s==1)
            break;
        i=i+1;
    }
    getch();
}
