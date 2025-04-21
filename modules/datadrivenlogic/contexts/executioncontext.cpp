#include "executioncontext.h"

void ExecutionContext::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("get_node", "index"), &ExecutionContext::get_node);
}

ExecutionContext::ExecutionContext()
{
}

Node* ExecutionContext::get_node(int index)
{
    if(nodes.size() >= index)
        return nullptr;

   return nodes[index]; 
}
