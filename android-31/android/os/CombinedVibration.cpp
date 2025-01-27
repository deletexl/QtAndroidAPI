#include "./CombinedVibration_ParallelCombination.hpp"
#include "./VibrationEffect.hpp"
#include "./CombinedVibration.hpp"

namespace android::os
{
	// Fields
	JObject CombinedVibration::CREATOR()
	{
		return getStaticObjectField(
			"android.os.CombinedVibration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	CombinedVibration::CombinedVibration(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::os::CombinedVibration CombinedVibration::createParallel(android::os::VibrationEffect arg0)
	{
		return callStaticObjectMethod(
			"android.os.CombinedVibration",
			"createParallel",
			"(Landroid/os/VibrationEffect;)Landroid/os/CombinedVibration;",
			arg0.object()
		);
	}
	android::os::CombinedVibration_ParallelCombination CombinedVibration::startParallel()
	{
		return callStaticObjectMethod(
			"android.os.CombinedVibration",
			"startParallel",
			"()Landroid/os/CombinedVibration$ParallelCombination;"
		);
	}
	jint CombinedVibration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
} // namespace android::os

