#include <jmorecfg.h>
#include <stdbool.h>
#include "../../configs/transfer_configs.h"

#ifndef TRANSCRYPTO_SESSION_H

#define TRANSCRYPTO_SESSION_H

struct Message {
    unsigned char *message;
    unsigned int id[ID_SIZE];
    signed int time;
};

struct Crypto {
    unsigned char p1pub[KEY_SIZE];
    unsigned char p1pri[KEY_SIZE];
    unsigned char p2pub[KEY_SIZE];
};

struct Packet {
    unsigned char id[ID_SIZE];
    unsigned char key[KEY_SIZE];
    unsigned char sessionId[SESSION_ID_SIZE];
    unsigned int expiresAt;
    unsigned char p2id[ID_SIZE];
    bool active;
    unsigned int failedAttempts;
    struct Messages *messages;
    unsigned char *toSend;
};


#endif //TRANSCRYPTO_SESSION_H
