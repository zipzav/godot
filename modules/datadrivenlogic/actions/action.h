#ifndef ACTION_H
#define ACTION_H

#include "modules/datadrivenlogic/contexts/executioncontext.h"
#include "core/object/ref_counted.h"

class Action : public Resource
{
    GDCLASS(Action, Resource);

public:
    Action();

    void execute(Ref<ExecutionContext> context);
    void revert(Ref<ExecutionContext> context);

    virtual bool _is_revertible();
    GDVIRTUAL0RC(bool, _is_revertible);


protected:
	static void _bind_methods();

    GDVIRTUAL1(_execute_internal, Ref<ExecutionContext>);
    GDVIRTUAL1(_revert_internal, Ref<ExecutionContext>);

    virtual void execute_internal(Ref<ExecutionContext> context) {};
    virtual void revert_internal(Ref<ExecutionContext> context) {};
};

#endif // ACTION_H
