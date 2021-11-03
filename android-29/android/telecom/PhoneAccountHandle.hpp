#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class UserHandle;
}
class JObject;
class JString;

namespace android::telecom
{
	class PhoneAccountHandle : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PhoneAccountHandle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PhoneAccountHandle(QAndroidJniObject obj);
		
		// Constructors
		PhoneAccountHandle(android::content::ComponentName arg0, JString arg1);
		PhoneAccountHandle(android::content::ComponentName arg0, JString arg1, android::os::UserHandle arg2);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		android::content::ComponentName getComponentName();
		JString getId();
		android::os::UserHandle getUserHandle();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telecom

