#include "action.h"

void Action::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("execute", "context"), &Action::execute);
    ClassDB::bind_method(D_METHOD("revert", "context"), &Action::revert);
}

Action::Action()
{
}

void Action::execute(Ref<ExecutionContext> context)
{
    execute_internal(context);
}

void Action::revert(Ref<ExecutionContext> context)
{
    revert_internal(context);
}
