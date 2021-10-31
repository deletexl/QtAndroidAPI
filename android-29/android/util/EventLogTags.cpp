#include "./EventLogTags_Description.hpp"
#include "../../java/io/BufferedReader.hpp"
#include "./EventLogTags.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	EventLogTags::EventLogTags(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	EventLogTags::EventLogTags()
		: __JniBaseClass(
			"android.util.EventLogTags",
			"()V"
		) {}
	EventLogTags::EventLogTags(java::io::BufferedReader arg0)
		: __JniBaseClass(
			"android.util.EventLogTags",
			"(Ljava/io/BufferedReader;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject EventLogTags::get(jint arg0)
	{
		return callObjectMethod(
			"get",
			"(I)Landroid/util/EventLogTags$Description;",
			arg0
		);
	}
	QAndroidJniObject EventLogTags::get(jstring arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Landroid/util/EventLogTags$Description;",
			arg0
		);
	}
} // namespace android::util

