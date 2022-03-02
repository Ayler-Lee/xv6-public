#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
    int pid = fork();

    if (pid > 0) {
        int status;
        //  int cpid = wait(&status);
        int wpid = waitpid(pid, &status, 0);
        if (wpid == pid) {
            printf(1, "child status: %d, pid: %d, cpid: %d\n", status, pid, wpid);
        }
         exit();
    } else if (pid == 0) {
        printf(1, "child sleeping");
        sleep(5);
        int status = 123;
        printf(1, "child exit: %d", status);
        exitStatus(status);
    }
    exit();
}