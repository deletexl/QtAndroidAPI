#include "./TimeoutException.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	TimeoutException::TimeoutException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	TimeoutException::TimeoutException()
		: java::lang::Exception(
			"java.util.concurrent.TimeoutException",
			"()V"
		) {}
	TimeoutException::TimeoutException(jstring arg0)
		: java::lang::Exception(
			"java.util.concurrent.TimeoutException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::util::concurrent
