#include "../../JString.hpp"
#include "./NoSuchMethodError.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	NoSuchMethodError::NoSuchMethodError(QJniObject obj) : java::lang::IncompatibleClassChangeError(obj) {}
	
	// Constructors
	NoSuchMethodError::NoSuchMethodError()
		: java::lang::IncompatibleClassChangeError(
			"java.lang.NoSuchMethodError",
			"()V"
		) {}
	NoSuchMethodError::NoSuchMethodError(JString arg0)
		: java::lang::IncompatibleClassChangeError(
			"java.lang.NoSuchMethodError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

