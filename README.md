The output of the program and commands to execute the program


-------------------sender_Chat-------------------------

pramod@Pramod:~/c_programs/IPC_programs$ gcc -o sender sender_chat.c

pramod@Pramod:~/c_programs/IPC_programs$ ./sender

Enter your name: Pramod
Type messages (Ctrl+C to quit):
Hello
Where are you
How's everything going
Bye
^C
[System]: Exiting chat...

---------------------Receiver_Chat---------------------

pramod@Pramod:~/c_programs/IPC_programs$ gcc -o receiver receiver_chat.c

pramod@Pramod:~/c_programs/IPC_programs$ ./receiver

Listening for messages...
[Pramod]: Hello
[Pramod]: Where are you
[Pramod]: How's everything going
[Pramod]: Bye
[System]: Pramod has left the chat.
