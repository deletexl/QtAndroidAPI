#include "../../JString.hpp"
#include "./UnsatisfiedLinkError.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	UnsatisfiedLinkError::UnsatisfiedLinkError(QJniObject obj) : java::lang::LinkageError(obj) {}
	
	// Constructors
	UnsatisfiedLinkError::UnsatisfiedLinkError()
		: java::lang::LinkageError(
			"java.lang.UnsatisfiedLinkError",
			"()V"
		) {}
	UnsatisfiedLinkError::UnsatisfiedLinkError(JString arg0)
		: java::lang::LinkageError(
			"java.lang.UnsatisfiedLinkError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

