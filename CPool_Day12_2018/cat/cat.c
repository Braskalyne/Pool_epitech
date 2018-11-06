/*
** EPITECH PROJECT, 2018
** cat.c
** File description:
** cat
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void my_putchar(char c);

void my_open_failed(int argc, char **argv)
{
    int i = 1;
    int j = 0;

    while (i != argc) {
        write(2, "cat: ", 5);
        while (argv[i][j]) {
            j = j + 1;
        }
        write(2, argv[i], j);
        j = 0;
        write(2, ": No such file or directory", 27);
        write(2, "\n", 1);
        i = i + 1;
    }
}

void my_infinite_loop(int argc)
{
    int size;
    char buffer[30000];

    if (argc < 2) {
        while (2 < 3) {
            size = read(1, buffer, 29999);
            buffer[size] = '\0';
            write(1, buffer, size);
        }
    }
}

int main(int argc, char **argv)
{
    int fd = 0;
    char buffer[30000];
    int size;
    int j = 1;

    my_infinite_loop(argc);
    while (j != argc) {
        size = 1;
        fd = open(argv[j], O_RDONLY);
        if (fd == -1) {
            my_open_failed(argc, argv);
            return (0);
        }
        while (size > 0) {
            size = read(fd, buffer, 29999);
            buffer[size] = '\0';
            write(1, buffer, size);
        }
        close(fd);
        j = j + 1;
    }
}
