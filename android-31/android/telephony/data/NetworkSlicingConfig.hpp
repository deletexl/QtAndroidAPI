#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony::data
{
	class NetworkSlicingConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkSlicingConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkSlicingConfig(QJniObject obj);
		
		// Constructors
		NetworkSlicingConfig();
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getSliceInfo() const;
		JObject getUrspRules() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony::data

