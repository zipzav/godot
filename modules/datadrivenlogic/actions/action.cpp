#include "action.h"

void Action::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("execute", "context"), &Action::execute);
    ClassDB::bind_method(D_METHOD("revert", "context"), &Action::revert);

    GDVIRTUAL_BIND(_execute_internal, "context");
	GDVIRTUAL_BIND(_revert_internal, "context");
    GDVIRTUAL_BIND(_is_revertible);
}

Action::Action()
{
}

void Action::execute(Ref<ExecutionContext> context)
{
    GDVIRTUAL_CALL(_execute_internal, context);
}

void Action::revert(Ref<ExecutionContext> context)
{
    GDVIRTUAL_CALL(_revert_internal, context);
}

bool Action::_is_revertible()
{
    return false;
}
