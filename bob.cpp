/* ------------ bob -------------*/

#include "helper.cpp"
#define ALICE_PORT 1111
#define CAROL_PORT 2222
#define BOB_PORT 3333

int main()
{
	std::thread server_thread(server, BOB_PORTNO);
	std::thread client_thread_1(client, "127.0.0.1", ALICE_PORTNO);
	std::thread client_thread_2(client, "127.0.0.1", CAROL_PORTNO);

	server_thread.join();
	client_thread_1.join();
	client_thread_2.join();
	return 1;

}



