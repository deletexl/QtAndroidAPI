#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view
{
	class Display_Mode : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Display_Mode(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Display_Mode(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jfloatArray getAlternativeRefreshRates();
		jint getModeId();
		jint getPhysicalHeight();
		jint getPhysicalWidth();
		jfloat getRefreshRate();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view
