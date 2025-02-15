#include "./PorterDuff_Mode.hpp"
#include "./PorterDuffXfermode.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	PorterDuffXfermode::PorterDuffXfermode(QJniObject obj) : android::graphics::Xfermode(obj) {}
	
	// Constructors
	PorterDuffXfermode::PorterDuffXfermode(android::graphics::PorterDuff_Mode arg0)
		: android::graphics::Xfermode(
			"android.graphics.PorterDuffXfermode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		) {}
	
	// Methods
} // namespace android::graphics

