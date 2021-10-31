#include "./IncompatibleClassChangeError.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	IncompatibleClassChangeError::IncompatibleClassChangeError(QAndroidJniObject obj) : java::lang::LinkageError(obj) {}
	
	// Constructors
	IncompatibleClassChangeError::IncompatibleClassChangeError()
		: java::lang::LinkageError(
			"java.lang.IncompatibleClassChangeError",
			"()V"
		) {}
	IncompatibleClassChangeError::IncompatibleClassChangeError(jstring arg0)
		: java::lang::LinkageError(
			"java.lang.IncompatibleClassChangeError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang
