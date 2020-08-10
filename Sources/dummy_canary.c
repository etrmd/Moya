//
//  dummy_canary.c
//  Moya
//
//  Created by Vadim Zhilinkov on 10.08.2020.
//

#include <stdio.h>

// This is a dummy C file used to enable Stack Smashing Canary Protection.

int dummy() {
    return 0;
}
