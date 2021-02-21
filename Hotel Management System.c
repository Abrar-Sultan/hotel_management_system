#include<stdio.h>
#include<string.h>
#define total_room 100
struct address
{
    int house_no;
    char street[20];
    int zipcode;
};
struct guest
{
    char name[100];
    int contact_num;
    int NID;
    int r_num;
    char d_t[30];
    struct address ad;
};
struct guest g[100];
void logo();
void mainfunction();
void add();
void view();
void edit();
void khoz();
void del();
void p_info();
int num=0;
int main()
{
    logo();
    char id[50];
    char pass[50];
hell:
    printf("          \n                                  MEMBER LOGIN");
    printf("\n\n\nUser Id: ");
    gets(id);
    printf("Password: ");
    gets(pass);
    if(strcmp(pass,"HS")==0)
    {
        printf("\n                   WELCOME   %s\n",id);
        mainfunction();
    }
    else
    {
        printf("\nWrong Password");
        printf("      \n\n  Sorry   ");
        goto hell;
    }
}
void mainfunction()
{
     int r;
    read();
    while(1)
    {
        printf("\n==================================");
        printf("\n1.ADD INFORMATION");
        printf("\n2.VIEW ALL RECORDS");
        printf("\n3.EDIT A RECORD");
        printf("\n4.SEARCH FOR A RECORD");
        printf("\n5.DELETE A RECORD");
        printf("\n6.VIEW PROGRAMER'S INFORMATION");
        printf("\n7.EXIT");
        printf("\n=====================================");
        printf("\nEnter Your Selection: ");
        scanf("%d",&r);
        system("cls");
        if(r==1)
        {
            add();
        }
        else if(r==2)
        {
            view();
        }
        else if(r==3)
        {
            edit();
        }
        else if(r==4)
        {
            khoz();
        }
        else if(r==5)
        {
            del();
        }
        else if(r==6)
        {
            p_info();
        }
        else if(r==7)
        {
            write();
           return;
        }
    }
}
void add()
{
    int i,v;
    printf("===================================================");
    printf("\nNUMBER OF AVAILABLE ROOM(S): %d",total_room-num);
    printf("\n=================================================");

        printf("\nEnter Personal INFORMATION OF GUEST %d",num+1);
        printf("\n==============================================");
        printf("\nName: ");
        fflush(stdin);
        gets(g[num].name);
        fflush(stdin);
        printf("Contact Number: ");
        scanf("%d",&g[num].contact_num);
        fflush(stdin);
        printf("National ID: ");
        scanf("%d",&g[num].NID);
        fflush(stdin);
        printf("Room Number: ");
        scanf("%d",&g[num].r_num);
        fflush(stdin);
        printf("Check-In Date (Example: Month-Date-Year): ");
        gets(g[num].d_t);
        fflush(stdin);
        printf("\nEnter Address\n");
        printf("====================");
        printf("\n=>House Number: ");
        scanf("%d",&g[num].ad.house_no);
        fflush(stdin);
        printf("=>Street Name: ");
        gets(g[num].ad.street);
        fflush(stdin);
        printf("=>ZIP Code: ");
        scanf("%d",&g[num].ad.zipcode);
        fflush(stdin);
        num++;
    printf("\n\nINFORMATION SUCCESSFULLY ADDED");
    printf("\n\n\n        THANK YOU!                  \n ");
}

void view()
{
    int i,v;
    printf("\nNUMBER OF AVAILABLE GUEST(S) INFORMATION ON DATABASE: %d\n",num);
    for(i=0; i<num; i++)
    {
        printf("\n\nINFORMATION OF GUEST %d",i+1);
        printf("\n===============================");
        printf("\n\nNAME: %s\nCONTACT NUMBER: %d\nNATIONAL ID: %d\nHOTEL ROOM NUMBER: %d\n",g[i].name,g[i].contact_num,g[i].NID,g[i].r_num);
        printf("CHECK-IN DATE: %s\nHOUSE NUMBER: %d\nSTREET NAME: %s\nZIP CODE: %d",g[i].d_t,g[i].ad.house_no,g[i].ad.street,g[i].ad.zipcode);
    }
        printf("\n\n===========================");
        printf("\n1.Go Back To Main Menu");
        printf("\n2.Exit");
        printf("\n===========================");
        printf("\nYour Choice=> ");
        scanf("%d",&v);
        fflush(stdin);
        if(v==1)
         {
            mainfunction();
         }
        else if(v==2)
         {
            exit(1);
         }
}
void edit()
{
    int e,o,v;
    char ch;
    printf("\nEnter the Serial Number of Guest Whose Information You Want to Edit: ");
    scanf("%d",&e);
    fflush(stdin);
    printf("\nWhat Do you Want to Edit?");
    printf("\n1) Name");
    printf("\n2) Contact Number");
    printf("\n3) National ID");
    printf("\n4) Room Number");
    printf("\n5) Address");
    printf("\nEnter Your Selection: ");
    scanf("%d",&o);
    fflush(stdin);
    if(o==1)
    {
        printf("Enter New Name: ");
        gets(g[e-1].name);
        fflush(stdin);
    }
    else if(o==2)
    {
        printf("Enter New Contact Number: ");
        scanf("%d",&g[e-1].contact_num);
        fflush(stdin);
    }
    else if(o==3)
    {
        printf("Enter New National ID: ");
        scanf("%d",&g[e-1].NID);
        fflush(stdin);
    }
    else if(o==4)
    {
        printf("Enter New Room Number: ");
        scanf("%d",&g[e-1].r_num);
        fflush(stdin);
    }
    else if(o==5)
    {
        printf("What Do You Want to Edit About the Address: ");
        printf("\n1) House Number");
        printf("\n2) Street Name");
        printf("\n3) ZIP Code");
        printf("\n4) Full Address");
        printf("\nEnter Your Selection: ");
        scanf("%c",&ch);
        fflush(stdin);
        if(ch=='1')
        {
            printf("Enter New House Number: ");
            scanf("%d",&g[e-1].ad.house_no);
            fflush(stdin);
        }
        else if(ch=='2')
        {
            printf("Enter New Street Name: ");
            gets(g[e-1].ad.street);
            fflush(stdin);
        }
        else if(ch=='3')
        {
            printf("Enter New ZIP Code: ");
            scanf("%d",&g[e-1].ad.zipcode);
            fflush(stdin);
        }
        else if(ch=='4')
        {
            printf("Enter New House Number: ");
            scanf("%d",&g[e-1].ad.house_no);
            fflush(stdin);
            printf("Enter New Street name: ");
            gets(g[e-1].ad.street);
            fflush(stdin);
            printf("Enter New ZIP Code: ");
            scanf("%d",&g[e-1].ad.zipcode);
            fflush(stdin);
        }

    }

           printf("\n\nINFORMATION SUCCESSFULLY ADDED");
           printf("\n\n\n        THANK YOU!                   ");
}
void khoz()
{
    int x,w,i,k,u=0,r,k1,u1=0,c1;
    int k2,u2,c2,v;
    char y[100];
    printf("\nHow Do You Want to Search?");
    printf("\n==============================");
    printf("\n1) Serial Number");
    printf("\n2) Name");
    printf("\n3) Room Number");
    printf("\n4) Phone Number");
    printf("\n==============================");
    printf("\nEnter Your Selection: ");
    scanf("%d",&x);
    fflush(stdin);
    switch(x)
    {
    case 1:
    {
        printf("Enter Serial Number: ");
        scanf("%d",&w);
        fflush(stdin);
        if(w<=num)
        {
            printf("\nSERIAL NUMBER: %d",w);
            printf("\nNAME: %s",g[w-1].name);
            printf("\nCONTACT NUMBER: %d",g[w-1].contact_num);
            printf("\nNATIONAL ID: %d",g[w-1].NID);
            printf("\nROOM  NUMBER: %d",g[w-1].r_num);
            printf("\nADDRESS\n");
            printf("\n=>HOUSE NUMBER: %d",g[w-1].ad.house_no);
            printf("\n=>STREET NAME: %s",g[w-1].ad.street);
            printf("\n=>ZIP CODE: %d",g[w-1].ad.zipcode);
            printf("\n\n===========================");
            printf("\n1.Go Back To Main Menu");
            printf("\n2.Exit");
            printf("\n===========================");
            printf("\nYour Choice=> ");
            scanf("%d",&v);
            fflush(stdin);
            if(v==1)
              {
                mainfunction();
              }
            else if(v==2)
             {
                exit(1);
             }
        }
        else
            printf("\nNO MATCH FOUND!");
            printf("\n\n===========================");
            printf("\n1.Go Back To Main Menu");
            printf("\n2.Exit");
            printf("\n===========================");
            printf("\nYour Choice=> ");
            scanf("%d",&v);
            fflush(stdin);
            if(v==1)
             {
                mainfunction();
             }
            else if(v==2)
             {
                exit(1);
             }
        break;
    }
    case 2:
    {
        printf("Enter Name: ");
        gets(y);
        fflush(stdin);
        for(i=0; i<num; i++)
        {
            if(strcmp(g[i].name,y)==0)
            {
                k=i;
                u++;
            }
        }
        if(u!=0)
        {
            printf("\nSERIAL NUMBER: %d",k+1);
            printf("\nNAME: %s",g[k].name);
            printf("\nCONTACT NUMBER: %d",g[k].contact_num);
            printf("\nNATIONAL ID: %d",g[k].NID);
            printf("\nROOM  NUMBER: %d",g[k].r_num);
            printf("\nADDRESS");
            printf("\n=>HOUSE NUMBER: %d",g[k].ad.house_no);
            printf("\n=>STREET NAME: %s",g[k].ad.street);
            printf("\n=>ZIP CODE: %d",g[k].ad.zipcode);
            printf("\n\n===========================");
            printf("\n1.Go Back To Main Menu");
            printf("\n2.Exit");
            printf("\n===========================");
            printf("\nYour Choice=> ");
            scanf("%d",&v);
            fflush(stdin);
            if(v==1)
             {
                mainfunction();
             }
            else if(v==2)
             {
                 exit(1);
             }
        }
        else
        {
            printf("\nNO MATCH FOUND!");
            printf("\n\n===========================");
            printf("\n1.Go Back To Main Menu");
            printf("\n2.Exit");
            printf("\n===========================");
            printf("\nYour Choice=> ");
            scanf("%d",&v);
            fflush(stdin);
            if(v==1)
             {
               mainfunction();
             }
            else if(v==2)
             {
               exit(1);
             }
        }
        break;
    }
    case 3:
    {
        printf("Enter Room Number: ");
        scanf("%d",&r);
        fflush(stdin);
        for(i=0; i<num; i++)
        {
            if(r==g[i].r_num)
            {
                k1=i;
                u1++;
            }
        }
        if(u1!=0)
        {
            printf("\nSERIAL NUMBER: %d",k1+1);
            printf("\nNAME: %s",g[k1].name);
            printf("\nCONTACT NUMBER:: %d",g[k1].contact_num);
            printf("\nNATIONAL ID: %d",g[k1].NID);
            printf("\nROOM  NUMBER: %d",g[k1].r_num);
            printf("\nADDRESS");
            printf("\n=>House Number: %d",g[k1].ad.house_no);
            printf("\n=>Street Name: %s",g[k1].ad.street);
            printf("\n=>ZIP Code: %d",g[k1].ad.zipcode);
            printf("\n\n===========================");
            printf("\n1.Go Back To Main Menu");
            printf("\n2.Exit");
            printf("\n===========================");
            printf("\nYour Choice=> ");
            scanf("%d",&v);
            fflush(stdin);
            if(v==1)
               {
                  mainfunction();
               }
            else if(v==2)
              {
                 exit(1);
              }
        }
        else
        {
            printf("THIS ROOM IS EMPTY");
            printf("         SORRY!");
            printf("\n\n===========================");
            printf("\n1.Go Back To Main Menu");
            printf("\n2.Exit");
            printf("\n===========================");
            printf("\nYour Choice=> ");
            scanf("%d",&v);
            fflush(stdin);
            if(v==1)
              {
                mainfunction();
              }
            else if(v==2)
             {
                 exit(1);
             }
        }
        break;
    }
    case 4:
    {
        printf("\nEnter Contact Number: ");
        scanf("%d",&c1);
        fflush(stdin);
        for(i=0; i<num; i++)
        {
            if(c1==g[i].contact_num)
            {
                k2=i;
                u2++;
            }
        }
        if(u2!=0)
        {
            printf("\nSERIAL NUMBER: %d",k2+1);
            printf("\nNAME: %s",g[k2].name);
            printf("\nCONTACT NUMBER: %d",g[k2].contact_num);
            printf("\nNATIONAL ID: %d",g[k2].NID);
            printf("\nROOM  NUMBER: %d",g[k2].r_num);
            printf("\nADDRESS\n");
            printf("\n=>HOUSE NUMBER: %d",g[k2].ad.house_no);
            printf("\n=>STREET NAME: %s",g[k2].ad.street);
            printf("\n=>ZIP CODE: %d",g[k2].ad.zipcode);
            printf("\n\n===========================");
            printf("\n1.Go Back To Main Menu");
            printf("\n2.Exit");
            printf("\n===========================");
            printf("\nYour Choice=> ");
            scanf("%d",&v);
            fflush(stdin);
            if(v==1)
              {
                 mainfunction();
              }
            else if(v==2)
              {
                exit(1);
              }
        }
        else
        {
            printf("\nNO  MATCH  FOUND");
            printf("  \n\n\n  SORRY!");
            printf("\n\n===========================");
            printf("\n1.Go Back To Main Menu");
            printf("\n2.Exit");
            printf("\n===========================");
            printf("\nYour Choice=> ");
            scanf("%d",&v);
            fflush(stdin);
            if(v==1)
              {
                 mainfunction();
              }
            else if(v==2)
              {
                 exit(1);
              }
        }
        break;
    }
    default:
    {
        printf("         WORNG INPUT!");
        printf("\n\n=>Press 1 to Enter Search Menu Again");
        printf("\n=>Press 2 to Go Back Main Menu");
        printf("\n\nEnter Your Selection: ");
        scanf("%d",&c2);
        fflush(stdin);
        if(c2==1)
        {
            khoz();
        }
        else if(c2==2)
        {
            mainfunction();
        }
        break;
    }

    }
}
void del()
{
    int e,o,v;
    char ch;
    printf("\nEnter the Serial Number of Guest Whose Information You Want to Delete: ");
    scanf("%d",&e);
    fflush(stdin);
    printf("\nWhat Do You Want to Delete?");
    printf("\n1) Whole Entry");
    printf("\n2) Name");
    printf("\n3) Contact Number");
    printf("\n4) National ID");
    printf("\n5) Room Number");
    printf("\n6) Address");
    printf("\nEnter Your Selection: ");
    scanf("%d",&o);
    fflush(stdin);
    if(o==1)
    {
       while(e-1<num)
       {
           strcpy(g[e-1].name,g[e].name);
           g[e-1].contact_num=g[e].contact_num;
           g[e-1].NID=g[e].NID;
           g[e-1].r_num=g[e].r_num;
           g[e-1].ad.house_no=g[e].ad.house_no;
           strcpy(g[e-1].ad.street,g[e].ad.street);
           g[e-1].ad.zipcode=g[e].ad.zipcode;
           e++;
       }
       num--;
    }
    else if(o==2)
    {
        strcpy(g[e-1].name,"Deleted");
    }
    else if(o==3)
    {
      g[e-1].contact_num=0;
    }
    else if(o==4)
    {
        g[e-1].NID=0;
    }
    else if(0==5)
    {
        g[e-1].r_num=0;
    }
    else if(o==6)
    {
        printf("What Do You Want to Delete from Address?");
        printf("\n1) House Number");
        printf("\n2) Street Name");
        printf("\n3) ZIP Code");
        printf("\n4) Full Address");
        printf("\nEnter Your Selection: ");
        scanf("%c",&ch);
        fflush(stdin);
        if(ch=='1')
        {
          g[e-1].ad.house_no=0;
        }
        else if(ch=='2')
        {
            strcpy(g[e-1].ad.street,"Deleted");
        }
        else if(ch=='3')
        {
            g[e-1].ad.zipcode=0;
        }
        else if(ch=='4')
        {
            g[e-1].ad.house_no=0;
            strcpy(g[e].ad.street,"Deleted");
            g[e].ad.zipcode=0;
        }
    }
    printf("\n\nINFORMATION SUCCESSFULLY DELETED");
    printf("\n\n\n       THANK YOU!                    ");

}

void read()
{
    int i;
    FILE *fp = fopen("hotel.txt","r");
    if(fp == NULL)
    {
        fp = fopen("hotel.txt","w");
        fclose(fp);
        printf("ERROR!");
        exit(1);
    }

    num = fread(g, sizeof(struct guest),100, fp);
    printf("%d\n", num);
    fclose(fp);
}
void write()
{
    FILE *fp = fopen("hotel.txt","w");
    if(fp == NULL)
    {
        printf("ERROR!");
        exit(1);
    }

    fwrite(g, sizeof(struct guest),num, fp);

    fclose(fp);
}
void logo()
{
printf("HHHH       HHHH");
printf("\nH**H       H**H");
printf("\nH**H       H**H");
printf("\nH**H       H**H");
printf("\nH**H       H**H");
printf("\nH**H       H**H");
printf("\nH*************H");
printf("\nHHHHHHHHHHHHHHH      HOTEL  SUNSET ");
printf("\nH*************H            Comfort Is Above All        ");
printf("\nH**H       H**H");
printf("\nH**H       .****.");
printf("\nH**H      * $$$$ *");
printf("\nH**H     * $ *** $*");
printf("\nH**H     * $*");
printf("\nHHHH      * $ *");
printf("\n           * $ *");
printf("\n            * $ *");
printf("\n              * $ *");
printf("\n               * $ *");
printf("\n                * $ *");
printf("\n                 *$ *");
printf("\n                 *$ *");
printf("\n          *$ *** $ *");
printf("\n           * $$$$ *");
printf("\n             ****");
}
void p_info()
{
    printf("\nProgrammers Information");
    printf("\n===========================");
    printf("\n1.Name: Abrar Sultan Hud                 ID:1631775642");
    printf("\nCourse: CSE115                           Sec:3        ");
    printf("\nDepartment: ECE");
    printf("\n\n\n2.Name: Shuvo Bhowmick               ID:1632409642");
    printf("\nCourse: CSE115                           Sec:3        ");
    printf("\nDepartment: ECE");
    printf("\n\n\n2.Name: MD.Sifat                     ID:1632285042");
    printf("\nCourse: CSE115                           Sec:3        ");
    printf("\nDepartment: ECE");
    printf("\n\n\n2.Name: MD.Rakibuzzaman Helal        ID:1621360642");
    printf("\nCourse: CSE115                           Sec:3        ");
    printf("\nDepartment: ECE");
    printf("\n\n\n===========================================================================");
    printf("\n                       THANK YOU                                               ");
    printf("                            :D                                                   ");
    printf("\n===============================================================================");
}






