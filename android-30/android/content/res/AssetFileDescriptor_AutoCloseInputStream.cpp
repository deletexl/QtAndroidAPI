#include "./AssetFileDescriptor.hpp"
#include "./AssetFileDescriptor_AutoCloseInputStream.hpp"

namespace android::content::res
{
	// Fields
	
	// QAndroidJniObject forward
	AssetFileDescriptor_AutoCloseInputStream::AssetFileDescriptor_AutoCloseInputStream(QAndroidJniObject obj) : android::os::ParcelFileDescriptor_AutoCloseInputStream(obj) {}
	
	// Constructors
	AssetFileDescriptor_AutoCloseInputStream::AssetFileDescriptor_AutoCloseInputStream(android::content::res::AssetFileDescriptor arg0)
		: android::os::ParcelFileDescriptor_AutoCloseInputStream(
			"android.content.res.AssetFileDescriptor$AutoCloseInputStream",
			"(Landroid/content/res/AssetFileDescriptor;)V",
			arg0.object()
		) {}
	
	// Methods
	jint AssetFileDescriptor_AutoCloseInputStream::available()
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void AssetFileDescriptor_AutoCloseInputStream::mark(jint arg0)
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean AssetFileDescriptor_AutoCloseInputStream::markSupported()
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint AssetFileDescriptor_AutoCloseInputStream::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint AssetFileDescriptor_AutoCloseInputStream::read(jbyteArray arg0)
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0
		);
	}
	jint AssetFileDescriptor_AutoCloseInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void AssetFileDescriptor_AutoCloseInputStream::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong AssetFileDescriptor_AutoCloseInputStream::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace android::content::res
