#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::bluetooth::le
{
	class ScanFilter;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;
namespace java::util::regex
{
	class Pattern;
}

namespace android::companion
{
	class BluetoothLeDeviceFilter : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothLeDeviceFilter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothLeDeviceFilter(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getRenamePrefixLengthLimit();
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::companion

