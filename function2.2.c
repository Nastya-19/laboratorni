#include <stdio.h> 

int max (float a, float b) 
{ 
int x; 
if (a > b) { 
x = a; 
} else { 
x = b; 
} 
return x; 
} 

int main () 
{ 
int a = 24, b = 100, y; 
y = max(a, b); 
printf("%d", y); 

return 0; 
}
