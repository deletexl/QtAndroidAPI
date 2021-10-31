#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::hardware::usb
{
	class UsbInterface;
}
namespace android::os
{
	class Parcel;
}

namespace android::hardware::usb
{
	class UsbConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UsbConfiguration(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UsbConfiguration(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jint getId();
		android::hardware::usb::UsbInterface getInterface(jint arg0);
		jint getInterfaceCount();
		jint getMaxPower();
		jstring getName();
		jboolean isRemoteWakeup();
		jboolean isSelfPowered();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::hardware::usb
