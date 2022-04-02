#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{    
    if (argc >= 1) {
        int val = atoi(argv[1]);
        updateprior(val);
        int limit = 4300;
        for (int i = 0; i < limit; i++) {
            asm("nop");
            for (int j = 0; j < limit; j++) {
                asm("nop");
            }
        }
    }
    exit();
}