
#include<stdio.h>
#include<conio.h>
int main()
{
    int nbus=0,ntruck=0,ncar=0,nmotor_cycle=0,nother=0,type,tv;
    float tt ;
    printf("Day report\n");
            while(1<2)
            {
                printf("Enter type(1:Bus,2:Truck,3:car,4:Motor_Cycle,5:Other)");
                scanf("%d",&type);
                if(type<=0||type>5)
                    break;
                if(type==1)nbus++;
                if(type==2)ntruck++;
                if(type==3)ncar++;
                if(type==4)nmotor_cycle++;
                if(type==5)nother++;
                  tt=(nbus*28)+(ntruck*28*.75)+(ncar*28*.50)+(nmotor_cycle*28*.25)+(nother*28*.20);
                  tv= nbus+ntruck+ncar+nmotor_cycle+nother;
            }

            printf("number of bus = %d\n",nbus);
            printf("number of car = %d\n",ncar);
            printf("number of truck = %d\n",ntruck);
            printf("number of motor_cycle = %d\n",nmotor_cycle);
            printf("number of other vehicle = %d\n",nother);
            printf("Collected toll from bus = %d\n",nbus*28);
            printf("Collected toll from car = %d\n",ncar*28*.50);
            printf("Collected toll from truck = %d\n",ntruck*28*.75);
            printf("Collected toll from motor cycle = %d\n",nmotor_cycle*28*.25);
            printf("Collected toll from other verhicle = %d\n",nother*28*.20);

            printf("Total number of vehicles =%d\n2",tv);
            printf("Total collected money from the toll =%f tk",tt);
            return 0;


}

