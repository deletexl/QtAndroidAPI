#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Thread_State.hpp"

namespace java::lang
{
	// Fields
	java::lang::Thread_State Thread_State::BLOCKED()
	{
		return getStaticObjectField(
			"java.lang.Thread$State",
			"BLOCKED",
			"Ljava/lang/Thread$State;"
		);
	}
	java::lang::Thread_State Thread_State::NEW()
	{
		return getStaticObjectField(
			"java.lang.Thread$State",
			"NEW",
			"Ljava/lang/Thread$State;"
		);
	}
	java::lang::Thread_State Thread_State::RUNNABLE()
	{
		return getStaticObjectField(
			"java.lang.Thread$State",
			"RUNNABLE",
			"Ljava/lang/Thread$State;"
		);
	}
	java::lang::Thread_State Thread_State::TERMINATED()
	{
		return getStaticObjectField(
			"java.lang.Thread$State",
			"TERMINATED",
			"Ljava/lang/Thread$State;"
		);
	}
	java::lang::Thread_State Thread_State::TIMED_WAITING()
	{
		return getStaticObjectField(
			"java.lang.Thread$State",
			"TIMED_WAITING",
			"Ljava/lang/Thread$State;"
		);
	}
	java::lang::Thread_State Thread_State::WAITING()
	{
		return getStaticObjectField(
			"java.lang.Thread$State",
			"WAITING",
			"Ljava/lang/Thread$State;"
		);
	}
	
	// QJniObject forward
	Thread_State::Thread_State(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::lang::Thread_State Thread_State::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Thread$State",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Thread$State;",
			arg0.object<jstring>()
		);
	}
	JArray Thread_State::values()
	{
		return callStaticObjectMethod(
			"java.lang.Thread$State",
			"values",
			"()[Ljava/lang/Thread$State;"
		);
	}
} // namespace java::lang

