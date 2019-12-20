#ifndef __EXCEPTION_H__
#define __EXCEPTION_H__

#include <stdlib.h>
#include <setjmp.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>

typedef struct trycatch_exception {
	int code;
	char *msg;
} exception_t;

void exception_init();
jmp_buf *exception_newbuf();
void exception_endbuf();
void throw(const char *msg, int code);
const exception_t exception_get_last();
void exception_end();


#define try \
	if (!setjmp(*exception_newbuf())) {

#define catch(x) \
		exception_endbuf(); \
	} \
	else { \
		exception_endbuf(); \
		const exception_t x = exception_get_last();

#define end_try_catch \
	}


#endif     // __EXCEPTION_H__

