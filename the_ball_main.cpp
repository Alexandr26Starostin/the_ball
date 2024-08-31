#include <TXLib.h>

int main()
{
    txCreateWindow (900, 800);

    int x = 450, y = 400;
    txCircle (x, y, 30);

    int vx = 10, vy = 10;

    for (;;)
    {
        txSleep (100);

        x += vx;
        y += vy;
        txSetFillColor (RGB (x, y, x + y));
        txCircle (x, y, 30);

        if (x >= 900 || x <= 0)
        {
            vx *= -1;
        }

        if (y >= 800 || y <= 0)
        {
            vy *= -1;
        }
    }


    return 0;
}