#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::wifi::aware
{
	class SubscribeConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint SUBSCRIBE_TYPE_ACTIVE();
		static jint SUBSCRIBE_TYPE_PASSIVE();
		
		// QJniObject forward
		template<typename ...Ts> explicit SubscribeConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SubscribeConfig(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::aware

