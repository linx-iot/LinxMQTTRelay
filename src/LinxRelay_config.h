#ifndef _AUTOMATOND_CONFIG_H_
  #define _AUTOMATOND_CONFIG_H_

  #define OLED_DEBUG

  
  #define DIGEST_SIZE 8
  #define SECRET_KEY "thisisaverysecretkey"

  #define DIGEST_SIZE_HEX (DIGEST_SIZE*2)+1
  #define HEARTBEAT_INTERVAL 30   // in seconds

  #define MAX_PAYLOAD_LEN 144
  

#endif