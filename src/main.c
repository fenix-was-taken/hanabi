#include <genesis.h>
#include <resources.h>
#include <string.h>

int main()
{
    VDP_drawText("Hello, world.", 10,13);
    while(1)
    {
        //For versions prior to SGDK 1.60 use VDP_waitVSync instead.
        SYS_doVBlankProcess();
    }
    return (0);
}
