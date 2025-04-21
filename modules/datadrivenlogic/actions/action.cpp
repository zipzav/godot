#include "action.h"

void Action::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("execute"), &Action::execute);
    ClassDB::bind_method(D_METHOD("revert"), &Action::revert);
}

Action::Action()
{
}

void Action::execute()
{
    execute_internal();
}

void Action::revert()
{
    revert_internal();
}
