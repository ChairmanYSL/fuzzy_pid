#ifndef DEBUG_H
#define DEBUG_H

#include <errno.h>


#define DEBUGFLAG
//#undef DEBUGFLAG

extern void SdkDebugTrace(unsigned char const *pasTag, unsigned char const*  pasFile, unsigned char const *pasFun, int line,  char const *pheFmt, ...);

#ifdef DEBUGFLAG
#define Trace(ptag, arg...)  SdkDebugTrace((unsigned char const*)ptag, (unsigned char const*)__FILE__, (unsigned char const*)__FUNCTION__, __LINE__, ##arg)
#else
#define Debug(Type, arg...) 
#endif

#endif