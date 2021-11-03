#include "../../java/security/AlgorithmParameters.hpp"
#include "./ExemptionMechanismSpi.hpp"

namespace javax::crypto
{
	// Fields
	
	// QAndroidJniObject forward
	ExemptionMechanismSpi::ExemptionMechanismSpi(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ExemptionMechanismSpi::ExemptionMechanismSpi()
		: JObject(
			"javax.crypto.ExemptionMechanismSpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

