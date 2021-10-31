#include "./MediaStore_Audio.hpp"

namespace android::provider
{
	// Fields
	
	// QAndroidJniObject forward
	MediaStore_Audio::MediaStore_Audio(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaStore_Audio::MediaStore_Audio()
		: __JniBaseClass(
			"android.provider.MediaStore$Audio",
			"()V"
		) {}
	
	// Methods
	jstring MediaStore_Audio::keyFor(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio",
			"keyFor",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace android::provider

