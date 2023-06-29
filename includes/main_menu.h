#pragma once

#ifdef _WIN32 // assume Windows
    #include "..\includes\structs.h"
#else // assume POSIX or similar
    #include "../includes/structs.h"
#endif

// main menu functions declarations
void main_menu(Store** stores_pointer, Store* stores, Client** clients_pointer, Client* clients);
void main_menu_text();
void register_new_client(Client** clients_pointer);
void remove_client();
void list_active_clients();
void client_management_menu();
void register_new_store(Store** stores_pointer);
void remove_store(Store* stores, Client* clients);
void sort_by_total_spent();
void save_as_csv_menu();