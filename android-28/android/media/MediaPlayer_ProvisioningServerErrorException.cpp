#include "./MediaPlayer_ProvisioningServerErrorException.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaPlayer_ProvisioningServerErrorException::MediaPlayer_ProvisioningServerErrorException(QAndroidJniObject obj) : android::media::MediaDrmException(obj) {}
	
	// Constructors
	MediaPlayer_ProvisioningServerErrorException::MediaPlayer_ProvisioningServerErrorException(jstring arg0)
		: android::media::MediaDrmException(
			"android.media.MediaPlayer$ProvisioningServerErrorException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::media
