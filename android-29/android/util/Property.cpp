#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Property.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	Property::Property(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Property::Property(JClass arg0, JString arg1)
		: JObject(
			"android.util.Property",
			"(Ljava/lang/Class;Ljava/lang/String;)V",
			arg0.object<jclass>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	android::util::Property Property::of(JClass arg0, JClass arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.util.Property",
			"of",
			"(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)Landroid/util/Property;",
			arg0.object<jclass>(),
			arg1.object<jclass>(),
			arg2.object<jstring>()
		);
	}
	JObject Property::get(JObject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JString Property::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JClass Property::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/Class;"
		);
	}
	jboolean Property::isReadOnly()
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	void Property::set(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
} // namespace android::util

