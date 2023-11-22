#include<stdio.h>
int main ()

{  

char in;  

int bill;  

printf ("Enter the number of credits user has taken ") ; 

scanf("%c", &in);  

if (in<=1000)  

{

bill = 15;

}  

else if (in>1000 && in<2000)  

{

bill = (( in - 1000) * 0.0175);

}

else if (in>2000 && in<3000)  

{ 

bill =  (( in - 1000) *0.02);
}



else 

{
	bill = 70;

return  bill;
} 



}
