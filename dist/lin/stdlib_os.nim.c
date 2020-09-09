/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <time.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
typedef NU8 tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg;
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
NI32 errorCode;
};
typedef long tyArray__QS4edQct6fXoghbs69aZ9a8w[3];
struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence__sM4lkSb7zS6F7OVMvW9cffQ)(void* p, NI op);
static N_NIMCALL(void, TM__yu6cxgKBBXbNsTkT9cyMd4g_2)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimRegisterThreadLocalMarker)(tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__gq12VLhVO0NBzUTnGgz4nw)(FILE** f, NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(NI64, getFileSize__ihE3HyH1VBDfrPO1nZT7RQ)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(void, close__fU6ZlJAtQ9bre04EDZLdGsA)(FILE* f);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__CWyPYlyH9a6rAuZckFyVxPA)(NI32 errorCode, NimStringDesc* additionalInfo);
N_LIB_PRIVATE N_NOINLINE(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*, newOSError__JXEuze9ctNbkn51HYBflQLg)(NI32 errorCode, NimStringDesc* additionalInfo);
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, osErrorMsg__33xViSVWAmDrexoKkLfMhg)(NI32 errorCode);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(NIM_CHAR, X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem)(NimStringDesc* s, NI i);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__45fPtFhY4FavRaYwDhRfuA)(NimStringDesc** s, NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__9bUWNxbcGnToMWA9b79aTXLIw)(void);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NI, findEnvVar__4kc4cxzsC7aY1IOKtOGazA)(NimStringDesc* key);
N_LIB_PRIVATE N_NIMCALL(void, getEnvVarsC__580467zYn32AEdYj9cD4LLA)(void);
static N_INLINE(NIM_BOOL, eqeq___aqip9cmQIuefPKdd25wuEEwsystem)(NCSTRING x, NCSTRING y);
N_LIB_PRIVATE N_NIMCALL(TGenericSeq*, incrSeqV3)(TGenericSeq* s, TNimType* typ);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr__iGg0RIKceRvsmvq8FUHOEw)(NimStringDesc* s, NI first);
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start, NI last);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A)(NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, joinPathImpl__zwiv42T0z9bOei4bjr58A9cA)(NimStringDesc** result, NI* state, NimStringDesc* tail);
N_LIB_PRIVATE N_NIMCALL(void, normalizePathEnd__gKUeJXj8CrWvxdeNCA2BXg)(NimStringDesc** path, NIM_BOOL trailingSep);
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath__bx9csIXjBBeHkYSkIUixO1g)(NimStringDesc* x, NimStringDesc** result, NI* state, NIM_CHAR dirSep);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, rawCreateDir__GHseAa61lv8Sp9b2kQD9baYQ)(NimStringDesc* dir);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosexistsDir)(NimStringDesc* dir);
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
N_LIB_PRIVATE TNimType NTI__sM4lkSb7zS6F7OVMvW9cffQ_;
extern TNimType NTI__9clYsYwyjCqe2PFTuCI3Ubg_;
extern TNimType NTI__BeJgrOdDsczOwEWOZbRfKA_;
STRING_LITERAL(TM__yu6cxgKBBXbNsTkT9cyMd4g_3, "Additional info: ", 17);
STRING_LITERAL(TM__yu6cxgKBBXbNsTkT9cyMd4g_4, "unknown OS error", 16);
STRING_LITERAL(TM__yu6cxgKBBXbNsTkT9cyMd4g_5, "os.nim(1346, 19) `bufsize >= 0` ", 32);
STRING_LITERAL(TM__yu6cxgKBBXbNsTkT9cyMd4g_6, "/", 1);
extern TNimType NTI__HMIVdYjdZYWskTmTQVo5BQ_;
extern TNimType NTI__iLZrPn9anoh9ad1MmO0RczFw_;
STRING_LITERAL(TM__yu6cxgKBBXbNsTkT9cyMd4g_7, "Failed to create \'", 18);
STRING_LITERAL(TM__yu6cxgKBBXbNsTkT9cyMd4g_8, "\'", 1);
N_LIB_PRIVATE NIM_THREADVAR NIM_BOOL envComputed__LLyFo9bsdu1ZXMDvAe8DhrQ;
N_LIB_PRIVATE NIM_THREADVAR tySequence__sM4lkSb7zS6F7OVMvW9cffQ* environment__mlhK49b6YMgc9cgrcYkKq9a3g;
extern NCSTRING* environ;
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;
static N_NIMCALL(void, Marker_tySequence__sM4lkSb7zS6F7OVMvW9cffQ)(void* p, NI op) {
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ* a;
	NI T1_;
	a = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_], op);
	}
}
static N_NIMCALL(void, TM__yu6cxgKBBXbNsTkT9cyMd4g_2)(void) {
	nimGCvisit((void*)environment__mlhK49b6YMgc9cgrcYkKq9a3g, 0);
}
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(void, nossleep)(NI milsecs) {
	struct timespec a;
	struct timespec b;
	int T1_;
	nimZeroMem((void*)(&a), sizeof(struct timespec));
	nimZeroMem((void*)(&b), sizeof(struct timespec));
	a.tv_sec = (NI)(milsecs / ((NI) 1000));
	a.tv_nsec = (NI)((NI)((NI)(milsecs % ((NI) 1000)) * ((NI) 1000)) * ((NI) 1000));
	T1_ = (int)0;
	T1_ = nanosleep((&a), (&b));
	(void)(T1_);
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, osErrorMsg__33xViSVWAmDrexoKkLfMhg)(NI32 errorCode) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = ((NimStringDesc*) NIM_NIL);
	{
		NCSTRING T5_;
		if (!!((errorCode == ((NI32) 0)))) goto LA3_;
		T5_ = (NCSTRING)0;
		T5_ = strerror(errorCode);
		result = cstrToNimstr(T5_);
	}
	LA3_: ;
	return result;
}
static N_INLINE(NIM_CHAR, X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem)(NimStringDesc* s, NI i) {
	NIM_CHAR result;
	result = (NIM_CHAR)0;
	result = s->data[(NI)((s ? s->Sup.len : 0) - i)];
	return result;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NOINLINE(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*, newOSError__JXEuze9ctNbkn51HYBflQLg)(NI32 errorCode, NimStringDesc* additionalInfo) {
	tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA* result;
	tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA* e;
{	result = (tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*)0;
	e = (tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*)0;
	e = (tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*) newObj((&NTI__9clYsYwyjCqe2PFTuCI3Ubg_), sizeof(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA));
	(*e).Sup.Sup.Sup.m_type = (&NTI__BeJgrOdDsczOwEWOZbRfKA_);
	(*e).Sup.Sup.name = "OSError";
	(*e).errorCode = errorCode;
	(*e).Sup.Sup.message = osErrorMsg__33xViSVWAmDrexoKkLfMhg(errorCode);
	{
		if (!(((NI) 0) < (additionalInfo ? additionalInfo->Sup.len : 0))) goto LA3_;
		{
			NIM_BOOL T7_;
			NIM_CHAR T9_;
			T7_ = (NIM_BOOL)0;
			T7_ = (((NI) 0) < ((*e).Sup.Sup.message ? (*e).Sup.Sup.message->Sup.len : 0));
			if (!(T7_)) goto LA8_;
			T9_ = (NIM_CHAR)0;
			T9_ = X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem((*e).Sup.Sup.message, ((NI) 1));
			T7_ = !(((NU8)(T9_) == (NU8)(10)));
			LA8_: ;
			if (!T7_) goto LA10_;
			(*e).Sup.Sup.message = addChar((*e).Sup.Sup.message, 10);
		}
		LA10_: ;
		(*e).Sup.Sup.message = resizeString((*e).Sup.Sup.message, 17);
appendString((*e).Sup.Sup.message, ((NimStringDesc*) &TM__yu6cxgKBBXbNsTkT9cyMd4g_3));
		addQuoted__45fPtFhY4FavRaYwDhRfuA((&(*e).Sup.Sup.message), additionalInfo);
	}
	LA3_: ;
	{
		if (!(((*e).Sup.Sup.message ? (*e).Sup.Sup.message->Sup.len : 0) == 0)) goto LA14_;
		(*e).Sup.Sup.message = copyString(((NimStringDesc*) &TM__yu6cxgKBBXbNsTkT9cyMd4g_4));
	}
	LA14_: ;
	result = e;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__CWyPYlyH9a6rAuZckFyVxPA)(NI32 errorCode, NimStringDesc* additionalInfo) {
	tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA* T1_;
{	T1_ = (tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*)0;
	T1_ = newOSError__JXEuze9ctNbkn51HYBflQLg(errorCode, additionalInfo);
	raiseExceptionEx((Exception*)T1_, "OSError", "raiseOSError", "oserr.nim", 94);
	goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__9bUWNxbcGnToMWA9b79aTXLIw)(void) {
	NI32 result;
	result = (NI32)0;
	result = errno;
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, nosgetFileSize)(NimStringDesc* file) {
	NI64 result;
	FILE* f;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI64)0;
	f = (FILE*)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = open__gq12VLhVO0NBzUTnGgz4nw(&f, file, ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 0), ((NI) -1));
		if (!T3_) goto LA4_;
		result = getFileSize__ihE3HyH1VBDfrPO1nZT7RQ(f);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		close__fU6ZlJAtQ9bre04EDZLdGsA(f);
	}
	goto LA1_;
	LA4_: ;
	{
		NI32 T7_;
		T7_ = (NI32)0;
		T7_ = osLastError__9bUWNxbcGnToMWA9b79aTXLIw();
		raiseOSError__CWyPYlyH9a6rAuZckFyVxPA(T7_, file);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL T1_;
	int T2_;
{	result = (NIM_BOOL)0;
	nimZeroMem((void*)(&res), sizeof(struct stat));
	T1_ = (NIM_BOOL)0;
	T2_ = (int)0;
	T2_ = stat(nimToCStringConv(filename), (&res));
	T1_ = (((NI32) 0) <= T2_);
	if (!(T1_)) goto LA3_;
	T1_ = S_ISREG(res.st_mode);
	LA3_: ;
	result = T1_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NIM_BOOL, eqeq___aqip9cmQIuefPKdd25wuEEwsystem)(NCSTRING x, NCSTRING y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		if (!(((void*) (x)) == ((void*) (y)))) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		T6_ = (NIM_BOOL)0;
		T6_ = (x == 0);
		if (T6_) goto LA7_;
		T6_ = (y == 0);
		LA7_: ;
		if (!T6_) goto LA8_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA8_: ;
	{
		int T11_;
		T11_ = (int)0;
		T11_ = strcmp(x, y);
		result = (T11_ == ((NI32) 0));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, getEnvVarsC__580467zYn32AEdYj9cD4LLA)(void) {
	{
		NI i;
		if (!!(envComputed__LLyFo9bsdu1ZXMDvAe8DhrQ)) goto LA3_;
		environment__mlhK49b6YMgc9cgrcYkKq9a3g = NIM_NIL;
		i = ((NI) 0);
		{
			while (1) {
				NimStringDesc* T12_;
				NI T13_;
				{
					NIM_BOOL T9_;
					T9_ = (NIM_BOOL)0;
					T9_ = eqeq___aqip9cmQIuefPKdd25wuEEwsystem(environ[i], NIM_NIL);
					if (!T9_) goto LA10_;
					goto LA5;
				}
				LA10_: ;
				T12_ = (NimStringDesc*)0;
				T12_ = cstrToNimstr(environ[i]);
				environment__mlhK49b6YMgc9cgrcYkKq9a3g = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV3((TGenericSeq*)(environment__mlhK49b6YMgc9cgrcYkKq9a3g), (&NTI__sM4lkSb7zS6F7OVMvW9cffQ_));
				T13_ = environment__mlhK49b6YMgc9cgrcYkKq9a3g->Sup.len++;
				environment__mlhK49b6YMgc9cgrcYkKq9a3g->data[T13_] = copyString(T12_);
				i += ((NI) 1);
			}
		} LA5: ;
		envComputed__LLyFo9bsdu1ZXMDvAe8DhrQ = NIM_TRUE;
	}
	LA3_: ;
}
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[(*dest).Sup.len] = c;
	(*dest).data[(NI)((*dest).Sup.len + ((NI) 1))] = 0;
	(*dest).Sup.len += ((NI) 1);
}
N_LIB_PRIVATE N_NIMCALL(NI, findEnvVar__4kc4cxzsC7aY1IOKtOGazA)(NimStringDesc* key) {
	NI result;
	NimStringDesc* temp;
	NimStringDesc* T1_;
{	result = (NI)0;
	getEnvVarsC__580467zYn32AEdYj9cD4LLA();
	T1_ = (NimStringDesc*)0;
	T1_ = rawNewString((key ? key->Sup.len : 0) + 1);
appendString(T1_, key);
appendChar(T1_, 61);
	temp = T1_;
	{
		NI i;
		NI colontmp_;
		NI T3_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T3_ = ((environment__mlhK49b6YMgc9cgrcYkKq9a3g ? environment__mlhK49b6YMgc9cgrcYkKq9a3g->Sup.len : 0)-1);
		colontmp_ = T3_;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA5;
				i = res;
				{
					NIM_BOOL T8_;
					T8_ = (NIM_BOOL)0;
					T8_ = nsuStartsWith(environment__mlhK49b6YMgc9cgrcYkKq9a3g->data[i], temp);
					if (!T8_) goto LA9_;
					result = i;
					goto BeforeRet_;
				}
				LA9_: ;
				res += ((NI) 1);
			} LA5: ;
		}
	}
	result = ((NI) -1);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getEnv__hhED57tMl0Iaa5bOg9cJaig)(NimStringDesc* key, NimStringDesc* default_0) {
	NimStringDesc* result;
	NI i;
{	result = (NimStringDesc*)0;
	i = findEnvVar__4kc4cxzsC7aY1IOKtOGazA(key);
	{
		NI T5_;
		if (!(((NI) 0) <= i)) goto LA3_;
		T5_ = (NI)0;
		T5_ = nsuFindChar(environment__mlhK49b6YMgc9cgrcYkKq9a3g->data[i], 61, ((NI) 0), ((NI) 0));
		result = substr__iGg0RIKceRvsmvq8FUHOEw(environment__mlhK49b6YMgc9cgrcYkKq9a3g->data[i], (NI)(T5_ + ((NI) 1)));
		goto BeforeRet_;
	}
	goto LA1_;
	LA3_: ;
	{
		NCSTRING env;
		env = getenv(nimToCStringConv(key));
		{
			NIM_BOOL T9_;
			T9_ = (NIM_BOOL)0;
			T9_ = eqeq___aqip9cmQIuefPKdd25wuEEwsystem(env, NIM_NIL);
			if (!T9_) goto LA10_;
			result = copyString(default_0);
			goto BeforeRet_;
		}
		LA10_: ;
		result = cstrToNimstr(env);
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void) {
	NimStringDesc* result;
	NI bufsize;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NimStringDesc*)0;
	bufsize = ((NI) 1024);
	result = mnewString(((NI) (bufsize)));
	{
		while (1) {
			{
				NCSTRING T5_;
				NIM_BOOL T6_;
				int T9_;
				T5_ = (NCSTRING)0;
				T5_ = getcwd(nimToCStringConv(result), bufsize);
				T6_ = (NIM_BOOL)0;
				T6_ = eqeq___aqip9cmQIuefPKdd25wuEEwsystem(T5_, NIM_NIL);
				if (!!(T6_)) goto LA7_;
				T9_ = (int)0;
				T9_ = strlen(nimToCStringConv(result));
				result = setLengthStr(result, ((NI) (T9_)));
				goto LA1;
			}
			goto LA3_;
			LA7_: ;
			{
				NI32 err;
				err = osLastError__9bUWNxbcGnToMWA9b79aTXLIw();
				{
					if (!(err == ((int) 34))) goto LA13_;
					bufsize = (NI)((NU64)(bufsize) << (NU64)(((NI) 1)));
					{
						if (!!((((NI) 0) <= bufsize))) goto LA17_;
						failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__yu6cxgKBBXbNsTkT9cyMd4g_5));
					}
					LA17_: ;
					result = mnewString(((NI) (bufsize)));
				}
				goto LA11_;
				LA13_: ;
				{
					NI32 T20_;
					T20_ = (NI32)0;
					T20_ = osLastError__9bUWNxbcGnToMWA9b79aTXLIw();
					raiseOSError__CWyPYlyH9a6rAuZckFyVxPA(T20_, ((NimStringDesc*) NIM_NIL));
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
				LA11_: ;
			}
			LA3_: ;
		}
	} LA1: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, normalizePathEnd__gKUeJXj8CrWvxdeNCA2BXg)(NimStringDesc** path, NIM_BOOL trailingSep) {
	NI i;
{	{
		if (!(((*path) ? (*path)->Sup.len : 0) == ((NI) 0))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	i = ((*path) ? (*path)->Sup.len : 0);
	{
		while (1) {
			if (!(((NI) 1) <= i)) goto LA6;
			{
				if (!(((NU8)((*path)->data[(NI)(i - ((NI) 1))])) == ((NU8)(47)) || ((NU8)((*path)->data[(NI)(i - ((NI) 1))])) == ((NU8)(47)))) goto LA9_;
				i -= ((NI) 1);
			}
			goto LA7_;
			LA9_: ;
			{
				NIM_BOOL T12_;
				NIM_BOOL T13_;
				T12_ = (NIM_BOOL)0;
				T13_ = (NIM_BOOL)0;
				T13_ = ((NU8)((*path)->data[(NI)(i - ((NI) 1))]) == (NU8)(46));
				if (!(T13_)) goto LA14_;
				T13_ = (((NI) 2) <= i);
				LA14_: ;
				T12_ = T13_;
				if (!(T12_)) goto LA15_;
				T12_ = (((NU8)((*path)->data[(NI)(i - ((NI) 2))])) == ((NU8)(47)) || ((NU8)((*path)->data[(NI)(i - ((NI) 2))])) == ((NU8)(47)));
				LA15_: ;
				if (!T12_) goto LA16_;
				i -= ((NI) 1);
			}
			goto LA7_;
			LA16_: ;
			{
				goto LA5;
			}
			LA7_: ;
		} LA6: ;
	} LA5: ;
	{
		if (!trailingSep) goto LA21_;
		(*path) = setLengthStr((*path), ((NI) (i)));
		(*path) = addChar((*path), 47);
	}
	goto LA19_;
	LA21_: ;
	{
		if (!(((NI) 0) < i)) goto LA24_;
		(*path) = setLengthStr((*path), ((NI) (i)));
	}
	goto LA19_;
	LA24_: ;
	{
		(*path) = copyString(((NimStringDesc*) &TM__yu6cxgKBBXbNsTkT9cyMd4g_6));
	}
	LA19_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, joinPathImpl__zwiv42T0z9bOei4bjr58A9cA)(NimStringDesc** result, NI* state, NimStringDesc* tail) {
	NIM_BOOL trailingSep;
	NIM_BOOL T1_;
	NIM_BOOL T2_;
	NIM_CHAR T4_;
	NIM_BOOL T6_;
	NIM_BOOL T8_;
	NIM_CHAR T10_;
	T1_ = (NIM_BOOL)0;
	T2_ = (NIM_BOOL)0;
	T2_ = (((NI) 0) < (tail ? tail->Sup.len : 0));
	if (!(T2_)) goto LA3_;
	T4_ = (NIM_CHAR)0;
	T4_ = X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem(tail, ((NI) 1));
	T2_ = (((NU8)(T4_)) == ((NU8)(47)) || ((NU8)(T4_)) == ((NU8)(47)));
	LA3_: ;
	T1_ = T2_;
	if (T1_) goto LA5_;
	T6_ = (NIM_BOOL)0;
	T6_ = ((tail ? tail->Sup.len : 0) == ((NI) 0));
	if (!(T6_)) goto LA7_;
	T8_ = (NIM_BOOL)0;
	T8_ = (((NI) 0) < ((*result) ? (*result)->Sup.len : 0));
	if (!(T8_)) goto LA9_;
	T10_ = (NIM_CHAR)0;
	T10_ = X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem((*result), ((NI) 1));
	T8_ = (((NU8)(T10_)) == ((NU8)(47)) || ((NU8)(T10_)) == ((NU8)(47)));
	LA9_: ;
	T6_ = T8_;
	LA7_: ;
	T1_ = T6_;
	LA5_: ;
	trailingSep = T1_;
	normalizePathEnd__gKUeJXj8CrWvxdeNCA2BXg(result, NIM_FALSE);
	addNormalizePath__bx9csIXjBBeHkYSkIUixO1g(tail, result, state, 47);
	normalizePathEnd__gKUeJXj8CrWvxdeNCA2BXg(result, trailingSep);
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail) {
	NimStringDesc* result;
	NI state;
	result = (NimStringDesc*)0;
	result = rawNewString(((NI) ((NI)((head ? head->Sup.len : 0) + (tail ? tail->Sup.len : 0)))));
	state = ((NI) 0);
	joinPathImpl__zwiv42T0z9bOei4bjr58A9cA((&result), (&state), head);
	joinPathImpl__zwiv42T0z9bOei4bjr58A9cA((&result), (&state), tail);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, slash___gEyhbzZ1UcxyenWRLJRXNQ)(NimStringDesc* head, NimStringDesc* tail) {
	NimStringDesc* result;
{	result = (NimStringDesc*)0;
	result = nosjoinPath(head, tail);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, rawCreateDir__GHseAa61lv8Sp9b2kQD9baYQ)(NimStringDesc* dir) {
	NIM_BOOL result;
	int res;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	res = mkdir(nimToCStringConv(dir), ((mode_t) 511));
	{
		if (!(res == ((NI32) 0))) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		if (!(errno == ((int) 17))) goto LA6_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA6_: ;
	{
		NI32 T9_;
		T9_ = (NI32)0;
		T9_ = osLastError__9bUWNxbcGnToMWA9b79aTXLIw();
		raiseOSError__CWyPYlyH9a6rAuZckFyVxPA(T9_, dir);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosexistsDir)(NimStringDesc* dir) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL T1_;
	int T2_;
{	result = (NIM_BOOL)0;
	nimZeroMem((void*)(&res), sizeof(struct stat));
	T1_ = (NIM_BOOL)0;
	T2_ = (int)0;
	T2_ = stat(nimToCStringConv(dir), (&res));
	T1_ = (((NI32) 0) <= T2_);
	if (!(T1_)) goto LA3_;
	T1_ = S_ISDIR(res.st_mode);
	LA3_: ;
	result = T1_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosexistsOrCreateDir)(NimStringDesc* dir) {
	NIM_BOOL result;
	NIM_BOOL T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = rawCreateDir__GHseAa61lv8Sp9b2kQD9baYQ(dir);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = !(T1_);
	{
		if (!result) goto LA4_;
		{
			NIM_BOOL T8_;
			tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T11_;
			NimStringDesc* T12_;
			T8_ = (NIM_BOOL)0;
			T8_ = nosexistsDir(dir);
			if (!!(T8_)) goto LA9_;
			T11_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*)0;
			T11_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTI__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
			(*T11_).Sup.Sup.Sup.m_type = (&NTI__iLZrPn9anoh9ad1MmO0RczFw_);
			(*T11_).Sup.Sup.name = "IOError";
			T12_ = (NimStringDesc*)0;
			T12_ = rawNewString((dir ? dir->Sup.len : 0) + 19);
appendString(T12_, ((NimStringDesc*) &TM__yu6cxgKBBXbNsTkT9cyMd4g_7));
appendString(T12_, dir);
appendString(T12_, ((NimStringDesc*) &TM__yu6cxgKBBXbNsTkT9cyMd4g_8));
			(*T11_).Sup.Sup.message = T12_;
			(*T11_).Sup.Sup.parent = NIM_NIL;
			raiseExceptionEx((Exception*)T11_, "IOError", "existsOrCreateDir", "os.nim", 2283);
			goto BeforeRet_;
		}
		LA9_: ;
	}
	LA4_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_osInit000)(void) {
{

	nimRegisterThreadLocalMarker(TM__yu6cxgKBBXbNsTkT9cyMd4g_2);

}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_osDatInit000)(void) {
NTI__sM4lkSb7zS6F7OVMvW9cffQ_.size = sizeof(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*);
NTI__sM4lkSb7zS6F7OVMvW9cffQ_.kind = 24;
NTI__sM4lkSb7zS6F7OVMvW9cffQ_.base = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
NTI__sM4lkSb7zS6F7OVMvW9cffQ_.flags = 2;
NTI__sM4lkSb7zS6F7OVMvW9cffQ_.marker = Marker_tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
}

