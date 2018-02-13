//
// Created by eli on 2/13/18.
//

#include <jmorecfg.h>
#include "../../configs/transfer_configs.h"

#ifndef TRANSCRYPTO_SESSION_H

#define TRANSCRYPTO_SESSION_H

struct Message {
    unsigned char *message;
    unsigned int id[ID_SIZE];
    signed int time;
};

struct Packet {
    unsigned char id[ID_SIZE];
    unsigned char key[KEY_SIZE];
    unsigned char sessionId[SESSION_ID_SIZE];
    unsigned int expiresAt;
    unsigned char p2id[ID_SIZE];
    boolean active;
    unsigned int failedAttempts;
    struct Messages *messages;
    unsigned char *toSend;
};


#endif //TRANSCRYPTO_SESSION_H
