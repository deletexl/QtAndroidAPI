#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./UsageStats.hpp"

namespace android::app::usage
{
	// Fields
	JObject UsageStats::CREATOR()
	{
		return getStaticObjectField(
			"android.app.usage.UsageStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	UsageStats::UsageStats(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	UsageStats::UsageStats(android::app::usage::UsageStats &arg0)
		: JObject(
			"android.app.usage.UsageStats",
			"(Landroid/app/usage/UsageStats;)V",
			arg0.object()
		) {}
	
	// Methods
	void UsageStats::add(android::app::usage::UsageStats arg0) const
	{
		callMethod<void>(
			"add",
			"(Landroid/app/usage/UsageStats;)V",
			arg0.object()
		);
	}
	jint UsageStats::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong UsageStats::getFirstTimeStamp() const
	{
		return callMethod<jlong>(
			"getFirstTimeStamp",
			"()J"
		);
	}
	jlong UsageStats::getLastTimeStamp() const
	{
		return callMethod<jlong>(
			"getLastTimeStamp",
			"()J"
		);
	}
	jlong UsageStats::getLastTimeUsed() const
	{
		return callMethod<jlong>(
			"getLastTimeUsed",
			"()J"
		);
	}
	JString UsageStats::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	jlong UsageStats::getTotalTimeInForeground() const
	{
		return callMethod<jlong>(
			"getTotalTimeInForeground",
			"()J"
		);
	}
	void UsageStats::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::usage

