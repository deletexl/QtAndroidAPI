#include "./EventLogTags_Description.hpp"

namespace android::util
{
	// Fields
	jstring EventLogTags_Description::mName()
	{
		return getObjectField(
			"mName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint EventLogTags_Description::mTag()
	{
		return getField<jint>(
			"mTag"
		);
	}
	
	// QAndroidJniObject forward
	EventLogTags_Description::EventLogTags_Description(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::util
