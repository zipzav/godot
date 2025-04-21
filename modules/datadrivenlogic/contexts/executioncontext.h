#ifndef EXECUTIONCONTEXT_H
#define EXECUTIONCONTEXT_H

#include "core/object/ref_counted.h"
#include "core/variant/typed_array.h"
#include "scene/main/node.h"

class Node;
class ExecutionContext : public RefCounted
{
    GDCLASS(ExecutionContext, RefCounted);
public:
    ExecutionContext();

    Node* get_owner() { return owner; };
    Node* get_node(int index);
    
protected:
    static void _bind_methods();

private:
    Node* owner = nullptr;
    Vector<Node*> nodes;
};

#endif // EXECUTIONCONTEXT_H