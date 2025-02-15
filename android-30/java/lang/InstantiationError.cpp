#include "../../JString.hpp"
#include "./InstantiationError.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	InstantiationError::InstantiationError(QJniObject obj) : java::lang::IncompatibleClassChangeError(obj) {}
	
	// Constructors
	InstantiationError::InstantiationError()
		: java::lang::IncompatibleClassChangeError(
			"java.lang.InstantiationError",
			"()V"
		) {}
	InstantiationError::InstantiationError(JString arg0)
		: java::lang::IncompatibleClassChangeError(
			"java.lang.InstantiationError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

