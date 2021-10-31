#include "./UsbEndpoint.hpp"
#include "../../os/Parcel.hpp"
#include "./UsbInterface.hpp"

namespace android::hardware::usb
{
	// Fields
	QAndroidJniObject UsbInterface::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.usb.UsbInterface",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	UsbInterface::UsbInterface(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint UsbInterface::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint UsbInterface::getAlternateSetting()
	{
		return callMethod<jint>(
			"getAlternateSetting",
			"()I"
		);
	}
	QAndroidJniObject UsbInterface::getEndpoint(jint arg0)
	{
		return callObjectMethod(
			"getEndpoint",
			"(I)Landroid/hardware/usb/UsbEndpoint;",
			arg0
		);
	}
	jint UsbInterface::getEndpointCount()
	{
		return callMethod<jint>(
			"getEndpointCount",
			"()I"
		);
	}
	jint UsbInterface::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint UsbInterface::getInterfaceClass()
	{
		return callMethod<jint>(
			"getInterfaceClass",
			"()I"
		);
	}
	jint UsbInterface::getInterfaceProtocol()
	{
		return callMethod<jint>(
			"getInterfaceProtocol",
			"()I"
		);
	}
	jint UsbInterface::getInterfaceSubclass()
	{
		return callMethod<jint>(
			"getInterfaceSubclass",
			"()I"
		);
	}
	jstring UsbInterface::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsbInterface::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void UsbInterface::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::usb

