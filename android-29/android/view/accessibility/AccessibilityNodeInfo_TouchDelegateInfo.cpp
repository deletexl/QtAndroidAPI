#include "../../graphics/Region.hpp"
#include "../../os/Parcel.hpp"
#include "./AccessibilityNodeInfo.hpp"
#include "./AccessibilityNodeInfo_TouchDelegateInfo.hpp"

namespace android::view::accessibility
{
	// Fields
	QAndroidJniObject AccessibilityNodeInfo_TouchDelegateInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo$TouchDelegateInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	AccessibilityNodeInfo_TouchDelegateInfo::AccessibilityNodeInfo_TouchDelegateInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AccessibilityNodeInfo_TouchDelegateInfo::AccessibilityNodeInfo_TouchDelegateInfo(__JniBaseClass arg0)
		: __JniBaseClass(
			"android.view.accessibility.AccessibilityNodeInfo$TouchDelegateInfo",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	
	// Methods
	jint AccessibilityNodeInfo_TouchDelegateInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_TouchDelegateInfo::getRegionAt(jint arg0)
	{
		return callObjectMethod(
			"getRegionAt",
			"(I)Landroid/graphics/Region;",
			arg0
		);
	}
	jint AccessibilityNodeInfo_TouchDelegateInfo::getRegionCount()
	{
		return callMethod<jint>(
			"getRegionCount",
			"()I"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo_TouchDelegateInfo::getTargetForRegion(android::graphics::Region arg0)
	{
		return callObjectMethod(
			"getTargetForRegion",
			"(Landroid/graphics/Region;)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0.object()
		);
	}
	void AccessibilityNodeInfo_TouchDelegateInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::accessibility

