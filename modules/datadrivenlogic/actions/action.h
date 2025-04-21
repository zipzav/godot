#ifndef ACTION_H
#define ACTION_H

#include "contexts/executioncontext.h"
#include "core/object/ref_counted.h"

class Action : public RefCounted
{
    GDCLASS(Action, RefCounted);

public:
    Action();

    void execute();
    void revert();

protected:
	static void _bind_methods();

    virtual void execute_internal() {};
    virtual void revert_internal() {};

private:
    ExecutionContext context;
};

#endif // ACTION_H
