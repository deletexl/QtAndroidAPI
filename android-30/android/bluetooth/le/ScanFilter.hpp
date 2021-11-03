#pragma once

#include "../../../JObject.hpp"

namespace android::bluetooth::le
{
	class ScanResult;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class ParcelUuid;
}

namespace android::bluetooth::le
{
	class ScanFilter : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScanFilter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScanFilter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getDeviceAddress();
		jstring getDeviceName();
		jbyteArray getManufacturerData();
		jbyteArray getManufacturerDataMask();
		jint getManufacturerId();
		jbyteArray getServiceData();
		jbyteArray getServiceDataMask();
		android::os::ParcelUuid getServiceDataUuid();
		android::os::ParcelUuid getServiceSolicitationUuid();
		android::os::ParcelUuid getServiceSolicitationUuidMask();
		android::os::ParcelUuid getServiceUuid();
		android::os::ParcelUuid getServiceUuidMask();
		jint hashCode();
		jboolean matches(android::bluetooth::le::ScanResult arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth::le

