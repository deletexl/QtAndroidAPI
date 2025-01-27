#include "./Rect.hpp"
#include "./Region.hpp"
#include "./RegionIterator.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	RegionIterator::RegionIterator(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	RegionIterator::RegionIterator(android::graphics::Region arg0)
		: JObject(
			"android.graphics.RegionIterator",
			"(Landroid/graphics/Region;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean RegionIterator::next(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"next",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
} // namespace android::graphics

