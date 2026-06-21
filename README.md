# NetDiag Toolkit

A simple Linux network diagnostic toolkit written in C.

NetDiag Toolkit provides basic networking utilities through a command-line interface, allowing users to perform common network troubleshooting tasks from a single menu-driven application.

---

## Features

* Ping a host or IP address
* DNS lookup for domain names
* Display network interfaces
* Show routing table information
* Check internet connectivity
* Simple terminal-based interface

---

## Technologies Used

* C Programming Language
* GCC Compiler
* Linux Networking Utilities
* Makefile

---

## Project Structure

```text
netdiag-toolkit/
├── src/
│   └── main.c
├── Makefile
├── README.md
└── screenshots/
```

---

## Build Instructions

Compile the project:

```bash
make
```

This will generate the executable:

```bash
netdiag
```

---

## Running the Program

```bash
./netdiag
```

---

## Available Functions

### Ping Host

Tests connectivity to a host using ICMP ping.

Example:

```text
google.com
8.8.8.8
```

---

### DNS Lookup

Resolves a domain name to its IP address.

Example:

```text
github.com
openai.com
```

---

### Show Network Interfaces

Displays available network interfaces and their assigned addresses.

---

### Show Routing Table

Displays the system routing table.

---

### Internet Connectivity Check

Checks whether the system can reach the internet.

---

## Learning Objectives

This project was created to:

* Practice C programming
* Learn Linux command-line networking tools
* Understand basic network diagnostics
* Improve software project structure and documentation skills
* Gain experience using Makefiles and Git

---

## Author

Shaurya Pratap Singh

B.Tech Computer Science Student

Linux Enthusiast | Networking | Cybersecurity | Open Source
