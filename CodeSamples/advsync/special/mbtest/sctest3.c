#define THREAD_0 \
	do { \
		state.x = 1; \
	} while (0)

#define THREAD_1 \
	do { \
		state.a2 = state.z; \
		hwsync(); \
		state.a1 = state.y; \
		hwsync(); \
		state.a = state.x; \
		hwsync(); \
		state.d = 1; \
		hwsync(); \
		while (state.d1 != 1) \
			barrier(); \
		hwsync(); \
		if (state.a == 1 &&  \
		    state.b == 0) { \
			if (state.a1 == 0 && \
			    state.b1 == 1) {  \
				state.badcount++; \
				break; \
			} else if (state.a2 == 0 && \
				   state.b2 == 1) {  \
					state.badcount++; \
					break; \
			} \
		} else if (state.a1 == 1 &&  \
			   state.b1 == 0) { \
				if (state.a2 == 0 && \
				    state.b2 == 1) {  \
					state.badcount++; \
					break; \
			} \
		} \
	} while (0)

#define THREAD_2 \
	do { \
		state.y = 1; \
	} while (0)

#define THREAD_3 \
	do { \
		state.b = state.x; \
		hwsync(); \
		state.b1 = state.y; \
		hwsync(); \
		state.b2 = state.z; \
		hwsync(); \
		state.d1 = 1; \
		hwsync(); \
	} while (0)

#define THREAD_4 \
	do { \
		state.z = 1; \
	} while (0)

#include "mbtest.h"

struct cache_preload cache_preload[] = {
	{ 1, &state.a },
	{ 3, &state.b },
	{ 3, &state.x },
	{ 1, &state.y },
	{-1, NULL },
};

struct thread_assignment thread_assignment[] = {
	{ /* 0 */ 0, thread_0 },
	{ /* 1 */ 2, thread_1 },
	{ /* 2 */ 4, thread_2 },
	{ /* 3 */ 6, thread_3 },
	{-1, NULL },
};
