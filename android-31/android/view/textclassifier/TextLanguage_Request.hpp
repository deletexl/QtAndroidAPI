#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::view::textclassifier
{
	class TextLanguage_Request : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextLanguage_Request(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextLanguage_Request(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jstring getCallingPackageName();
		android::os::Bundle getExtras();
		jstring getText();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier
