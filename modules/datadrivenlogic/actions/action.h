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

protected:
	static void _bind_methods();

    virtual void execute_internal(Ref<ExecutionContext> context) {};
    virtual void revert_internal(Ref<ExecutionContext> context) {};
};

#endif // ACTION_H
