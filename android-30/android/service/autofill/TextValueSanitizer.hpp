#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::util::regex
{
	class Pattern;
}

namespace android::service::autofill
{
	class TextValueSanitizer : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextValueSanitizer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextValueSanitizer(QAndroidJniObject obj);
		
		// Constructors
		TextValueSanitizer(java::util::regex::Pattern arg0, jstring arg1);
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

