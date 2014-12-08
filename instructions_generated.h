#include "system.h"
#include "instruction.h"
#include "stack.h"
#include "memory_mgmt.h"

#ifndef _INSTRUCTIONS_GENERATED_H
#define _INSTRUCTIONS_GENERATED_H

char *stringifyInstructionPtr(InstrFuncPtr ptr);
void Instr_NEG_LCII(Instruction *i);
void Instr_NEG_LCID(Instruction *i);
void Instr_NEG_LCIB(Instruction *i);
void Instr_NEG_LCIS(Instruction *i);
void Instr_NEG_LCIx(Instruction *i);
void Instr_NEG_LCDI(Instruction *i);
void Instr_NEG_LCDD(Instruction *i);
void Instr_NEG_LCDB(Instruction *i);
void Instr_NEG_LCDS(Instruction *i);
void Instr_NEG_LCDx(Instruction *i);
void Instr_NEG_LLII(Instruction *i);
void Instr_NEG_LLID(Instruction *i);
void Instr_NEG_LLIB(Instruction *i);
void Instr_NEG_LLIS(Instruction *i);
void Instr_NEG_LLIx(Instruction *i);
void Instr_NEG_LLDI(Instruction *i);
void Instr_NEG_LLDD(Instruction *i);
void Instr_NEG_LLDB(Instruction *i);
void Instr_NEG_LLDS(Instruction *i);
void Instr_NEG_LLDx(Instruction *i);
void Instr_NEG_LGII(Instruction *i);
void Instr_NEG_LGID(Instruction *i);
void Instr_NEG_LGIB(Instruction *i);
void Instr_NEG_LGIS(Instruction *i);
void Instr_NEG_LGIx(Instruction *i);
void Instr_NEG_LGDI(Instruction *i);
void Instr_NEG_LGDD(Instruction *i);
void Instr_NEG_LGDB(Instruction *i);
void Instr_NEG_LGDS(Instruction *i);
void Instr_NEG_LGDx(Instruction *i);
void Instr_NEG_LxII(Instruction *i);
void Instr_NEG_LxID(Instruction *i);
void Instr_NEG_LxIB(Instruction *i);
void Instr_NEG_LxIS(Instruction *i);
void Instr_NEG_LxIx(Instruction *i);
void Instr_NEG_LxDI(Instruction *i);
void Instr_NEG_LxDD(Instruction *i);
void Instr_NEG_LxDB(Instruction *i);
void Instr_NEG_LxDS(Instruction *i);
void Instr_NEG_LxDx(Instruction *i);
void Instr_NEG_GCII(Instruction *i);
void Instr_NEG_GCID(Instruction *i);
void Instr_NEG_GCIB(Instruction *i);
void Instr_NEG_GCIS(Instruction *i);
void Instr_NEG_GCIx(Instruction *i);
void Instr_NEG_GCDI(Instruction *i);
void Instr_NEG_GCDD(Instruction *i);
void Instr_NEG_GCDB(Instruction *i);
void Instr_NEG_GCDS(Instruction *i);
void Instr_NEG_GCDx(Instruction *i);
void Instr_NEG_GLII(Instruction *i);
void Instr_NEG_GLID(Instruction *i);
void Instr_NEG_GLIB(Instruction *i);
void Instr_NEG_GLIS(Instruction *i);
void Instr_NEG_GLIx(Instruction *i);
void Instr_NEG_GLDI(Instruction *i);
void Instr_NEG_GLDD(Instruction *i);
void Instr_NEG_GLDB(Instruction *i);
void Instr_NEG_GLDS(Instruction *i);
void Instr_NEG_GLDx(Instruction *i);
void Instr_NEG_GGII(Instruction *i);
void Instr_NEG_GGID(Instruction *i);
void Instr_NEG_GGIB(Instruction *i);
void Instr_NEG_GGIS(Instruction *i);
void Instr_NEG_GGIx(Instruction *i);
void Instr_NEG_GGDI(Instruction *i);
void Instr_NEG_GGDD(Instruction *i);
void Instr_NEG_GGDB(Instruction *i);
void Instr_NEG_GGDS(Instruction *i);
void Instr_NEG_GGDx(Instruction *i);
void Instr_NEG_GxII(Instruction *i);
void Instr_NEG_GxID(Instruction *i);
void Instr_NEG_GxIB(Instruction *i);
void Instr_NEG_GxIS(Instruction *i);
void Instr_NEG_GxIx(Instruction *i);
void Instr_NEG_GxDI(Instruction *i);
void Instr_NEG_GxDD(Instruction *i);
void Instr_NEG_GxDB(Instruction *i);
void Instr_NEG_GxDS(Instruction *i);
void Instr_NEG_GxDx(Instruction *i);
void Instr_NOT_LCBI(Instruction *i);
void Instr_NOT_LCBD(Instruction *i);
void Instr_NOT_LCBB(Instruction *i);
void Instr_NOT_LCBS(Instruction *i);
void Instr_NOT_LCBx(Instruction *i);
void Instr_NOT_LLBI(Instruction *i);
void Instr_NOT_LLBD(Instruction *i);
void Instr_NOT_LLBB(Instruction *i);
void Instr_NOT_LLBS(Instruction *i);
void Instr_NOT_LLBx(Instruction *i);
void Instr_NOT_LGBI(Instruction *i);
void Instr_NOT_LGBD(Instruction *i);
void Instr_NOT_LGBB(Instruction *i);
void Instr_NOT_LGBS(Instruction *i);
void Instr_NOT_LGBx(Instruction *i);
void Instr_NOT_LxBI(Instruction *i);
void Instr_NOT_LxBD(Instruction *i);
void Instr_NOT_LxBB(Instruction *i);
void Instr_NOT_LxBS(Instruction *i);
void Instr_NOT_LxBx(Instruction *i);
void Instr_NOT_GCBI(Instruction *i);
void Instr_NOT_GCBD(Instruction *i);
void Instr_NOT_GCBB(Instruction *i);
void Instr_NOT_GCBS(Instruction *i);
void Instr_NOT_GCBx(Instruction *i);
void Instr_NOT_GLBI(Instruction *i);
void Instr_NOT_GLBD(Instruction *i);
void Instr_NOT_GLBB(Instruction *i);
void Instr_NOT_GLBS(Instruction *i);
void Instr_NOT_GLBx(Instruction *i);
void Instr_NOT_GGBI(Instruction *i);
void Instr_NOT_GGBD(Instruction *i);
void Instr_NOT_GGBB(Instruction *i);
void Instr_NOT_GGBS(Instruction *i);
void Instr_NOT_GGBx(Instruction *i);
void Instr_NOT_GxBI(Instruction *i);
void Instr_NOT_GxBD(Instruction *i);
void Instr_NOT_GxBB(Instruction *i);
void Instr_NOT_GxBS(Instruction *i);
void Instr_NOT_GxBx(Instruction *i);
void Instr_MUL_CLII(Instruction *i);
void Instr_MUL_CLID(Instruction *i);
void Instr_MUL_CLDI(Instruction *i);
void Instr_MUL_CLDD(Instruction *i);
void Instr_MUL_CGII(Instruction *i);
void Instr_MUL_CGID(Instruction *i);
void Instr_MUL_CGDI(Instruction *i);
void Instr_MUL_CGDD(Instruction *i);
void Instr_MUL_LCII(Instruction *i);
void Instr_MUL_LCID(Instruction *i);
void Instr_MUL_LCDI(Instruction *i);
void Instr_MUL_LCDD(Instruction *i);
void Instr_MUL_LLII(Instruction *i);
void Instr_MUL_LLID(Instruction *i);
void Instr_MUL_LLDI(Instruction *i);
void Instr_MUL_LLDD(Instruction *i);
void Instr_MUL_LGII(Instruction *i);
void Instr_MUL_LGID(Instruction *i);
void Instr_MUL_LGDI(Instruction *i);
void Instr_MUL_LGDD(Instruction *i);
void Instr_MUL_GCII(Instruction *i);
void Instr_MUL_GCID(Instruction *i);
void Instr_MUL_GCDI(Instruction *i);
void Instr_MUL_GCDD(Instruction *i);
void Instr_MUL_GLII(Instruction *i);
void Instr_MUL_GLID(Instruction *i);
void Instr_MUL_GLDI(Instruction *i);
void Instr_MUL_GLDD(Instruction *i);
void Instr_MUL_GGII(Instruction *i);
void Instr_MUL_GGID(Instruction *i);
void Instr_MUL_GGDI(Instruction *i);
void Instr_MUL_GGDD(Instruction *i);
void Instr_DIV_CLII(Instruction *i);
void Instr_DIV_CLID(Instruction *i);
void Instr_DIV_CLDI(Instruction *i);
void Instr_DIV_CLDD(Instruction *i);
void Instr_DIV_CGII(Instruction *i);
void Instr_DIV_CGID(Instruction *i);
void Instr_DIV_CGDI(Instruction *i);
void Instr_DIV_CGDD(Instruction *i);
void Instr_DIV_LCII(Instruction *i);
void Instr_DIV_LCID(Instruction *i);
void Instr_DIV_LCDI(Instruction *i);
void Instr_DIV_LCDD(Instruction *i);
void Instr_DIV_LLII(Instruction *i);
void Instr_DIV_LLID(Instruction *i);
void Instr_DIV_LLDI(Instruction *i);
void Instr_DIV_LLDD(Instruction *i);
void Instr_DIV_LGII(Instruction *i);
void Instr_DIV_LGID(Instruction *i);
void Instr_DIV_LGDI(Instruction *i);
void Instr_DIV_LGDD(Instruction *i);
void Instr_DIV_GCII(Instruction *i);
void Instr_DIV_GCID(Instruction *i);
void Instr_DIV_GCDI(Instruction *i);
void Instr_DIV_GCDD(Instruction *i);
void Instr_DIV_GLII(Instruction *i);
void Instr_DIV_GLID(Instruction *i);
void Instr_DIV_GLDI(Instruction *i);
void Instr_DIV_GLDD(Instruction *i);
void Instr_DIV_GGII(Instruction *i);
void Instr_DIV_GGID(Instruction *i);
void Instr_DIV_GGDI(Instruction *i);
void Instr_DIV_GGDD(Instruction *i);
void Instr_AND_CLBB(Instruction *i);
void Instr_AND_CGBB(Instruction *i);
void Instr_AND_LCBB(Instruction *i);
void Instr_AND_LLBB(Instruction *i);
void Instr_AND_LGBB(Instruction *i);
void Instr_AND_GCBB(Instruction *i);
void Instr_AND_GLBB(Instruction *i);
void Instr_AND_GGBB(Instruction *i);
void Instr_ADD_CLII(Instruction *i);
void Instr_ADD_CLID(Instruction *i);
void Instr_ADD_CLDI(Instruction *i);
void Instr_ADD_CLDD(Instruction *i);
void Instr_ADD_CLSS(Instruction *i);
void Instr_ADD_CGII(Instruction *i);
void Instr_ADD_CGID(Instruction *i);
void Instr_ADD_CGDI(Instruction *i);
void Instr_ADD_CGDD(Instruction *i);
void Instr_ADD_CGSS(Instruction *i);
void Instr_ADD_LCII(Instruction *i);
void Instr_ADD_LCID(Instruction *i);
void Instr_ADD_LCDI(Instruction *i);
void Instr_ADD_LCDD(Instruction *i);
void Instr_ADD_LCSS(Instruction *i);
void Instr_ADD_LLII(Instruction *i);
void Instr_ADD_LLID(Instruction *i);
void Instr_ADD_LLDI(Instruction *i);
void Instr_ADD_LLDD(Instruction *i);
void Instr_ADD_LLSS(Instruction *i);
void Instr_ADD_LGII(Instruction *i);
void Instr_ADD_LGID(Instruction *i);
void Instr_ADD_LGDI(Instruction *i);
void Instr_ADD_LGDD(Instruction *i);
void Instr_ADD_LGSS(Instruction *i);
void Instr_ADD_GCII(Instruction *i);
void Instr_ADD_GCID(Instruction *i);
void Instr_ADD_GCDI(Instruction *i);
void Instr_ADD_GCDD(Instruction *i);
void Instr_ADD_GCSS(Instruction *i);
void Instr_ADD_GLII(Instruction *i);
void Instr_ADD_GLID(Instruction *i);
void Instr_ADD_GLDI(Instruction *i);
void Instr_ADD_GLDD(Instruction *i);
void Instr_ADD_GLSS(Instruction *i);
void Instr_ADD_GGII(Instruction *i);
void Instr_ADD_GGID(Instruction *i);
void Instr_ADD_GGDI(Instruction *i);
void Instr_ADD_GGDD(Instruction *i);
void Instr_ADD_GGSS(Instruction *i);
void Instr_SUB_CLII(Instruction *i);
void Instr_SUB_CLID(Instruction *i);
void Instr_SUB_CLDI(Instruction *i);
void Instr_SUB_CLDD(Instruction *i);
void Instr_SUB_CGII(Instruction *i);
void Instr_SUB_CGID(Instruction *i);
void Instr_SUB_CGDI(Instruction *i);
void Instr_SUB_CGDD(Instruction *i);
void Instr_SUB_LCII(Instruction *i);
void Instr_SUB_LCID(Instruction *i);
void Instr_SUB_LCDI(Instruction *i);
void Instr_SUB_LCDD(Instruction *i);
void Instr_SUB_LLII(Instruction *i);
void Instr_SUB_LLID(Instruction *i);
void Instr_SUB_LLDI(Instruction *i);
void Instr_SUB_LLDD(Instruction *i);
void Instr_SUB_LGII(Instruction *i);
void Instr_SUB_LGID(Instruction *i);
void Instr_SUB_LGDI(Instruction *i);
void Instr_SUB_LGDD(Instruction *i);
void Instr_SUB_GCII(Instruction *i);
void Instr_SUB_GCID(Instruction *i);
void Instr_SUB_GCDI(Instruction *i);
void Instr_SUB_GCDD(Instruction *i);
void Instr_SUB_GLII(Instruction *i);
void Instr_SUB_GLID(Instruction *i);
void Instr_SUB_GLDI(Instruction *i);
void Instr_SUB_GLDD(Instruction *i);
void Instr_SUB_GGII(Instruction *i);
void Instr_SUB_GGID(Instruction *i);
void Instr_SUB_GGDI(Instruction *i);
void Instr_SUB_GGDD(Instruction *i);
void Instr_OR_CLBB(Instruction *i);
void Instr_OR_CGBB(Instruction *i);
void Instr_OR_LCBB(Instruction *i);
void Instr_OR_LLBB(Instruction *i);
void Instr_OR_LGBB(Instruction *i);
void Instr_OR_GCBB(Instruction *i);
void Instr_OR_GLBB(Instruction *i);
void Instr_OR_GGBB(Instruction *i);
void Instr_XOR_CLBB(Instruction *i);
void Instr_XOR_CGBB(Instruction *i);
void Instr_XOR_LCBB(Instruction *i);
void Instr_XOR_LLBB(Instruction *i);
void Instr_XOR_LGBB(Instruction *i);
void Instr_XOR_GCBB(Instruction *i);
void Instr_XOR_GLBB(Instruction *i);
void Instr_XOR_GGBB(Instruction *i);
void Instr_L_CLII(Instruction *i);
void Instr_L_CLDD(Instruction *i);
void Instr_L_CLBB(Instruction *i);
void Instr_L_CLSS(Instruction *i);
void Instr_L_CGII(Instruction *i);
void Instr_L_CGDD(Instruction *i);
void Instr_L_CGBB(Instruction *i);
void Instr_L_CGSS(Instruction *i);
void Instr_L_LCII(Instruction *i);
void Instr_L_LCDD(Instruction *i);
void Instr_L_LCBB(Instruction *i);
void Instr_L_LCSS(Instruction *i);
void Instr_L_LLII(Instruction *i);
void Instr_L_LLDD(Instruction *i);
void Instr_L_LLBB(Instruction *i);
void Instr_L_LLSS(Instruction *i);
void Instr_L_LGII(Instruction *i);
void Instr_L_LGDD(Instruction *i);
void Instr_L_LGBB(Instruction *i);
void Instr_L_LGSS(Instruction *i);
void Instr_L_GCII(Instruction *i);
void Instr_L_GCDD(Instruction *i);
void Instr_L_GCBB(Instruction *i);
void Instr_L_GCSS(Instruction *i);
void Instr_L_GLII(Instruction *i);
void Instr_L_GLDD(Instruction *i);
void Instr_L_GLBB(Instruction *i);
void Instr_L_GLSS(Instruction *i);
void Instr_L_GGII(Instruction *i);
void Instr_L_GGDD(Instruction *i);
void Instr_L_GGBB(Instruction *i);
void Instr_L_GGSS(Instruction *i);
void Instr_G_CLII(Instruction *i);
void Instr_G_CLDD(Instruction *i);
void Instr_G_CLBB(Instruction *i);
void Instr_G_CLSS(Instruction *i);
void Instr_G_CGII(Instruction *i);
void Instr_G_CGDD(Instruction *i);
void Instr_G_CGBB(Instruction *i);
void Instr_G_CGSS(Instruction *i);
void Instr_G_LCII(Instruction *i);
void Instr_G_LCDD(Instruction *i);
void Instr_G_LCBB(Instruction *i);
void Instr_G_LCSS(Instruction *i);
void Instr_G_LLII(Instruction *i);
void Instr_G_LLDD(Instruction *i);
void Instr_G_LLBB(Instruction *i);
void Instr_G_LLSS(Instruction *i);
void Instr_G_LGII(Instruction *i);
void Instr_G_LGDD(Instruction *i);
void Instr_G_LGBB(Instruction *i);
void Instr_G_LGSS(Instruction *i);
void Instr_G_GCII(Instruction *i);
void Instr_G_GCDD(Instruction *i);
void Instr_G_GCBB(Instruction *i);
void Instr_G_GCSS(Instruction *i);
void Instr_G_GLII(Instruction *i);
void Instr_G_GLDD(Instruction *i);
void Instr_G_GLBB(Instruction *i);
void Instr_G_GLSS(Instruction *i);
void Instr_G_GGII(Instruction *i);
void Instr_G_GGDD(Instruction *i);
void Instr_G_GGBB(Instruction *i);
void Instr_G_GGSS(Instruction *i);
void Instr_LE_CLII(Instruction *i);
void Instr_LE_CLDD(Instruction *i);
void Instr_LE_CLBB(Instruction *i);
void Instr_LE_CLSS(Instruction *i);
void Instr_LE_CGII(Instruction *i);
void Instr_LE_CGDD(Instruction *i);
void Instr_LE_CGBB(Instruction *i);
void Instr_LE_CGSS(Instruction *i);
void Instr_LE_LCII(Instruction *i);
void Instr_LE_LCDD(Instruction *i);
void Instr_LE_LCBB(Instruction *i);
void Instr_LE_LCSS(Instruction *i);
void Instr_LE_LLII(Instruction *i);
void Instr_LE_LLDD(Instruction *i);
void Instr_LE_LLBB(Instruction *i);
void Instr_LE_LLSS(Instruction *i);
void Instr_LE_LGII(Instruction *i);
void Instr_LE_LGDD(Instruction *i);
void Instr_LE_LGBB(Instruction *i);
void Instr_LE_LGSS(Instruction *i);
void Instr_LE_GCII(Instruction *i);
void Instr_LE_GCDD(Instruction *i);
void Instr_LE_GCBB(Instruction *i);
void Instr_LE_GCSS(Instruction *i);
void Instr_LE_GLII(Instruction *i);
void Instr_LE_GLDD(Instruction *i);
void Instr_LE_GLBB(Instruction *i);
void Instr_LE_GLSS(Instruction *i);
void Instr_LE_GGII(Instruction *i);
void Instr_LE_GGDD(Instruction *i);
void Instr_LE_GGBB(Instruction *i);
void Instr_LE_GGSS(Instruction *i);
void Instr_GE_CLII(Instruction *i);
void Instr_GE_CLDD(Instruction *i);
void Instr_GE_CLBB(Instruction *i);
void Instr_GE_CLSS(Instruction *i);
void Instr_GE_CGII(Instruction *i);
void Instr_GE_CGDD(Instruction *i);
void Instr_GE_CGBB(Instruction *i);
void Instr_GE_CGSS(Instruction *i);
void Instr_GE_LCII(Instruction *i);
void Instr_GE_LCDD(Instruction *i);
void Instr_GE_LCBB(Instruction *i);
void Instr_GE_LCSS(Instruction *i);
void Instr_GE_LLII(Instruction *i);
void Instr_GE_LLDD(Instruction *i);
void Instr_GE_LLBB(Instruction *i);
void Instr_GE_LLSS(Instruction *i);
void Instr_GE_LGII(Instruction *i);
void Instr_GE_LGDD(Instruction *i);
void Instr_GE_LGBB(Instruction *i);
void Instr_GE_LGSS(Instruction *i);
void Instr_GE_GCII(Instruction *i);
void Instr_GE_GCDD(Instruction *i);
void Instr_GE_GCBB(Instruction *i);
void Instr_GE_GCSS(Instruction *i);
void Instr_GE_GLII(Instruction *i);
void Instr_GE_GLDD(Instruction *i);
void Instr_GE_GLBB(Instruction *i);
void Instr_GE_GLSS(Instruction *i);
void Instr_GE_GGII(Instruction *i);
void Instr_GE_GGDD(Instruction *i);
void Instr_GE_GGBB(Instruction *i);
void Instr_GE_GGSS(Instruction *i);
void Instr_EQ_CLII(Instruction *i);
void Instr_EQ_CLDD(Instruction *i);
void Instr_EQ_CLBB(Instruction *i);
void Instr_EQ_CLSS(Instruction *i);
void Instr_EQ_CGII(Instruction *i);
void Instr_EQ_CGDD(Instruction *i);
void Instr_EQ_CGBB(Instruction *i);
void Instr_EQ_CGSS(Instruction *i);
void Instr_EQ_LCII(Instruction *i);
void Instr_EQ_LCDD(Instruction *i);
void Instr_EQ_LCBB(Instruction *i);
void Instr_EQ_LCSS(Instruction *i);
void Instr_EQ_LLII(Instruction *i);
void Instr_EQ_LLDD(Instruction *i);
void Instr_EQ_LLBB(Instruction *i);
void Instr_EQ_LLSS(Instruction *i);
void Instr_EQ_LGII(Instruction *i);
void Instr_EQ_LGDD(Instruction *i);
void Instr_EQ_LGBB(Instruction *i);
void Instr_EQ_LGSS(Instruction *i);
void Instr_EQ_GCII(Instruction *i);
void Instr_EQ_GCDD(Instruction *i);
void Instr_EQ_GCBB(Instruction *i);
void Instr_EQ_GCSS(Instruction *i);
void Instr_EQ_GLII(Instruction *i);
void Instr_EQ_GLDD(Instruction *i);
void Instr_EQ_GLBB(Instruction *i);
void Instr_EQ_GLSS(Instruction *i);
void Instr_EQ_GGII(Instruction *i);
void Instr_EQ_GGDD(Instruction *i);
void Instr_EQ_GGBB(Instruction *i);
void Instr_EQ_GGSS(Instruction *i);
void Instr_NE_CLII(Instruction *i);
void Instr_NE_CLDD(Instruction *i);
void Instr_NE_CLBB(Instruction *i);
void Instr_NE_CLSS(Instruction *i);
void Instr_NE_CGII(Instruction *i);
void Instr_NE_CGDD(Instruction *i);
void Instr_NE_CGBB(Instruction *i);
void Instr_NE_CGSS(Instruction *i);
void Instr_NE_LCII(Instruction *i);
void Instr_NE_LCDD(Instruction *i);
void Instr_NE_LCBB(Instruction *i);
void Instr_NE_LCSS(Instruction *i);
void Instr_NE_LLII(Instruction *i);
void Instr_NE_LLDD(Instruction *i);
void Instr_NE_LLBB(Instruction *i);
void Instr_NE_LLSS(Instruction *i);
void Instr_NE_LGII(Instruction *i);
void Instr_NE_LGDD(Instruction *i);
void Instr_NE_LGBB(Instruction *i);
void Instr_NE_LGSS(Instruction *i);
void Instr_NE_GCII(Instruction *i);
void Instr_NE_GCDD(Instruction *i);
void Instr_NE_GCBB(Instruction *i);
void Instr_NE_GCSS(Instruction *i);
void Instr_NE_GLII(Instruction *i);
void Instr_NE_GLDD(Instruction *i);
void Instr_NE_GLBB(Instruction *i);
void Instr_NE_GLSS(Instruction *i);
void Instr_NE_GGII(Instruction *i);
void Instr_NE_GGDD(Instruction *i);
void Instr_NE_GGBB(Instruction *i);
void Instr_NE_GGSS(Instruction *i);

const InstrFuncPtr instruction_table[3744];

#endif
