#include<stdio.h>
#include<math.h>
int main(){
float freetime;
float freetime2;
float Pagetime;
float onekahtma;
int khatmas;
printf("Press any key");
getchar();
printf("Ramadan Mubarak to all of you homies\n");
printf("This program will help you to know how many khatmas you can do this ramadan\n");
printf("How much free time do you have per day( in hours): \n");
scanf("%f",&freetime);
if(freetime>0 && freetime<12){
freetime2 = freetime * 60 * 30;
printf("How long it takes to complete one page(in minutes): \n");
scanf("%f",& Pagetime);
if( Pagetime>10){
printf("the turtle read faster than you");
}
else{
onekahtma = 604*Pagetime;
khatmas = freetime2/onekahtma;
printf("the number of khatmas you can make is %d \n", khatmas);
printf("plz try to do at least one khatma and don't forget to make dua for us and our brothers in Palestine");
}}
else{
printf("we're not playing here");
}


return 0;
}