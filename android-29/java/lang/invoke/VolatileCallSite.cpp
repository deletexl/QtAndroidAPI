#include "./MethodHandle.hpp"
#include "./MethodType.hpp"
#include "./VolatileCallSite.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// QAndroidJniObject forward
	VolatileCallSite::VolatileCallSite(QAndroidJniObject obj) : java::lang::invoke::CallSite(obj) {}
	
	// Constructors
	VolatileCallSite::VolatileCallSite(java::lang::invoke::MethodHandle arg0)
		: java::lang::invoke::CallSite(
			"java.lang.invoke.VolatileCallSite",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.object()
		) {}
	VolatileCallSite::VolatileCallSite(java::lang::invoke::MethodType arg0)
		: java::lang::invoke::CallSite(
			"java.lang.invoke.VolatileCallSite",
			"(Ljava/lang/invoke/MethodType;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject VolatileCallSite::dynamicInvoker()
	{
		return callObjectMethod(
			"dynamicInvoker",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	QAndroidJniObject VolatileCallSite::getTarget()
	{
		return callObjectMethod(
			"getTarget",
			"()Ljava/lang/invoke/MethodHandle;"
		);
	}
	void VolatileCallSite::setTarget(java::lang::invoke::MethodHandle arg0)
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/lang/invoke/MethodHandle;)V",
			arg0.object()
		);
	}
} // namespace java::lang::invoke

