#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void error_and_exit(char *message, int exit_code) {
    dprintf(STDERR_FILENO, "%s", message);
    exit(exit_code);
}

int main(int argc, char *argv[]) {
    int fd_from, fd_to;
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read;

    if (argc != 3) {
        error_and_exit("Usage: cp file_from file_to\n", 97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from < 0) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
    if (fd_to < 0) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(fd_from);
        exit(99);
    }

    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        if (write(fd_to, buffer, bytes_read) != bytes_read) {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(fd_from);
            close(fd_to);
            exit(99);
        }
    }

    if (bytes_read < 0) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    if (close(fd_from) < 0) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }

    if (close(fd_to) < 0) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return 0;
}

