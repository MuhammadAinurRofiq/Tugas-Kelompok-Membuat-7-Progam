#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    int z;
    for (z=1; z<=15; z++)
    {
        if(z%2==0) continue;
            printf ("%d\t",z);
    }
    printf ("%d\t",z);

    getch ();

    return 0;
}
