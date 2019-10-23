/* 
 * File:   token.h
 * Author: Michael Beckering
 * Project 1
 * CS-4280-001-FS2019
 *
 * Created on October 14, 2019, 12:43 PM
 */

#ifndef TOKEN_H
#define TOKEN_H

#include <string>

enum tokenID {
        ID_tk,    // 0
        NUM_tk,   // 1
        KW_tk,    // 2
        MATH_tk,  // 3
        EOF_tk    // 4
    };

struct token {
    tokenID ID;
    std::string tokenInstance;
    int lineNumber;
};

#endif /* TOKEN_H */

