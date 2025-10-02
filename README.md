The output of the program and commands to execute the program


-------------------sender_Chat-------------------------


pramod@Pramod:~/c_programs/IPC_programs$ gcc -o sender sender_chat.c
pramod@Pramod:~/c_programs/IPC_programs$ ./sender
Enter your name: Pramod
Type messages (Ctrl+C to quit):
hello
hii
bye
How are you Pramod

---------------------Receiver_Chat---------------------


pramod@Pramod:~/c_programs/IPC_programs$ gcc -o receiver receiver_chat.c
pramod@Pramod:~/c_programs/IPC_programs$ ./receiver
Listening for messages...
[Pramod]: hello
[Pramod]: hii
[Pramod]: bye
[Pramod]: How are you Pramod
