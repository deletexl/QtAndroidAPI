#include "../../JString.hpp"
#include "./MediaCas_PluginDescriptor.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaCas_PluginDescriptor::MediaCas_PluginDescriptor(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString MediaCas_PluginDescriptor::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint MediaCas_PluginDescriptor::getSystemId() const
	{
		return callMethod<jint>(
			"getSystemId",
			"()I"
		);
	}
	JString MediaCas_PluginDescriptor::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

