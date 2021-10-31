#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security
{
	class AlgorithmParameters;
}

namespace javax::crypto
{
	class ExemptionMechanismSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ExemptionMechanismSpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ExemptionMechanismSpi(QAndroidJniObject obj);
		
		// Constructors
		ExemptionMechanismSpi();
		
		// Methods
	};
} // namespace javax::crypto
