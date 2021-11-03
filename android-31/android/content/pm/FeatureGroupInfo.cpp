#include "../../os/Parcel.hpp"
#include "./FeatureGroupInfo.hpp"

namespace android::content::pm
{
	// Fields
	JObject FeatureGroupInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.FeatureGroupInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jarray FeatureGroupInfo::features()
	{
		return getObjectField(
			"features",
			"[Landroid/content/pm/FeatureInfo;"
		).object<jarray>();
	}
	
	// QAndroidJniObject forward
	FeatureGroupInfo::FeatureGroupInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	FeatureGroupInfo::FeatureGroupInfo()
		: JObject(
			"android.content.pm.FeatureGroupInfo",
			"()V"
		) {}
	FeatureGroupInfo::FeatureGroupInfo(android::content::pm::FeatureGroupInfo &arg0)
		: JObject(
			"android.content.pm.FeatureGroupInfo",
			"(Landroid/content/pm/FeatureGroupInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	jint FeatureGroupInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void FeatureGroupInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

