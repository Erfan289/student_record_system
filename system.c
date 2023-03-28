
#include<stdio.h>
#include"system.h"


void system_init(){
   int IDENTITY;
   printf("enter your identity \n");
   printf("1:user \n2:admin");
   scanf("%d",&IDENTITY);
   if(IDENTITY==user)
   printf("please enter your password");
   scanf("%d",&entered_pass);
   if(entered_pass==pass){
   printf("helo ,admin");
   activate_user_mode();}
    else
    printf("wrong password");




}
