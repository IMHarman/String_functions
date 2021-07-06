    #include <stdio.h>
    #include <stdlib.h>


    //Output Function
    void s_output(char *str)
    {
        for(int i = 0; str[i] != '\0'; i++)
        {
            printf("%c",str[i]);
        }
    }
    //To find the length of the string
    void s_length(char *a)
    {
        int ctr=0,i;
        for(i = 0; a[i] != '\0'; i++)
        {
            ctr++;
        }
        printf("The length og the strring is: %d",ctr);
    }

    //To concatenate two strings
    void s_concatenate(char *str1, char *str2, char *str3)
    {
        int i,j;
        for(i = 0; str1[i] != '\0'; i++)
        {
            str3[i] = str1[i];
        }
        for(j = 0; str2[j] != '\0'; j++)
        {
            str3[i] = str2[j];
            i++;
        }
        str3[i]='\0';
        s_output(str3);
    }

    //To find reverse of a string
    void s_reverse(char *str)
    {
        int ctr=0,begin,end;
        char s[20];
        while (str[ctr] != '\0')
            ctr++;
        end = ctr - 1;
        for (begin = 0; begin < ctr; begin++)
        {
            s[begin] = str[end];
            end--;
        }
        s[begin] = '\0';
        printf("\n The reversed string is: ");
        s_output(s);
    }

    //TO copy one string to another string
    void s_copy(char *s1, char *s2)
    {
        int i;
        for(i=0; s1[i] != '\0'; i++)
        {
            s2[i] = s1[i];
        }
        s2[i]='\0';
        printf("\n The string is copied to another string. The string is: ");
        s_output(s2);
    }
    int main()
    {
        int ch;
        char str1[20], str2[20], str3[50];
        printf("\n --------------------------MENU--------------------------");
        printf("\n1. To find the length of the string.");
        printf("\n2. To concatenate two string.");
        printf("\n3. To find reverse of a string.");
        printf("\n4. copy one string to another string.");
        printf("\n Enter your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1 : printf("\n Enter the string: ");
                 scanf("%s",&str1);
                 s_length(str1);
                 break;

        case 2 : printf("\n Enter the first string: ");
                 scanf("%s",&str1);
                 printf("\n Enter the second string: ");
                 scanf("%s",&str2);
                 s_concatenate(str1, str2, str3);
                 break;

        case 3 : printf("\n Enter the string: ");
                 scanf("%s",&str1);
                 s_reverse(str1);
                 break;

        case 4 : printf("\n Enter the string: ");
                 scanf("%s", &str1);
                 s_copy(str1,str2);
                 break;

        default : return 0;
        }
        return 0;
    }
