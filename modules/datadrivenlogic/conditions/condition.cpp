#include "condition.h"

void Condition::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("set_is_verified", "p_is_verified"), &Condition::set_is_verified);
    ClassDB::bind_method(D_METHOD("get_is_verified"), &Condition::get_is_verified);

    GDVIRTUAL_BIND(_is_one_time_verified);
    GDVIRTUAL_BIND(_verify, "context");
}

Condition::Condition()
{
}

bool Condition::get_is_verified()
{
    return is_verified;
}

void Condition::set_is_verified(bool p_is_verified)
{
    is_verified = p_is_verified;
}

void Condition::_verify(Ref<ExecutionContext> context)
{
    return;
}

bool Condition::_is_one_time_verified() const
{
    return true;
}