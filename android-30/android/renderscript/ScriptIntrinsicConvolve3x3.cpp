#include "../../JFloatArray.hpp"
#include "./Allocation.hpp"
#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Script_FieldID.hpp"
#include "./Script_KernelID.hpp"
#include "./Script_LaunchOptions.hpp"
#include "./ScriptIntrinsicConvolve3x3.hpp"

namespace android::renderscript
{
	// Fields
	
	// QJniObject forward
	ScriptIntrinsicConvolve3x3::ScriptIntrinsicConvolve3x3(QJniObject obj) : android::renderscript::ScriptIntrinsic(obj) {}
	
	// Constructors
	
	// Methods
	android::renderscript::ScriptIntrinsicConvolve3x3 ScriptIntrinsicConvolve3x3::create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
	{
		return callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicConvolve3x3",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicConvolve3x3;",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicConvolve3x3::forEach(android::renderscript::Allocation arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
	void ScriptIntrinsicConvolve3x3::forEach(android::renderscript::Allocation arg0, android::renderscript::Script_LaunchOptions arg1) const
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::renderscript::Script_FieldID ScriptIntrinsicConvolve3x3::getFieldID_Input() const
	{
		return callObjectMethod(
			"getFieldID_Input",
			"()Landroid/renderscript/Script$FieldID;"
		);
	}
	android::renderscript::Script_KernelID ScriptIntrinsicConvolve3x3::getKernelID() const
	{
		return callObjectMethod(
			"getKernelID",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	void ScriptIntrinsicConvolve3x3::setCoefficients(JFloatArray arg0) const
	{
		callMethod<void>(
			"setCoefficients",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	void ScriptIntrinsicConvolve3x3::setInput(android::renderscript::Allocation arg0) const
	{
		callMethod<void>(
			"setInput",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
} // namespace android::renderscript

