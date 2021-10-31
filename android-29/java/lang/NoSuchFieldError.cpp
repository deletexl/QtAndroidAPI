#include "./NoSuchFieldError.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	NoSuchFieldError::NoSuchFieldError(QAndroidJniObject obj) : java::lang::IncompatibleClassChangeError(obj) {}
	
	// Constructors
	NoSuchFieldError::NoSuchFieldError()
		: java::lang::IncompatibleClassChangeError(
			"java.lang.NoSuchFieldError",
			"()V"
		) {}
	NoSuchFieldError::NoSuchFieldError(jstring arg0)
		: java::lang::IncompatibleClassChangeError(
			"java.lang.NoSuchFieldError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

