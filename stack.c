#include "stack.h"

bool LoadFirstFunc(STACK *stack, Context *Fun)
{
 	StackDataVectorPushMore(stack->Vec, Fun->ArgCount);
 	// Instruction and Stack return  is set to 0
 	StackDataVectorPushMore(stack->Vec, NUMBER_OF_CONTEXT_INFO);
 	StackDataVectorPushMore(stack->Vec, Fun->LocCount);
 	if(getError()!=0) // if error occured during PushMorefunctions
 		return false;

 	stack->Position = Fun->ArgCount+1;
 	return true;
 }

bool CallFunction(STACK *stack, uint32_t LocCount, uint32_t InstrIndexCurr)
{
	StackDataVectorAppend(stack->Vec, (StackData) {.Suint32 = stack->Position});
	StackDataVectorAppend(stack->Vec, (StackData) {.Suint32 = InstrIndexCurr});
	StackDataVectorPushMore(stack->Vec, LocCount);
 	if(getError()!=0) // if error occured during PushMorefunctions
 		return false;
 	// End of Vec - Local Variables - ZERO index
	stack->Position = stack->Vec->used - LocCount - 1;
	return true;
}

bool ReturnFunction(STACK *stack, uint32_t ArgCount, uint32_t LocCount, uint32_t *InstrIndexCurr, StackData ReturnData)
{
	StackDataVectorPopMore(stack->Vec, LocCount);
	StackData *x = StackDataVectorPop(stack->Vec);
	*InstrIndexCurr = x->Suint32 +2; // skip call instruction and go to new
	x = StackDataVectorPop(stack->Vec);
	stack->Position = x->Suint32;
	StackDataVectorPopMore(stack->Vec, ArgCount);
	StackDataVectorAppend(stack->Vec, ReturnData);
 	if(getError()!=0) // if error occured during vector's functions
 		return false;
	return true;
}

void StackSetValue(STACK *stack, StackData data, int index)
{
	assert(stack->Vec->used > stack->Position + index); // index longer than Vector
	assert(index); // index == 0 is invalid
	assert(stack->Position + index > 0); // if index is negativ(argument)
	if(index<0) // if index point to argument, skip one value
		index--;
	StackDataVectorAtSet(stack->Vec, stack->Position+index, data);
}

StackData *StackReadValue(STACK *stack, int index)
{
	assert(stack->Vec->used > stack->Position + index); // index longer than Vector
	assert(index); // index==0 is invalid
	assert(stack->Position + index > 0); // if index is negativ(argument)
	if(index<0)
		index--;
	return StackDataVectorAt(stack->Vec, stack->Position+index);
}