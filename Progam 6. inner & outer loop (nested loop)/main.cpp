#include <stdio.h>
#include <conio.h>

using namespace std;

int main ()
{
    int a,b;
    for (a=1; a<=5; a++)
    {
        for (b=1; b<=5; b++)
            printf ("%d x %d = %d\t",a,b,(a*b));
    }
    getch();
    return 0;
}
