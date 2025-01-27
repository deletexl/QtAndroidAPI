#include "./MediaCas_Session.hpp"
#include "./MediaExtractor_CasInfo.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaExtractor_CasInfo::MediaExtractor_CasInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::media::MediaCas_Session MediaExtractor_CasInfo::getSession() const
	{
		return callObjectMethod(
			"getSession",
			"()Landroid/media/MediaCas$Session;"
		);
	}
	jint MediaExtractor_CasInfo::getSystemId() const
	{
		return callMethod<jint>(
			"getSystemId",
			"()I"
		);
	}
} // namespace android::media

