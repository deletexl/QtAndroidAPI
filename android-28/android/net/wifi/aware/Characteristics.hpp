#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::aware
{
	class Characteristics : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit Characteristics(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Characteristics(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getMaxMatchFilterLength() const;
		jint getMaxServiceNameLength() const;
		jint getMaxServiceSpecificInfoLength() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::aware

