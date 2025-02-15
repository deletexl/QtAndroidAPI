#include "../../JString.hpp"
#include "./AbstractMethodError.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	AbstractMethodError::AbstractMethodError(QJniObject obj) : java::lang::IncompatibleClassChangeError(obj) {}
	
	// Constructors
	AbstractMethodError::AbstractMethodError()
		: java::lang::IncompatibleClassChangeError(
			"java.lang.AbstractMethodError",
			"()V"
		) {}
	AbstractMethodError::AbstractMethodError(JString arg0)
		: java::lang::IncompatibleClassChangeError(
			"java.lang.AbstractMethodError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

