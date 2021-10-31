#include "./LayoutDirection.hpp"

namespace android::util
{
	// Fields
	jint LayoutDirection::INHERIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.LayoutDirection",
			"INHERIT"
		);
	}
	jint LayoutDirection::LOCALE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.LayoutDirection",
			"LOCALE"
		);
	}
	jint LayoutDirection::LTR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.LayoutDirection",
			"LTR"
		);
	}
	jint LayoutDirection::RTL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.LayoutDirection",
			"RTL"
		);
	}
	
	// QAndroidJniObject forward
	LayoutDirection::LayoutDirection(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::util

