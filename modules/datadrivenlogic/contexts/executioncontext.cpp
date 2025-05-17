#include "executioncontext.h"

void ExecutionContext::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("get_node", "index"), &ExecutionContext::get_node);
    ClassDB::bind_method(D_METHOD("get_root"), &ExecutionContext::get_root);
    ClassDB::bind_method(D_METHOD("set_root", "root_node"), &ExecutionContext::set_root);
    ClassDB::bind_method(D_METHOD("append_node", "node"), &ExecutionContext::append_node);
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

void ExecutionContext::append_node(Node* node)
{
    nodes.append(node);
}