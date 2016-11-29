//client.c
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>



int main()
{
   int client_to_server;
   char *myfifo = "/tmp/client_to_server_fifo";

   int server_to_client;
   char *myfifo2 = "/tmp/server_to_client_fifo";

   char str[BUFSIZ];
   char str2[BUFSIZ];

   client_to_server = open(myfifo, O_WRONLY);
   server_to_client = open(myfifo2, O_RDONLY);

   /* write str to the FIFO */

   while (1)
   {

   printf("Input message to server: ");
   scanf("%s", str);
   write(client_to_server, str, sizeof(str));
   read(server_to_client,str2,sizeof(str2));


   printf("...received from the server: %s\n",str2);
   if (strcmp("exit",str2)==0)
      {
         printf("Client OFF.\n");
         break;
      }

      /* clean buf from any data */
      memset(str, 0, sizeof(str));
      memset(str2, 0, sizeof(str2));

   }
   close(client_to_server);
   close(server_to_client);

   /* remove the FIFO */

   return 0;
}
