#include "../../JString.hpp"
#include "./OutOfMemoryError.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	OutOfMemoryError::OutOfMemoryError(QAndroidJniObject obj) : java::lang::VirtualMachineError(obj) {}
	
	// Constructors
	OutOfMemoryError::OutOfMemoryError()
		: java::lang::VirtualMachineError(
			"java.lang.OutOfMemoryError",
			"()V"
		) {}
	OutOfMemoryError::OutOfMemoryError(JString arg0)
		: java::lang::VirtualMachineError(
			"java.lang.OutOfMemoryError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

