#include "./ConsumerIrManager.hpp"
#include "./ConsumerIrManager_CarrierFrequencyRange.hpp"

namespace android::hardware
{
	// Fields
	
	// QJniObject forward
	ConsumerIrManager_CarrierFrequencyRange::ConsumerIrManager_CarrierFrequencyRange(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ConsumerIrManager_CarrierFrequencyRange::ConsumerIrManager_CarrierFrequencyRange(android::hardware::ConsumerIrManager arg0, jint arg1, jint arg2)
		: JObject(
			"android.hardware.ConsumerIrManager$CarrierFrequencyRange",
			"(Landroid/hardware/ConsumerIrManager;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	jint ConsumerIrManager_CarrierFrequencyRange::getMaxFrequency() const
	{
		return callMethod<jint>(
			"getMaxFrequency",
			"()I"
		);
	}
	jint ConsumerIrManager_CarrierFrequencyRange::getMinFrequency() const
	{
		return callMethod<jint>(
			"getMinFrequency",
			"()I"
		);
	}
} // namespace android::hardware

