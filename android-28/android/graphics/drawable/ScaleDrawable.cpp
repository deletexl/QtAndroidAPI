#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Canvas.hpp"
#include "../Rect.hpp"
#include "./Drawable.hpp"
#include "./ScaleDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QJniObject forward
	ScaleDrawable::ScaleDrawable(QJniObject obj) : android::graphics::drawable::DrawableWrapper(obj) {}
	
	// Constructors
	ScaleDrawable::ScaleDrawable(android::graphics::drawable::Drawable arg0, jint arg1, jfloat arg2, jfloat arg3)
		: android::graphics::drawable::DrawableWrapper(
			"android.graphics.drawable.ScaleDrawable",
			"(Landroid/graphics/drawable/Drawable;IFF)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	void ScaleDrawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	void ScaleDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jint ScaleDrawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void ScaleDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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

