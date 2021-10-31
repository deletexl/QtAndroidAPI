#include "./AccessControlProfileId.hpp"

namespace android::security::identity
{
	// Fields
	
	// QAndroidJniObject forward
	AccessControlProfileId::AccessControlProfileId(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AccessControlProfileId::AccessControlProfileId(jint arg0)
		: __JniBaseClass(
			"android.security.identity.AccessControlProfileId",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint AccessControlProfileId::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
} // namespace android::security::identity
