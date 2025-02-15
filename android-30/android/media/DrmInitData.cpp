#include "./DrmInitData_SchemeInitData.hpp"
#include "../../java/util/UUID.hpp"
#include "./DrmInitData.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	DrmInitData::DrmInitData(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::media::DrmInitData_SchemeInitData DrmInitData::get(java::util::UUID arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/util/UUID;)Landroid/media/DrmInitData$SchemeInitData;",
			arg0.object()
		);
	}
	android::media::DrmInitData_SchemeInitData DrmInitData::getSchemeInitDataAt(jint arg0) const
	{
		return callObjectMethod(
			"getSchemeInitDataAt",
			"(I)Landroid/media/DrmInitData$SchemeInitData;",
			arg0
		);
	}
	jint DrmInitData::getSchemeInitDataCount() const
	{
		return callMethod<jint>(
			"getSchemeInitDataCount",
			"()I"
		);
	}
} // namespace android::media

