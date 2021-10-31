#include "./DrmUtils_ExtendedMetadataParser.hpp"
#include "./DrmUtils.hpp"

namespace android::drm
{
	// Fields
	
	// QAndroidJniObject forward
	DrmUtils::DrmUtils(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DrmUtils::DrmUtils()
		: __JniBaseClass(
			"android.drm.DrmUtils",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject DrmUtils::getExtendedMetadataParser(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.drm.DrmUtils",
			"getExtendedMetadataParser",
			"([B)Landroid/drm/DrmUtils$ExtendedMetadataParser;",
			arg0
		);
	}
} // namespace android::drm

