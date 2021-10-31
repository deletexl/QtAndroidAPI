#include "./ParcelFormatException.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	ParcelFormatException::ParcelFormatException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	ParcelFormatException::ParcelFormatException()
		: java::lang::RuntimeException(
			"android.os.ParcelFormatException",
			"()V"
		) {}
	ParcelFormatException::ParcelFormatException(jstring arg0)
		: java::lang::RuntimeException(
			"android.os.ParcelFormatException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::os
