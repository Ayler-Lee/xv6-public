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
            if (wpid == pid1) {
                printf(1, "child status: %d, pid: %d\n", status, wpid);
            }
            exit();
        } else {
            int status = 234;
            printf(1, "child - %d exit: %d", pid2, status);
            exitStatus(status);
        }
    } else if (pid1 == 0) {
        int status = 123;
        printf(1, "child - %d exit: %d", pid1, status);
        exitStatus(status);
    }
    exit();
}