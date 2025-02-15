#include "../content/Context.hpp"
#include "../../JString.hpp"
#include "./RatingBar.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	RatingBar::RatingBar(QJniObject obj) : android::widget::AbsSeekBar(obj) {}
	
	// Constructors
	RatingBar::RatingBar(android::content::Context arg0)
		: android::widget::AbsSeekBar(
			"android.widget.RatingBar",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	RatingBar::RatingBar(android::content::Context arg0, JObject arg1)
		: android::widget::AbsSeekBar(
			"android.widget.RatingBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	RatingBar::RatingBar(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AbsSeekBar(
			"android.widget.RatingBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	RatingBar::RatingBar(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AbsSeekBar(
			"android.widget.RatingBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	JString RatingBar::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint RatingBar::getNumStars() const
	{
		return callMethod<jint>(
			"getNumStars",
			"()I"
		);
	}
	JObject RatingBar::getOnRatingBarChangeListener() const
	{
		return callObjectMethod(
			"getOnRatingBarChangeListener",
			"()Landroid/widget/RatingBar$OnRatingBarChangeListener;"
		);
	}
	jfloat RatingBar::getRating() const
	{
		return callMethod<jfloat>(
			"getRating",
			"()F"
		);
	}
	jfloat RatingBar::getStepSize() const
	{
		return callMethod<jfloat>(
			"getStepSize",
			"()F"
		);
	}
	jboolean RatingBar::isIndicator() const
	{
		return callMethod<jboolean>(
			"isIndicator",
			"()Z"
		);
	}
	void RatingBar::setIsIndicator(jboolean arg0) const
	{
		callMethod<void>(
			"setIsIndicator",
			"(Z)V",
			arg0
		);
	}
	void RatingBar::setMax(jint arg0) const
	{
		callMethod<void>(
			"setMax",
			"(I)V",
			arg0
		);
	}
	void RatingBar::setNumStars(jint arg0) const
	{
		callMethod<void>(
			"setNumStars",
			"(I)V",
			arg0
		);
	}
	void RatingBar::setOnRatingBarChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnRatingBarChangeListener",
			"(Landroid/widget/RatingBar$OnRatingBarChangeListener;)V",
			arg0.object()
		);
	}
	void RatingBar::setRating(jfloat arg0) const
	{
		callMethod<void>(
			"setRating",
			"(F)V",
			arg0
		);
	}
	void RatingBar::setStepSize(jfloat arg0) const
	{
		callMethod<void>(
			"setStepSize",
			"(F)V",
			arg0
		);
	}
} // namespace android::widget

