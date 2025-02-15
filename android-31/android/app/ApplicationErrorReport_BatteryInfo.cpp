#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./ApplicationErrorReport_BatteryInfo.hpp"

namespace android::app
{
	// Fields
	JString ApplicationErrorReport_BatteryInfo::checkinDetails()
	{
		return getObjectField(
			"checkinDetails",
			"Ljava/lang/String;"
		);
	}
	jlong ApplicationErrorReport_BatteryInfo::durationMicros()
	{
		return getField<jlong>(
			"durationMicros"
		);
	}
	JString ApplicationErrorReport_BatteryInfo::usageDetails()
	{
		return getObjectField(
			"usageDetails",
			"Ljava/lang/String;"
		);
	}
	jint ApplicationErrorReport_BatteryInfo::usagePercent()
	{
		return getField<jint>(
			"usagePercent"
		);
	}
	
	// QJniObject forward
	ApplicationErrorReport_BatteryInfo::ApplicationErrorReport_BatteryInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ApplicationErrorReport_BatteryInfo::ApplicationErrorReport_BatteryInfo()
		: JObject(
			"android.app.ApplicationErrorReport$BatteryInfo",
			"()V"
		) {}
	ApplicationErrorReport_BatteryInfo::ApplicationErrorReport_BatteryInfo(android::os::Parcel arg0)
		: JObject(
			"android.app.ApplicationErrorReport$BatteryInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	void ApplicationErrorReport_BatteryInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void ApplicationErrorReport_BatteryInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

