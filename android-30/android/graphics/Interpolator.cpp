#include "../../JFloatArray.hpp"
#include "./Interpolator_Result.hpp"
#include "./Interpolator.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	Interpolator::Interpolator(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Interpolator::Interpolator(jint arg0)
		: JObject(
			"android.graphics.Interpolator",
			"(I)V",
			arg0
		) {}
	Interpolator::Interpolator(jint arg0, jint arg1)
		: JObject(
			"android.graphics.Interpolator",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint Interpolator::getKeyFrameCount() const
	{
		return callMethod<jint>(
			"getKeyFrameCount",
			"()I"
		);
	}
	jint Interpolator::getValueCount() const
	{
		return callMethod<jint>(
			"getValueCount",
			"()I"
		);
	}
	void Interpolator::reset(jint arg0) const
	{
		callMethod<void>(
			"reset",
			"(I)V",
			arg0
		);
	}
	void Interpolator::reset(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"reset",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Interpolator::setKeyFrame(jint arg0, jint arg1, JFloatArray arg2) const
	{
		callMethod<void>(
			"setKeyFrame",
			"(II[F)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>()
		);
	}
	void Interpolator::setKeyFrame(jint arg0, jint arg1, JFloatArray arg2, JFloatArray arg3) const
	{
		callMethod<void>(
			"setKeyFrame",
			"(II[F[F)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3.object<jfloatArray>()
		);
	}
	void Interpolator::setRepeatMirror(jfloat arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setRepeatMirror",
			"(FZ)V",
			arg0,
			arg1
		);
	}
	android::graphics::Interpolator_Result Interpolator::timeToValues(JFloatArray arg0) const
	{
		return callObjectMethod(
			"timeToValues",
			"([F)Landroid/graphics/Interpolator$Result;",
			arg0.object<jfloatArray>()
		);
	}
	android::graphics::Interpolator_Result Interpolator::timeToValues(jint arg0, JFloatArray arg1) const
	{
		return callObjectMethod(
			"timeToValues",
			"(I[F)Landroid/graphics/Interpolator$Result;",
			arg0,
			arg1.object<jfloatArray>()
		);
	}
} // namespace android::graphics

