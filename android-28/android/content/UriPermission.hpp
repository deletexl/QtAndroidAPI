#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}

namespace android::content
{
	class UriPermission : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jlong INVALID_TIME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UriPermission(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UriPermission(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jlong getPersistedTime();
		android::net::Uri getUri();
		jboolean isReadPermission();
		jboolean isWritePermission();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content
