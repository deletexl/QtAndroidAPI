#include "./LimitExceededException.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	LimitExceededException::LimitExceededException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	LimitExceededException::LimitExceededException()
		: java::lang::IllegalStateException(
			"android.os.LimitExceededException",
			"()V"
		) {}
	LimitExceededException::LimitExceededException(jstring arg0)
		: java::lang::IllegalStateException(
			"android.os.LimitExceededException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::os
