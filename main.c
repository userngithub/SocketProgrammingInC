/***********************************************************************
** Socket Programming in C                                             *
** Progetto per Maturità di Nestor Gutierrez V informatica serale      *
** A.S. 2018 - ITIS Molinari, Milano                                   *
***********************************************************************/



#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "webpage_con.h"
#define NUM_PORT 80

/***********************************************************************
** Prototype                                                           *
***********************************************************************/
int fun_bodcon(str_web webcon); // <html> <body> content

int main()
{
        str_web webcon, *pwebcon;
        pwebcon = &webcon;
        struct web_str netwk;
        struct web_str assvar;
        socklen_t indlen;
        assvar.buf_size = 1024;
        assvar.buffer = malloc(assvar.buf_size);
        struct sockaddr_in indirizzo;

        if((netwk.crea_socket = socket(AF_INET, SOCK_STREAM, 0)) > 0)
        { printf("La creazione del socket e' funziona!\n"); }


	indirizzo.sin_family = AF_INET;
        indirizzo.sin_addr.s_addr = INADDR_ANY;
        indirizzo.sin_port = htons(NUM_PORT);

        if(bind(netwk.crea_socket, (struct sockaddr *) &indirizzo, sizeof(indirizzo)) == 0)
        { printf("Binding Socket\n"); }

        FILE *fp;
        fp = fopen("style.css","rb");

        while(1){
                if(listen(netwk.crea_socket, 10) < )
                { perror("server: listen"); exit(); }

                if((pwebcon->web_client = accept(netwk.crea_socket, (struct sockaddr *) &indirizzo, &indlen)) < 0) {
                        perror("server: accept");
                        exit(1); }

                if(pwebcon->web_client > 0)
                { printf("I dati della connessione:\n"); }

                recv(pwebcon->web_client, assvar.buffer, assvar.buf_size, );
                printf("%s\n", assvar.buffer);
                fun_bodcon(webcon);
                close(pwebcon->web_client);
        }

        close(netwk.crea_socket);
        return 0;
}

