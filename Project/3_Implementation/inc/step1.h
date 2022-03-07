#ifndef STEP1H_INCLUDED
#define STEP1H_INCLUDED

void initialise();

#define occupied (!(PIND&(3<<PD0)))//Check if seat is occupied


#endif