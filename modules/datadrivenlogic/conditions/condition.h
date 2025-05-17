#ifndef CONDITION_H
#define CONDITION_H

#include "modules/datadrivenlogic/contexts/executioncontext.h"
#include "core/object/ref_counted.h"

class Condition : public Resource
{
    GDCLASS(Condition, Resource);

public:
    Condition();

    virtual void _verify(Ref<ExecutionContext> context);
    GDVIRTUAL1(_verify, Ref<ExecutionContext>);

    virtual bool _is_one_time_verified() const;
    GDVIRTUAL0RC(bool, _is_one_time_verified);

    bool get_is_verified();
    void set_is_verified(bool p_is_verified);

protected:
	static void _bind_methods();

private:
    bool is_verified = false;
};

#endif // CONDITION_H