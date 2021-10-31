#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::nio
{
	class ByteBuffer;
}

namespace android::os
{
	class SharedMemory : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SharedMemory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SharedMemory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject create(jstring arg0, jint arg1);
		static void unmap(java::nio::ByteBuffer arg0);
		void close();
		jint describeContents();
		jint getSize();
		QAndroidJniObject map(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject mapReadOnly();
		QAndroidJniObject mapReadWrite();
		jboolean setProtect(jint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

