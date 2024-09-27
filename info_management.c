#include<stdio.h>

int main()
{
    printf("---------Main Menu------\n\n");

    printf("1. Add Equipment\n");
    printf("2. Display equipment information\n");
    printf("3. Search Equipment\n");
    printf("4. Exit\n");

    int a1;
    printf("Enter: ");
    scanf("%d", &a1);
    printf("\n\n");

    if(a1==1)
    {
        printf("You can add equipment information\n\n");

        printf("Choose the category: \n\n");

        printf("1. Mill\n");
        printf("2. Lathe\n");
        printf("3. Drawings\n");
        printf("4. Measuring Tools\n");
        printf("5. Safety\n");
        

        int a2;
        printf("Choose a category: ");
        scanf("%d", &a2);

        printf("\n\n");

        if (a2==1)
        {
            printf("You have chose Mill Category\n\n");

            printf("1. Milling Machine\n");
            printf("2. Drill Press\n");


            int a3;
            printf("Choose a manual\n");
            scanf("%d", &a3);

            printf("\n\n");

            if(a3==1)

            {
                printf("You have chose Milling Machine\n\n");
                
                char manual_namea[50];
                char source_namea[50];
                int pagea;
                int design_teama;

                printf("Manual Name: ");
                scanf("%s", &manual_namea);
                printf("\n\n");

                printf("Source Name: ");
                scanf("%s", &source_namea);
                printf("\n\n");


                printf("Pages: ");
                scanf("%s", &pagea);
                printf("\n\n");

                printf("Design Team: ");
                scanf("%s", &design_teama);
                printf("\n\n");

            }

            else if (a3==2)
            {

                printf("You have chose Drill Press\n\n")

                char manual_nameb[50];
                char source_nameb[50];
                int pageb;
                int design_teamb;

                printf("Manual Name: ");
                scanf("%s", &manual_nameb);
                printf("\n\n");

                printf("Source Name: ");
                scanf("%s", &source_nameb);
                printf("\n\n");


                printf("Pages: ");
                scanf("%s", &pageb);
                printf("\n\n");

                printf("Design Team: ");
                scanf("%s", &design_teamb);
                printf("\n\n");

            }

        }
        else if(a2==2)
        { 
            printf("You have chose Lathe Category\n\n");

            printf("1. Lathe Machine\n");
            printf("2. Saws\n");

            int a4;
            printf("Choose a manual\n");
            scanf("%d", &a4);

            printf("\n\n");

            if(a4==1)
            {
                printf("You have chose Lathe Machine\n\n");
                
                char manual_namec[50];
                char source_namec[50];
                int pagec;
                int design_teamc;

                printf("Manual Name: ");
                scanf("%s", &manual_namec);
                printf("\n\n");

                printf("Source Name: ");
                scanf("%s", &source_namec);
                printf("\n\n");


                printf("Pages: ");
                scanf("%s", &pagec);
                printf("\n\n");

                printf("Design Team: ");
                scanf("%s", &design_teamc);
                printf("\n\n");
            }

            else if (a4==2)
            {
                printf("You have chose Saws\n\n");
                
                char manual_named[50];
                char source_named[50];
                int paged;
                int design_teamd;

                printf("Manual Name: ");
                scanf("%s", &manual_named);
                printf("\n\n");

                printf("Source Name: ");
                scanf("%s", &source_named);
                printf("\n\n");


                printf("Pages: ");
                scanf("%s", &paged);
                printf("\n\n");

                printf("Design Team: ");
                scanf("%s", &design_teamd);
                printf("\n\n");
            }


        }

        else if (a2==3)
        { 
            printf("You have chose Drawings Category\n\n");

            printf("1. Interpretation of Drawings\n");

            int a5;
            printf("Choose a manual\n");
            scanf("%d", &a5);

            printf("\n\n");

            if (a5==1)
            {
                printf("You have chose Interpretation of Drawings\n\n");
                
                char manual_namee[50];
                char source_namee[50];
                int pagee;
                int design_teame;

                printf("Manual Name: ");
                scanf("%s", &manual_namee);
                printf("\n\n");

                printf("Source Name: ");
                scanf("%s", &source_namee);
                printf("\n\n");


                printf("Pages: ");
                scanf("%s", &pagee);
                printf("\n\n");

                printf("Design Team: ");
                scanf("%s", &design_teame);
                printf("\n\n");
            }
        }

        else if(a2==4)
        {
            printf("You have chose Measuring Tools Category\n\n");

            printf("1. Processes and Tools\n");

            int a6;
            printf("Choose a manual\n");
            scanf("%d", &a6);

            printf("\n\n");

            if(a6==1)
            {
                printf("You have chose Processes and Tools\n\n");
                
                char manual_namef[50];
                char source_namef[50];
                int pagef;
                int design_teamf;

                printf("Manual Name: ");
                scanf("%s", &manual_namef);
                printf("\n\n");

                printf("Source Name: ");
                scanf("%s", &source_namef);
                printf("\n\n");


                printf("Pages: ");
                scanf("%s", &pagef);
                printf("\n\n");

                printf("Design Team: ");
                scanf("%s", &design_teamf);
                printf("\n\n");
            }
        }

        else if (a2==5)
        {
            printf("You have chose Safety Category\n\n");

            printf("1. Shop Safety Manual\n");

            int a6;
            printf("Choose a manual\n");
            scanf("%d", &a7);

            printf("\n\n");
            
            if(a7==1)
            {
                printf("You have chose Shop Safety Manuals\n\n");
                
                char manual_nameg[50];
                char source_nameg[50];
                int pageg;
                int design_teamg;

                printf("Manual Name: ");
                scanf("%s", &manual_nameg);
                printf("\n\n");

                printf("Source Name: ");
                scanf("%s", &source_nameg);
                printf("\n\n");


                printf("Pages: ");
                scanf("%s", &pageg);
                printf("\n\n");

                printf("Design Team: ");
                scanf("%s", &design_teamg);
                printf("\n\n");
            }
        }


    }

    else if(a1==3)
    {
        printf("You can search the Equipment\n\n");

        printf("Enter the code: 011 for Milling Machine\n");
        printf("Enter the code: 012 for Drill Press\n");
        printf("Enter the code: 021 for Lathe Machine\n");
        printf("Enter the code: 022 for Saws\n");
        printf("Enter the code: 031 for Interpretation of Drawings\n");
        printf("Enter the code: 041 for Processes and Tools\n");
        printf("Enter the code: 051 for Shop Safety Manual\n");

        int a6;
        printf("Enter code to search for manual: ")
        scanf("%d", &a6);
        printf("\n");

        switch (a6)
        { 
            case 011:
            printf("Manual Name: Milling Machine\n\n");
            printf("Equipment: The Mill")
            break;

            case 012:
            printf("Manual Name: Drill Press\n\n");
            printf("Equipment: The Drill Press")
            break;

            case 021:
            printf("Manual Name: Lathe Machine\n\n");
            printf("Equipment: The Lathe")
            break;

            case 022:
            printf("Manual Name: Saws\n\n");
            printf("Equipment: The Saw")
            break;

            case 031:
            printf("Manual Name: Interpretation of Drawings\n\n");
            printf("Equipment: Solidworks")
            break;

            case 041:
            printf("Manual Name: Processes and Tools\n\n");
            printf("Equipment: Measuring Intruments")
            break;

            case 051:
            printf("Manual Name: Shop Safety Manual\n\n");
            printf("Equipment: General")
            break;

        }

    }
    else if(a1==4)
    {
        printf("The System is closed\n\n");
        printf("Have a good day");
    }

}
