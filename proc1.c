#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{    
    if (argc >= 1) {
        updateprior(1);
        int limit = 43000;
        int i, j;
        for (i = 0; i < limit; i++) {
            asm("nop");
            for (j = 0; j < limit; j++) {
                asm("nop");
            }
        }
    }
    exit();
}