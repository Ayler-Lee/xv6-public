#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
    int pid1 = fork();

    if (pid1 > 0) {
        int status;
        //  int cpid = wait(&status);
        int pid2 = fork();
        if (pid2 > 0) {
            int wpid = waitpid(pid1, &status, 0);
            printf(1, "wpid: %d status: %d\n",wpid, status);
        } else if (pid2 == 0) {
            int status = 234;
            printf(1, "pid2: %d", status);
            exitStatus(status);
        } else {
            printf(1, "fork error!");
        }
    } else if (pid1 == 0) {
        int status = 123;
        printf(1, "pid1: %d", status);
        exitStatus(status);
    } else {
        printf(1, "fork error!");
    }
    exit();
}