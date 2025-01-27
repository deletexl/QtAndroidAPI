#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Canvas.hpp"
#include "./Drawable.hpp"
#include "./ClipDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	jint ClipDrawable::HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.ClipDrawable",
			"HORIZONTAL"
		);
	}
	jint ClipDrawable::VERTICAL()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.ClipDrawable",
			"VERTICAL"
		);
	}
	
	// QJniObject forward
	ClipDrawable::ClipDrawable(QJniObject obj) : android::graphics::drawable::DrawableWrapper(obj) {}
	
	// Constructors
	ClipDrawable::ClipDrawable(android::graphics::drawable::Drawable arg0, jint arg1, jint arg2)
		: android::graphics::drawable::DrawableWrapper(
			"android.graphics.drawable.ClipDrawable",
			"(Landroid/graphics/drawable/Drawable;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	void ClipDrawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	void ClipDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jint ClipDrawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void ClipDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
	{
		callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
} // namespace android::graphics::drawable

