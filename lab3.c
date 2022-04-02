#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{    
    if (argc >= 1) {
        int val = atoi(argv[1]);
        printf(1, "argc: %d, argv: %s\n", argc, argv);
        updateprior(val);
        int limit = 4300;
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