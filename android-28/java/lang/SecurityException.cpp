#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./SecurityException.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	SecurityException::SecurityException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	SecurityException::SecurityException()
		: java::lang::RuntimeException(
			"java.lang.SecurityException",
			"()V"
		) {}
	SecurityException::SecurityException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.SecurityException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SecurityException::SecurityException(JThrowable arg0)
		: java::lang::RuntimeException(
			"java.lang.SecurityException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	SecurityException::SecurityException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.lang.SecurityException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

