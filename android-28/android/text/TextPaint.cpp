#include "../../JIntArray.hpp"
#include "../graphics/Paint.hpp"
#include "./TextPaint.hpp"

namespace android::text
{
	// Fields
	jint TextPaint::baselineShift()
	{
		return getField<jint>(
			"baselineShift"
		);
	}
	jint TextPaint::bgColor()
	{
		return getField<jint>(
			"bgColor"
		);
	}
	jfloat TextPaint::density()
	{
		return getField<jfloat>(
			"density"
		);
	}
	JIntArray TextPaint::drawableState()
	{
		return getObjectField(
			"drawableState",
			"[I"
		);
	}
	jint TextPaint::linkColor()
	{
		return getField<jint>(
			"linkColor"
		);
	}
	
	// QJniObject forward
	TextPaint::TextPaint(QJniObject obj) : android::graphics::Paint(obj) {}
	
	// Constructors
	TextPaint::TextPaint()
		: android::graphics::Paint(
			"android.text.TextPaint",
			"()V"
		) {}
	TextPaint::TextPaint(android::graphics::Paint arg0)
		: android::graphics::Paint(
			"android.text.TextPaint",
			"(Landroid/graphics/Paint;)V",
			arg0.object()
		) {}
	TextPaint::TextPaint(jint arg0)
		: android::graphics::Paint(
			"android.text.TextPaint",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void TextPaint::set(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
} // namespace android::text

