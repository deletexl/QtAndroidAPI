#include "./WebStorage_Origin.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	WebStorage_Origin::WebStorage_Origin(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring WebStorage_Origin::getOrigin()
	{
		return callObjectMethod(
			"getOrigin",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong WebStorage_Origin::getQuota()
	{
		return callMethod<jlong>(
			"getQuota",
			"()J"
		);
	}
	jlong WebStorage_Origin::getUsage()
	{
		return callMethod<jlong>(
			"getUsage",
			"()J"
		);
	}
} // namespace android::webkit
