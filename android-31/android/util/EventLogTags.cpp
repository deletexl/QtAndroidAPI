#include "./EventLogTags_Description.hpp"
#include "../../java/io/BufferedReader.hpp"
#include "../../JString.hpp"
#include "./EventLogTags.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	EventLogTags::EventLogTags(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	EventLogTags::EventLogTags()
		: JObject(
			"android.util.EventLogTags",
			"()V"
		) {}
	EventLogTags::EventLogTags(java::io::BufferedReader arg0)
		: JObject(
			"android.util.EventLogTags",
			"(Ljava/io/BufferedReader;)V",
			arg0.object()
		) {}
	
	// Methods
	android::util::EventLogTags_Description EventLogTags::get(jint arg0) const
	{
		return callObjectMethod(
			"get",
			"(I)Landroid/util/EventLogTags$Description;",
			arg0
		);
	}
	android::util::EventLogTags_Description EventLogTags::get(JString arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Landroid/util/EventLogTags$Description;",
			arg0.object<jstring>()
		);
	}
} // namespace android::util

