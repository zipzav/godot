#include "register_types.h"

#include "actions/action.h"
#include "contexts/executioncontext.h"
#include "conditions/condition.h"

#include "core/object/class_db.h"

void initialize_datadrivenlogic_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE)
	{
		return;
	}
	ClassDB::register_class<ExecutionContext>();
	ClassDB::register_class<Action>();
	ClassDB::register_class<Condition>();
}

void uninitialize_datadrivenlogic_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
   // Nothing to do here in this example.
}