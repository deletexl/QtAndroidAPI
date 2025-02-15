#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net
{
	class MacAddress : public JObject
	{
	public:
		// Fields
		static android::net::MacAddress BROADCAST_ADDRESS();
		static JObject CREATOR();
		static jint TYPE_BROADCAST();
		static jint TYPE_MULTICAST();
		static jint TYPE_UNICAST();
		
		// QJniObject forward
		template<typename ...Ts> explicit MacAddress(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MacAddress(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::MacAddress fromBytes(JByteArray arg0);
		static android::net::MacAddress fromString(JString arg0);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getAddressType() const;
		jint hashCode() const;
		jboolean isLocallyAssigned() const;
		JByteArray toByteArray() const;
		JString toOuiString() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net

