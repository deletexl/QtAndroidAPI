#include "../../content/res/Resources.hpp"
#include "./PaintDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QAndroidJniObject forward
	PaintDrawable::PaintDrawable(QAndroidJniObject obj) : android::graphics::drawable::ShapeDrawable(obj) {}
	
	// Constructors
	PaintDrawable::PaintDrawable()
		: android::graphics::drawable::ShapeDrawable(
			"android.graphics.drawable.PaintDrawable",
			"()V"
		) {}
	PaintDrawable::PaintDrawable(jint arg0)
		: android::graphics::drawable::ShapeDrawable(
			"android.graphics.drawable.PaintDrawable",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void PaintDrawable::setCornerRadii(jfloatArray arg0)
	{
		callMethod<void>(
			"setCornerRadii",
			"([F)V",
			arg0
		);
	}
	void PaintDrawable::setCornerRadius(jfloat arg0)
	{
		callMethod<void>(
			"setCornerRadius",
			"(F)V",
			arg0
		);
	}
} // namespace android::graphics::drawable
