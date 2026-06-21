#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clear_screen()
{
    system("clear");
}

void pause_screen()
{
    printf("\nPress Enter to continue...");
    getchar();
    getchar();
}

void ping_host()
{
    char host[100];

    printf("\nEnter Host/IP: ");
    scanf("%99s", host);

    char command[200];

    snprintf(command, sizeof(command),
             "ping -c 4 %s", host);

    system(command);
}

void dns_lookup()
{
    char domain[100];

    printf("\nEnter Domain: ");
    scanf("%99s", domain);

    char command[200];

    snprintf(command, sizeof(command),
             "getent hosts %s", domain);

    system(command);
}

void show_interfaces()
{
    printf("\n=== Network Interfaces ===\n\n");

    system("ip -brief address");
}

void show_routing_table()
{
    printf("\n=== Routing Table ===\n\n");

    system("ip route");
}

void check_connectivity()
{
    printf("\nChecking connectivity...\n\n");

    int status = system(
        "ping -c 1 -W 2 8.8.8.8 > /dev/null");

    if (status == 0)
    {
        printf("Internet Connection: AVAILABLE\n");
    }
    else
    {
        printf("Internet Connection: NOT AVAILABLE\n");
    }
}

void show_menu()
{
    printf("\n");
    printf("=====================================\n");
    printf("        NetDiag Toolkit v1.0\n");
    printf("=====================================\n");
    printf("1. Ping Host\n");
    printf("2. DNS Lookup\n");
    printf("3. Show Network Interfaces\n");
    printf("4. Show Routing Table\n");
    printf("5. Check Internet Connectivity\n");
    printf("6. Exit\n");
    printf("=====================================\n");
    printf("Choice: ");
}

int main()
{
    int choice;

    while (1)
    {
        clear_screen();

        show_menu();

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid Input!\n");
            return 1;
        }

        switch (choice)
        {
            case 1:
                ping_host();
                pause_screen();
                break;

            case 2:
                dns_lookup();
                pause_screen();
                break;

            case 3:
                show_interfaces();
                pause_screen();
                break;

            case 4:
                show_routing_table();
                pause_screen();
                break;

            case 5:
                check_connectivity();
                pause_screen();
                break;

            case 6:
                printf("\nGoodbye!\n");
                return 0;

            default:
                printf("\nInvalid Choice!\n");
                pause_screen();
        }
    }

    return 0;
}