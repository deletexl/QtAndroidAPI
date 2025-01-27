#include "./PorterDuff_Mode.hpp"
#include "../../JObject.hpp"
#include "./PorterDuffColorFilter.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	PorterDuffColorFilter::PorterDuffColorFilter(QJniObject obj) : android::graphics::ColorFilter(obj) {}
	
	// Constructors
	PorterDuffColorFilter::PorterDuffColorFilter(jint arg0, android::graphics::PorterDuff_Mode arg1)
		: android::graphics::ColorFilter(
			"android.graphics.PorterDuffColorFilter",
			"(ILandroid/graphics/PorterDuff$Mode;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jboolean PorterDuffColorFilter::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint PorterDuffColorFilter::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::graphics

