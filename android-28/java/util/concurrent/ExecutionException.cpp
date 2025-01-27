#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./ExecutionException.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	ExecutionException::ExecutionException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	ExecutionException::ExecutionException(JThrowable arg0)
		: java::lang::Exception(
			"java.util.concurrent.ExecutionException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	ExecutionException::ExecutionException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"java.util.concurrent.ExecutionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::util::concurrent

