/* server.h */

#ifndef SERVER
#define server

#define _GNU_SOURCE

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include <assert.h>
#include <errno.h>
#include <stddef.h>
#include <stdarg.h>

#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>

// Listen for localhost
#define HOST       "127.0.0.1"
// Random port to broadcast
#define PORT       "12049"

// Struct for client side connctions
struct s_client {
    int s; // socket file descriptor
    char ip[16]; // IP address
    u_int16_t port; // Port number
};
typedef struct s_client Client;

void assert_perror(int);
void zero(u_int8_t*,u_int16_t);
void mainLoop(int);
void childLoop(Client*);
int initServer(u_int16_t);
int main(int, char**);

#endif