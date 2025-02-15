#include "../../JObjectArray.hpp"
#include "../graphics/Rect.hpp"
#include "./PrecomputedText_Params.hpp"
#include "../../JString.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PrecomputedText.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	PrecomputedText::PrecomputedText(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::text::PrecomputedText PrecomputedText::create(JString arg0, android::text::PrecomputedText_Params arg1)
	{
		return callStaticObjectMethod(
			"android.text.PrecomputedText",
			"create",
			"(Ljava/lang/CharSequence;Landroid/text/PrecomputedText$Params;)Landroid/text/PrecomputedText;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jchar PrecomputedText::charAt(jint arg0) const
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	void PrecomputedText::getBounds(jint arg0, jint arg1, android::graphics::Rect arg2) const
	{
		callMethod<void>(
			"getBounds",
			"(IILandroid/graphics/Rect;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jint PrecomputedText::getParagraphCount() const
	{
		return callMethod<jint>(
			"getParagraphCount",
			"()I"
		);
	}
	jint PrecomputedText::getParagraphEnd(jint arg0) const
	{
		return callMethod<jint>(
			"getParagraphEnd",
			"(I)I",
			arg0
		);
	}
	jint PrecomputedText::getParagraphStart(jint arg0) const
	{
		return callMethod<jint>(
			"getParagraphStart",
			"(I)I",
			arg0
		);
	}
	android::text::PrecomputedText_Params PrecomputedText::getParams() const
	{
		return callObjectMethod(
			"getParams",
			"()Landroid/text/PrecomputedText$Params;"
		);
	}
	jint PrecomputedText::getSpanEnd(JObject arg0) const
	{
		return callMethod<jint>(
			"getSpanEnd",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint PrecomputedText::getSpanFlags(JObject arg0) const
	{
		return callMethod<jint>(
			"getSpanFlags",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint PrecomputedText::getSpanStart(JObject arg0) const
	{
		return callMethod<jint>(
			"getSpanStart",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	JObjectArray PrecomputedText::getSpans(jint arg0, jint arg1, JClass arg2) const
	{
		return callObjectMethod(
			"getSpans",
			"(IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.object<jclass>()
		);
	}
	jfloat PrecomputedText::getWidth(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"getWidth",
			"(II)F",
			arg0,
			arg1
		);
	}
	jint PrecomputedText::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jint PrecomputedText::nextSpanTransition(jint arg0, jint arg1, JClass arg2) const
	{
		return callMethod<jint>(
			"nextSpanTransition",
			"(IILjava/lang/Class;)I",
			arg0,
			arg1,
			arg2.object<jclass>()
		);
	}
	void PrecomputedText::removeSpan(JObject arg0) const
	{
		callMethod<void>(
			"removeSpan",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void PrecomputedText::setSpan(JObject arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"setSpan",
			"(Ljava/lang/Object;III)V",
			arg0.object<jobject>(),
			arg1,
			arg2,
			arg3
		);
	}
	JString PrecomputedText::subSequence(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	JString PrecomputedText::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text

