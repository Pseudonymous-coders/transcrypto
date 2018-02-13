//
// Created by eli on 2/13/18.
//

#include "../../configs/transfer_configs.h"

#ifndef TRANSCRYPTO_SESSION_H

#define TRANSCRYPTO_SESSION_H

struct Packet {
    unsigned char id[ID_SIZE];
    unsigned char key[KEY_SIZE];

};

#endif //TRANSCRYPTO_SESSION_H
