#include "../../../JString.hpp"
#include "./BidiRun.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	BidiRun::BidiRun(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jbyte BidiRun::getDirection()
	{
		return callMethod<jbyte>(
			"getDirection",
			"()B"
		);
	}
	jbyte BidiRun::getEmbeddingLevel()
	{
		return callMethod<jbyte>(
			"getEmbeddingLevel",
			"()B"
		);
	}
	jint BidiRun::getLength()
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jint BidiRun::getLimit()
	{
		return callMethod<jint>(
			"getLimit",
			"()I"
		);
	}
	jint BidiRun::getStart()
	{
		return callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	jboolean BidiRun::isEvenRun()
	{
		return callMethod<jboolean>(
			"isEvenRun",
			"()Z"
		);
	}
	jboolean BidiRun::isOddRun()
	{
		return callMethod<jboolean>(
			"isOddRun",
			"()Z"
		);
	}
	JString BidiRun::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

