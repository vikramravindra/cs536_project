/* --------------- Alice -----------------------*/
#include <thread>

#include "server.cpp"
#include "client.cpp"

#define ALICE_PORT 1111
#define CAROL_PORT 2222
#define BOB_PORT 3333

int main()
{
	char ip[] = "127.0.0.1";
	std::thread server_thread(server, ALICE_PORT);
	std::thread client_thread_1(client, ip, CAROL_PORT);
	std::thread client_thread_2(client, ip, BOB_PORT);

	server_thread.join();
	client_thread_1.join();
	client_thread_2.join();

	return 1;

}
