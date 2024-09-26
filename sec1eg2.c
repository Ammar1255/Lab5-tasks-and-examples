#include <stdio.h> 
int main() 
{  
int temperature;  
printf("Enter the temperature in Celsius: ");  
scanf("%d", &temperature);  
if (temperature >= 30)  
{  
if (temperature >= 40) {  
printf("It's very hot outside!\n");  
} else {  
printf("It's hot outside.\n"); }  
}  
else if (temperature >= 20)  
{ printf("It's warm outside.\n");  
} else if (temperature >= 10)  
{ printf("It's cool outside.\n");  
} else 
{ printf("It's cold outside.\n");  
}  
return 0;  
}

