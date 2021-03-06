


#ifndef __DEFS_H__
#define __DEFS_H__

/* the onion2 is a little-endian machine */
#define IS_LITTLE_ENDIAN

#ifdef IS_LITTLE_ENDIAN
#define LO 0
#define HI 1
#else
#define LO 1
#define HI 0
#endif


typedef unsigned char byte;

typedef unsigned char un8;
typedef unsigned short un16;
typedef unsigned int un32;

typedef signed char n8;
typedef signed short n16;
typedef signed int n32;

typedef un16 word;
typedef word addr;

/* stuff from main.c ... */
void die(char *fmt, ...);
void doevents();



#endif

