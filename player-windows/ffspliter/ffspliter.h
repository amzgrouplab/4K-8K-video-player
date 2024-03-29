﻿#ifndef __FFSPLITER_H__
#define __FFSPLITER_H__

#ifdef __cplusplus
extern "C" {
#endif

// type definition
typedef void (*PFN_SPC)(__int64 cur, __int64 total); // split progress callback

// function declaration
int split_media_file(char *dst, char *src, __int64 start, __int64 end, PFN_SPC spc);

#ifdef __cplusplus
}
#endif

#endif

