#include "../../JFloatArray.hpp"
#include "./Matrix_ScaleToFit.hpp"
#include "./RectF.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Matrix.hpp"

namespace android::graphics
{
	// Fields
	jint Matrix::MPERSP_0()
	{
		return getStaticField<jint>(
			"android.graphics.Matrix",
			"MPERSP_0"
		);
	}
	jint Matrix::MPERSP_1()
	{
		return getStaticField<jint>(
			"android.graphics.Matrix",
			"MPERSP_1"
		);
	}
	jint Matrix::MPERSP_2()
	{
		return getStaticField<jint>(
			"android.graphics.Matrix",
			"MPERSP_2"
		);
	}
	jint Matrix::MSCALE_X()
	{
		return getStaticField<jint>(
			"android.graphics.Matrix",
			"MSCALE_X"
		);
	}
	jint Matrix::MSCALE_Y()
	{
		return getStaticField<jint>(
			"android.graphics.Matrix",
			"MSCALE_Y"
		);
	}
	jint Matrix::MSKEW_X()
	{
		return getStaticField<jint>(
			"android.graphics.Matrix",
			"MSKEW_X"
		);
	}
	jint Matrix::MSKEW_Y()
	{
		return getStaticField<jint>(
			"android.graphics.Matrix",
			"MSKEW_Y"
		);
	}
	jint Matrix::MTRANS_X()
	{
		return getStaticField<jint>(
			"android.graphics.Matrix",
			"MTRANS_X"
		);
	}
	jint Matrix::MTRANS_Y()
	{
		return getStaticField<jint>(
			"android.graphics.Matrix",
			"MTRANS_Y"
		);
	}
	
	// QJniObject forward
	Matrix::Matrix(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Matrix::Matrix()
		: JObject(
			"android.graphics.Matrix",
			"()V"
		) {}
	Matrix::Matrix(android::graphics::Matrix &arg0)
		: JObject(
			"android.graphics.Matrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean Matrix::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void Matrix::getValues(JFloatArray arg0) const
	{
		callMethod<void>(
			"getValues",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	jint Matrix::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Matrix::invert(android::graphics::Matrix arg0) const
	{
		return callMethod<jboolean>(
			"invert",
			"(Landroid/graphics/Matrix;)Z",
			arg0.object()
		);
	}
	jboolean Matrix::isAffine() const
	{
		return callMethod<jboolean>(
			"isAffine",
			"()Z"
		);
	}
	jboolean Matrix::isIdentity() const
	{
		return callMethod<jboolean>(
			"isIdentity",
			"()Z"
		);
	}
	void Matrix::mapPoints(JFloatArray arg0) const
	{
		callMethod<void>(
			"mapPoints",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	void Matrix::mapPoints(JFloatArray arg0, JFloatArray arg1) const
	{
		callMethod<void>(
			"mapPoints",
			"([F[F)V",
			arg0.object<jfloatArray>(),
			arg1.object<jfloatArray>()
		);
	}
	void Matrix::mapPoints(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"mapPoints",
			"([FI[FII)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2.object<jfloatArray>(),
			arg3,
			arg4
		);
	}
	jfloat Matrix::mapRadius(jfloat arg0) const
	{
		return callMethod<jfloat>(
			"mapRadius",
			"(F)F",
			arg0
		);
	}
	jboolean Matrix::mapRect(android::graphics::RectF arg0) const
	{
		return callMethod<jboolean>(
			"mapRect",
			"(Landroid/graphics/RectF;)Z",
			arg0.object()
		);
	}
	jboolean Matrix::mapRect(android::graphics::RectF arg0, android::graphics::RectF arg1) const
	{
		return callMethod<jboolean>(
			"mapRect",
			"(Landroid/graphics/RectF;Landroid/graphics/RectF;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void Matrix::mapVectors(JFloatArray arg0) const
	{
		callMethod<void>(
			"mapVectors",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	void Matrix::mapVectors(JFloatArray arg0, JFloatArray arg1) const
	{
		callMethod<void>(
			"mapVectors",
			"([F[F)V",
			arg0.object<jfloatArray>(),
			arg1.object<jfloatArray>()
		);
	}
	void Matrix::mapVectors(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"mapVectors",
			"([FI[FII)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2.object<jfloatArray>(),
			arg3,
			arg4
		);
	}
	jboolean Matrix::postConcat(android::graphics::Matrix arg0) const
	{
		return callMethod<jboolean>(
			"postConcat",
			"(Landroid/graphics/Matrix;)Z",
			arg0.object()
		);
	}
	jboolean Matrix::postRotate(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"postRotate",
			"(F)Z",
			arg0
		);
	}
	jboolean Matrix::postRotate(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		return callMethod<jboolean>(
			"postRotate",
			"(FFF)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean Matrix::postScale(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"postScale",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean Matrix::postScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		return callMethod<jboolean>(
			"postScale",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Matrix::postSkew(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"postSkew",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean Matrix::postSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		return callMethod<jboolean>(
			"postSkew",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Matrix::postTranslate(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"postTranslate",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean Matrix::preConcat(android::graphics::Matrix arg0) const
	{
		return callMethod<jboolean>(
			"preConcat",
			"(Landroid/graphics/Matrix;)Z",
			arg0.object()
		);
	}
	jboolean Matrix::preRotate(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"preRotate",
			"(F)Z",
			arg0
		);
	}
	jboolean Matrix::preRotate(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		return callMethod<jboolean>(
			"preRotate",
			"(FFF)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean Matrix::preScale(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"preScale",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean Matrix::preScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		return callMethod<jboolean>(
			"preScale",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Matrix::preSkew(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"preSkew",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean Matrix::preSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		return callMethod<jboolean>(
			"preSkew",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Matrix::preTranslate(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"preTranslate",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean Matrix::rectStaysRect() const
	{
		return callMethod<jboolean>(
			"rectStaysRect",
			"()Z"
		);
	}
	void Matrix::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Matrix::set(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	jboolean Matrix::setConcat(android::graphics::Matrix arg0, android::graphics::Matrix arg1) const
	{
		return callMethod<jboolean>(
			"setConcat",
			"(Landroid/graphics/Matrix;Landroid/graphics/Matrix;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Matrix::setPolyToPoly(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, jint arg4) const
	{
		return callMethod<jboolean>(
			"setPolyToPoly",
			"([FI[FII)Z",
			arg0.object<jfloatArray>(),
			arg1,
			arg2.object<jfloatArray>(),
			arg3,
			arg4
		);
	}
	jboolean Matrix::setRectToRect(android::graphics::RectF arg0, android::graphics::RectF arg1, android::graphics::Matrix_ScaleToFit arg2) const
	{
		return callMethod<jboolean>(
			"setRectToRect",
			"(Landroid/graphics/RectF;Landroid/graphics/RectF;Landroid/graphics/Matrix$ScaleToFit;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void Matrix::setRotate(jfloat arg0) const
	{
		callMethod<void>(
			"setRotate",
			"(F)V",
			arg0
		);
	}
	void Matrix::setRotate(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"setRotate",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix::setScale(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setScale",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Matrix::setScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		callMethod<void>(
			"setScale",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Matrix::setSinCos(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setSinCos",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Matrix::setSinCos(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		callMethod<void>(
			"setSinCos",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Matrix::setSkew(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setSkew",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Matrix::setSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		callMethod<void>(
			"setSkew",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Matrix::setTranslate(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setTranslate",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Matrix::setValues(JFloatArray arg0) const
	{
		callMethod<void>(
			"setValues",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	JString Matrix::toShortString() const
	{
		return callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		);
	}
	JString Matrix::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::graphics

