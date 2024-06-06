#ifndef ROCKETC_CODEGENERATION_H
#define ROCKETC_CODEGENERATION_H

#include "../Util/TreeNode.h"
#include "CodeGenerationTypes.h"

int executeCodeGeneration(TreeNode_st *pTreeRoot, FILE* pDestStream);
void codeGenerationTestUnit();
void functionGenerationTestUnit();
static int loadImm32(uint32_t dVal, reg_et destReg);

#endif