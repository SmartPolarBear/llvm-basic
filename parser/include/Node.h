#pragma once

#include <cstdlib>

#include <llvm/IR/Value.h>

namespace Parser
{

class Node
{
  public:
    virtual ~Node()
    {
    }

    virtual llvm::Value *codegen() = 0;
};

} // namespace Parser