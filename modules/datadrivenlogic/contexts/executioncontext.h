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
    void set_owner(Node* p_owner) { owner = p_owner;}

    Node* get_root() { return root_node; };
    void set_root(Node* p_root_node) { root_node = p_root_node;}

    Node* get_node(int index);
    void append_node(Node* node);

protected:
    static void _bind_methods();

private:
    Node* owner = nullptr;
    Node* root_node = nullptr;

    Vector<Node*> nodes;
};

#endif // EXECUTIONCONTEXT_H