//raj_goswami

#include<stdio.h>
#include<math.h>
int main()
{ int choice;
  printf("enter your choice whether you have \n (1) Base and Height \n (2) Three Sides \n (3) Equilateral Triangle\n");
  printf(" (4) an angle and two sides \n (5) two angles and one side : \n \n ");
  scanf("%d",&choice);
 


    
        if(choice==1)
           
           {
                float a , b , s , area ;
            printf("enter value of height and base of triangle");
            scanf("%f%f", &a,&b);
            s=(a*b)/2;
            area=s;
            printf("area of your triangle is = %.3f",area);
        
            
           }
           if(choice==2) {
                 float a , b , c , s , area ;
                 printf("enter the size of each side of triangle  \n");
                 scanf("%f%f%f",&a,&b,&c);
                 s=(a+b+c)/2;
                 area =sqrt(s*(s-a)*(s-b)*(s-c));
                 printf("area of your triangle is  %.4f",area);
                 
                 
                }
              
              if(choice==3)
              {
                   float a , area ;
                   printf("enter the length of  the side of  equilateral triangle \n ");
                   scanf("%f",&a);
                   area=sqrt(3)/4 * a * a;
                    printf("area of your equilateral triangle is  %.4f",area);

              }

              if(choice==4)
              {
                    double a , b ,area; double x ,y; double angle;
                    printf("enter the values for two sides  :\n");
                    scanf("%lf%lf",&a,&b);
                    printf("enter the value of  angle  in degree:\n");
                    scanf("%lf",&x);
                    x=x*3.14/180;
                    
                    angle = sin(x);   //finding value of angle given

                    area=angle*a*b*1/2;
                    printf("area of the traignle is %.6lf",area);
              }
             
              if(choice==5)
              {
                    double a, b,c, area , side;
                    double x,y,z;
                    double angle1 ,angle2,angle3; 
                    double angle;
                    int konsi,konangle;


                    printf("enter which angles you have : \n 1) Angle A & B \n 2) Angle B & C\n 3) Angle A & C\n");
                    scanf("%d",&konangle);

                    if(konangle==1)
                    {
                          printf("enter the value of angles you have in degree :\n");
                          scanf("%lf%lf",&angle1,&angle2);
                          angle3= 180 - (angle1+angle2);

                          x=angle1*3.14/180;
                          y=angle2*3.14/180;
                          z=angle3*3.14/180;

                          x=sin(x);
                          y=sin(y);
                          z=sin(z);
                    }
                  

                    if(konangle==2)
                    {
                          printf("enter the value of angles you have in degree :\n");
                          scanf("%lf%lf",&angle2,&angle3);
                          angle1= 180 - (angle2+angle3);

                          x=angle1*3.14/180;
                          y=angle2*3.14/180;
                          z=angle3*3.14/180;

                          x=sin(x);
                          y=sin(y);
                          z=sin(z);
                    }

                    if(konangle==3)
                    {
                          printf("enter the value of angles you have in degree :\n");
                          scanf("%lf%lf",&angle1,&angle3);
                          angle2= 180 - (angle1+angle3);

                          x=angle1*3.14/180;
                          y=angle2*3.14/180;
                          z=angle3*3.14/180;

                          x=sin(x);
                          y=sin(y);
                          z=sin(z);
                    }

                         printf("which side you have : \n 1) a \n 2) b \n 3) c \n");
                         scanf("%d",&konsi);
                      
                    if(konsi==1)                        //when side a is given
                    {printf("enter the value of side you have : \n");
                    scanf("%lf",&a);

                    b=a*y/x;                
                    c=a*z/x;
                    
                    }

                    if(konsi==2)                        //when side b is given
                    {printf("enter the value of side you have : \n");
                    scanf("%lf",&b);

                    a=b*x/y;                
                    c=b*z/y;
                    
                    }

                    if(konsi==3)                        //when side c is given
                    {printf("enter the value of side you have : \n");
                    scanf("%lf",&c);
                    a=c*x/z;                     
                    b=c*y/z;
                    
                    }

                    area = a*b*z*1/2;
                    printf("area of the traignle is %.6lf",area);
                       
                      
              }    
             
             
              if(choice>5||choice<=0)
              {
                    puts("invalid choice !!!");
              }

     return 0;

    
}
