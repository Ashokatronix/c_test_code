#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int main()
{
    struct NORMAL
    {
        union 
        {
            struct
            {
                uint16_t a   :2;
                uint16_t c   :2;
                uint16_t d   :2;  
            }bits;

            struct 
            {
                uint8_t b   :1;
                uint8_t x   :1;
                uint8_t y   :1;
                uint8_t z   :1;
                uint8_t s   :1;
                uint8_t t   :1;
                uint8_t u   :1;
                uint8_t v   :1;

            }Bytes;
        uint16_t word;    
            
        }hv_disconnect;
        
    }Normal_param;

    Normal_param.hv_disconnect.bits.a = 1;
    if((Normal_param.hv_disconnect.word == 0) && (Normal_param.hv_disconnect.word == 0))
    {
    printf("Normal_param.hvdisconnect.word : %d\n", Normal_param.hv_disconnect.word);
    }
    printf("Normal_param.hvdisconnect.word : %d\n", Normal_param.hv_disconnect.word);
    printf("Normal_param.hvdisconnect.word.bits : %d\n", Normal_param.hv_disconnect.word.bits);
}
