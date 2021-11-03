#pragma once

#include "../../os/ParcelFileDescriptor_AutoCloseInputStream.hpp"

class JByteArray;
namespace android::content::res
{
	class AssetFileDescriptor;
}

namespace android::content::res
{
	class AssetFileDescriptor_AutoCloseInputStream : public android::os::ParcelFileDescriptor_AutoCloseInputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AssetFileDescriptor_AutoCloseInputStream(const char *className, const char *sig, Ts...agv) : android::os::ParcelFileDescriptor_AutoCloseInputStream(className, sig, std::forward<Ts>(agv)...) {}
		AssetFileDescriptor_AutoCloseInputStream(QAndroidJniObject obj);
		
		// Constructors
		AssetFileDescriptor_AutoCloseInputStream(android::content::res::AssetFileDescriptor arg0);
		
		// Methods
		jint available();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(JByteArray arg0);
		jint read(JByteArray arg0, jint arg1, jint arg2);
		void reset();
		jlong skip(jlong arg0);
	};
} // namespace android::content::res

