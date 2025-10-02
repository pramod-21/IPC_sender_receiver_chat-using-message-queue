// chat_send.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <unistd.h>

#define MSG_KEY 1234

struct msg_buffer {
    long msg_type;
    char sender[20];
    char text[100];
};

int main() {
    int msgid = msgget(MSG_KEY, 0666 | IPC_CREAT);
    if (msgid == -1) {
        perror("msgget");
        exit(1);
    }

    struct msg_buffer message;
    message.msg_type = 1;   // Arbitrary type for chat

    printf("Enter your name: ");
    fgets(message.sender, sizeof(message.sender), stdin);
    message.sender[strcspn(message.sender, "\n")] = '\0'; // remove newline

    printf("Type messages (Ctrl+C to quit):\n");
    while (1) {
        fgets(message.text, sizeof(message.text), stdin);
        message.text[strcspn(message.text, "\n")] = '\0';

        if (msgsnd(msgid, &message, sizeof(message) - sizeof(long), 0) == -1) {
            perror("msgsnd");
            exit(1);
        }
    }

    return 0;
}

