# Socket-Server
This is a socket server listener, written in C, and setup to receive incomming connections.

## Background
I followed open-soruce resources on how to setup socket connections between host and client with the purpose of learning how TCP connections are programmed. 

## Server Setup
### Disclaimer:
This program was written on a macOS device. The C compiler may be different than one you use on Windows. After cloning the repo, I would suggest following [this](https://www.geeksforgeeks.org/techtips/how-to-compile-and-run-c-program-in-terminal/) guide on how to compile a program in C. The guide also includes a compiler to download incase you do not have one. 
### Step 1: Clone the repo
Open a command terminal/prompt, then copy and paste the command below, then hit enter:
```
git clone https://github.com/kenfonseca/Socket-Server.git
```
### Step 2: Traverse into the server files
macOS or Linux: copy and paste or write the following command, then hit enter:
```
cd source/server-files
```
### Step 3: Compile the server files
Copy and paste or write the following command, then hit enter:
```
make
```
### Step 4: Start the server
Copy and paste or write the following command:
```
./server
```
You can use any port number that is not in service to run the program in case the default port, '12049', is in use:
```
./server 13568
```
The server should now be running.

## Client Setup
### Step 1: Another window
Keep the server running, then open another command terminal/prompt window or tab

### Step 2: Download telent
You can use any software that will create TCP connections.
I am using [telnet for macOS](https://formulae.brew.sh/formula/telnet), and here is [telnet for Windows](https://learn.microsoft.com/en-us/previous-versions/windows/it-pro/windows-server-2008-R2-and-2008/cc754293(v=ws.10)) for download.
If you're using Linux, copy and paste the command below, then hit enter:
```
sudo apt update  
sudo apt install telnet
```

### Step 3: Connect to Server
Copy and paste or write the following command:
```
telnet 127.0.0.1 12049
```
Telnet should connect you to the server that you have previously spun up. (You'll know if it has)
