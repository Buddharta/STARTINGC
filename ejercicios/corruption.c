#include <stdio.h>        
#include <string.h>        
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define PID getpid()

char* corrupt_msg(const char* message, int corruptbits){        
        char* result= strdup(message);
        for(size_t i = 0; i < corruptbits; i++){
                int randbyte = rand() % strlen(message);
                int randbit = rand() % 8;
                result[randbyte]^= 1 << randbit;
        }
        return result;
}

int checksum(const char* message, int length){
        unsigned int sum = 0;
        for(size_t i = 0; i < length; i++){
                sum += message[i];
        }
        return sum;
}

char checksumx(const char* message, int length){
        unsigned int sum = 0;
        for(size_t i = 0; i < length; i++){
                sum ^= message[i];
        }
        return sum;
}
int main(void)
{
        srand(time(NULL)*PID);
        char* msg ="Talkin' in my sleep at night, makin' myself crazy Wrote it down and read it out, hopin' it would save me";
        printf("MSG1: %x %x\t%s\n",checksumx(msg,strlen(msg)),checksum(msg,strlen(msg)), msg);
        char* cormsg = corrupt_msg(msg,10);
        printf("\n");
        printf("MSG2: %x %x\t%s\n",checksumx(cormsg,strlen(cormsg)),checksum(cormsg,strlen(cormsg)),cormsg);
        free(cormsg);
        return EXIT_SUCCESS;
}
