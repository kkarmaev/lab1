/* Automation Studio generated header file */
/* Do not edit ! */
/* Library  */

#ifndef _LIBRARY_
#define _LIBRARY_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef struct FB_integraotor
{
	/* VAR_INPUT (analog) */
	float in;
	/* VAR_OUTPUT (analog) */
	float out;
	/* VAR (analog) */
	float dt;
	float oldval;
} FB_integraotor_typ;

typedef struct FB_motor
{
	/* VAR_INPUT (analog) */
	float u;
	float Tm;
	/* VAR_OUTPUT (analog) */
	float w;
	float phi;
	/* VAR (analog) */
	float ke;
	struct FB_integraotor integraotor;
	float dt;
} FB_motor_typ;

typedef struct FB_regulator
{
	/* VAR (analog) */
	float e;
	float u;
	float k_p;
	float k_i;
	struct FB_integraotor integrator;
	float iyOld;
	float max_abs_value;
	float dt;
} FB_regulator_typ;

typedef struct FB_motor1
{
	/* VAR_INPUT (analog) */
	float u;
	float Tm;
	/* VAR_OUTPUT (analog) */
	float w;
	float phi;
	/* VAR (analog) */
	float ke;
	struct FB_integraotor integraotor;
	float dt;
} FB_motor1_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void FB_integraotor(struct FB_integraotor* inst);
_BUR_PUBLIC void FB_motor(struct FB_motor* inst);
_BUR_PUBLIC void FB_regulator(struct FB_regulator* inst);
_BUR_PUBLIC void FB_motor1(struct FB_motor1* inst);


#ifdef __cplusplus
};
#endif
#endif /* _LIBRARY_ */

