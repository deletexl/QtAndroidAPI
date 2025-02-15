#include "../../JString.hpp"
#include "./ClassCircularityError.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	ClassCircularityError::ClassCircularityError(QJniObject obj) : java::lang::LinkageError(obj) {}
	
	// Constructors
	ClassCircularityError::ClassCircularityError()
		: java::lang::LinkageError(
			"java.lang.ClassCircularityError",
			"()V"
		) {}
	ClassCircularityError::ClassCircularityError(JString arg0)
		: java::lang::LinkageError(
			"java.lang.ClassCircularityError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

