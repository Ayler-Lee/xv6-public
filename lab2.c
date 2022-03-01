#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
    int pid = fork();

    if (pid > 0) {
        int status;
         wait(&status);
         printf(1, "child status %d", status);
         exit();
    } else if (pid == 0) {
        printf(1, "child process: %d", pid);
        exitStatus(111);
    }
    exit();
}