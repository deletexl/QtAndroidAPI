#include "./AssociationRequest.hpp"
#include "./AssociationRequest_Builder.hpp"

namespace android::companion
{
	// Fields
	
	// QJniObject forward
	AssociationRequest_Builder::AssociationRequest_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AssociationRequest_Builder::AssociationRequest_Builder()
		: JObject(
			"android.companion.AssociationRequest$Builder",
			"()V"
		) {}
	
	// Methods
	android::companion::AssociationRequest_Builder AssociationRequest_Builder::addDeviceFilter(JObject arg0) const
	{
		return callObjectMethod(
			"addDeviceFilter",
			"(Landroid/companion/DeviceFilter;)Landroid/companion/AssociationRequest$Builder;",
			arg0.object()
		);
	}
	android::companion::AssociationRequest AssociationRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/companion/AssociationRequest;"
		);
	}
	android::companion::AssociationRequest_Builder AssociationRequest_Builder::setSingleDevice(jboolean arg0) const
	{
		return callObjectMethod(
			"setSingleDevice",
			"(Z)Landroid/companion/AssociationRequest$Builder;",
			arg0
		);
	}
} // namespace android::companion

