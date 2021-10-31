#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::opengl
{
	class ETC1Util_ETC1Texture;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
namespace java::nio
{
	class Buffer;
}

namespace android::opengl
{
	class ETC1Util : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ETC1Util(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ETC1Util(QAndroidJniObject obj);
		
		// Constructors
		ETC1Util();
		
		// Methods
		static QAndroidJniObject compressTexture(java::nio::Buffer arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static QAndroidJniObject createTexture(java::io::InputStream arg0);
		static jboolean isETC1Supported();
		static void loadTexture(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::opengl::ETC1Util_ETC1Texture arg5);
		static void loadTexture(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, java::io::InputStream arg5);
		static void writeTexture(android::opengl::ETC1Util_ETC1Texture arg0, java::io::OutputStream arg1);
	};
} // namespace android::opengl

