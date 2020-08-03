//To find the grade of a student.
Program:
 #include<studio.h>
 int main()
{
int s1,S2,S3,S4,s5,s6,per;
printf("enter marks of six subjects\n");
scanf("%d,%d,%d,%d,%d,%d",&s1,&s2,&S3,&s4,&s5,&s6);
per=(s1+s2+s3+s4+s5+s6)/6.0;
if(per>100)
printfyou have entered wrong marks re_enter again\n);
else if(per>=85)
printf("grade A\n");
else if(per>=70)
printf("grade B\n");
else if(per>=55)
printf("grade C\n");
else if(per>=40)
printf("grade D\n");
else
printf("grade F\n");
return 0;
}
