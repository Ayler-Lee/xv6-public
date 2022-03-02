#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
    int pid = fork();

    if (pid > 0) {
        int status;
         int cpid = waitpid(pid, &status, 0);
         printf(1, "child status: %d, pid: %d, cpid: %d", status, pid, cpid);
         exit();
    } else if (pid == 0) {
        int status = 123;
        printf(1, "child exit: %d", status);
        exitStatus(status);
    }
    exit();
}