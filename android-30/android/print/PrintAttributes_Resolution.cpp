#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PrintAttributes_Resolution.hpp"

namespace android::print
{
	// Fields
	
	// QJniObject forward
	PrintAttributes_Resolution::PrintAttributes_Resolution(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PrintAttributes_Resolution::PrintAttributes_Resolution(JString arg0, JString arg1, jint arg2, jint arg3)
		: JObject(
			"android.print.PrintAttributes$Resolution",
			"(Ljava/lang/String;Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3
		) {}
	
	// Methods
	jboolean PrintAttributes_Resolution::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint PrintAttributes_Resolution::getHorizontalDpi() const
	{
		return callMethod<jint>(
			"getHorizontalDpi",
			"()I"
		);
	}
	JString PrintAttributes_Resolution::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	JString PrintAttributes_Resolution::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;"
		);
	}
	jint PrintAttributes_Resolution::getVerticalDpi() const
	{
		return callMethod<jint>(
			"getVerticalDpi",
			"()I"
		);
	}
	jint PrintAttributes_Resolution::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString PrintAttributes_Resolution::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::print

