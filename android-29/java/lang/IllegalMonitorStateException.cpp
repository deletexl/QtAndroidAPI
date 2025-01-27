#include "../../JString.hpp"
#include "./IllegalMonitorStateException.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	IllegalMonitorStateException::IllegalMonitorStateException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	IllegalMonitorStateException::IllegalMonitorStateException()
		: java::lang::RuntimeException(
			"java.lang.IllegalMonitorStateException",
			"()V"
		) {}
	IllegalMonitorStateException::IllegalMonitorStateException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.IllegalMonitorStateException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

