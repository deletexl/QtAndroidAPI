#include "./VolumeShaper_Configuration.hpp"
#include "./VolumeShaper_Operation.hpp"
#include "./VolumeShaper.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	VolumeShaper::VolumeShaper(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void VolumeShaper::apply(android::media::VolumeShaper_Operation arg0)
	{
		callMethod<void>(
			"apply",
			"(Landroid/media/VolumeShaper$Operation;)V",
			arg0.object()
		);
	}
	void VolumeShaper::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jfloat VolumeShaper::getVolume()
	{
		return callMethod<jfloat>(
			"getVolume",
			"()F"
		);
	}
	void VolumeShaper::replace(android::media::VolumeShaper_Configuration arg0, android::media::VolumeShaper_Operation arg1, jboolean arg2)
	{
		callMethod<void>(
			"replace",
			"(Landroid/media/VolumeShaper$Configuration;Landroid/media/VolumeShaper$Operation;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
} // namespace android::media

