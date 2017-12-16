#include<stdio.h>
#include<string.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<stdint.h>
#include<errno.h>

#define portnum 8888  //define the port number
#define SFC_AMMOUNT 3

typedef struct sfc {
    int vf;
    char ip[15];
    unsigned char mac[6];
    uint32_t sa_ip;
    //struct sfc *next;
}sfc_t;

int sfc_proc(FILE *fp, int list[])
{
    //sfc_t *head = NULL, *cur = NULL;
    sfc_t sfc_list[SFC_AMMOUNT];
    int sfc_bool = 0;
    int sock;
    struct sockaddr_in server;
    
    /*test init*/
    strcpy(sfc_list[0].ip,"172.16.10.204");
    sfc_list[0].vf = 3;
    unsigned char tmp_mac0[6] = {0xba,0xd5,0x47,0xc0,0xcf,0x81};
    for(int i=0; i<6; i++)
	sfc_list[0].mac[i] = tmp_mac0[i];
    sfc_list[0].sa_ip = inet_addr("172.16.10.102");
    strcpy(sfc_list[1].ip,"172.16.10.202");
    sfc_list[1].vf = 1;
    unsigned char tmp_mac1[6] = {0xbe,0x61,0x9d,0xc1,0xe1,0x98};
    for(int i=0; i<6; i++) {
        sfc_list[1].mac[i] = tmp_mac1[i];
	printf("%x\n", sfc_list[1].mac[i]);
    }
    //printf("1 mac = %pM\n", sfc_list[1].mac);
    sfc_list[1].sa_ip = inet_addr("172.16.10.102");
    strcpy(sfc_list[2].ip,"172.16.10.203");
    sfc_list[2].vf = 2;
    unsigned char tmp_mac2[6] = {0x02,0xe5,0xec,0x20,0x11,0x9a};
    for(int i=0; i<6; i++)
        sfc_list[2].mac[i] = tmp_mac2[i];
    sfc_list[2].sa_ip = inet_addr("172.16.10.102");
    //Set up the protocol type, IP Address and port number
    
    sock = socket(AF_INET,SOCK_STREAM,0);
    if (sock == -1) {
        //puts("Could not create socket.");
    }
    puts("Socket created.");
    
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr(sfc_list[0].ip);
    server.sin_port = htons(portnum);
    
    //Connect to remote server
    if (connect(sock,(struct sockaddr *)&server,sizeof(server)) < 0) {
        //perror("connect failed. Error");
	fprintf(fp, "connect error %d\n", errno);
        return 1;
    }
    //Send data
    if (send(sock,sfc_list,SFC_AMMOUNT*sizeof(sfc_t),0) < 0) {
        //puts("Send failed");
	fprintf(fp, "send error %d\n", errno);
        return 1;
    }
    //Receive a reply from the server
    if (recv(sock,&sfc_bool,sizeof(int),0) < 0) {
	fprintf(fp, "recv error\n");
        //puts("recv failed");
        return 1;
    }
    fprintf(fp, "sfc bool = %s\n", sfc_bool==1 ? "sfc sucessfully set" : "sfc set fail");
    close(sock);
    
    /*head = (struct sfc*)malloc(sizeof(sfc_t));
    head->vf = vf[0];
    for (int i=1,prev=head; i<SFC_AMMOUNT; i++) {
        cur = (struct sfc*)malloc(sizeof(sfc_t));
        cur->vf = vf[i];
        cur->next = NULL;
        prev->next = cur;
        prev = cur;
    }*/

    return 0;
}
