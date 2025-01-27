#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./PackageManager_Property.hpp"

namespace android::content::pm
{
	// Fields
	JObject PackageManager_Property::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageManager$Property",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	PackageManager_Property::PackageManager_Property(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint PackageManager_Property::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PackageManager_Property::getBoolean() const
	{
		return callMethod<jboolean>(
			"getBoolean",
			"()Z"
		);
	}
	JString PackageManager_Property::getClassName() const
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		);
	}
	jfloat PackageManager_Property::getFloat() const
	{
		return callMethod<jfloat>(
			"getFloat",
			"()F"
		);
	}
	jint PackageManager_Property::getInteger() const
	{
		return callMethod<jint>(
			"getInteger",
			"()I"
		);
	}
	JString PackageManager_Property::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JString PackageManager_Property::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	jint PackageManager_Property::getResourceId() const
	{
		return callMethod<jint>(
			"getResourceId",
			"()I"
		);
	}
	JString PackageManager_Property::getString() const
	{
		return callObjectMethod(
			"getString",
			"()Ljava/lang/String;"
		);
	}
	jboolean PackageManager_Property::isBoolean() const
	{
		return callMethod<jboolean>(
			"isBoolean",
			"()Z"
		);
	}
	jboolean PackageManager_Property::isFloat() const
	{
		return callMethod<jboolean>(
			"isFloat",
			"()Z"
		);
	}
	jboolean PackageManager_Property::isInteger() const
	{
		return callMethod<jboolean>(
			"isInteger",
			"()Z"
		);
	}
	jboolean PackageManager_Property::isResourceId() const
	{
		return callMethod<jboolean>(
			"isResourceId",
			"()Z"
		);
	}
	jboolean PackageManager_Property::isString() const
	{
		return callMethod<jboolean>(
			"isString",
			"()Z"
		);
	}
	void PackageManager_Property::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

