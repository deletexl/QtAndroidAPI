#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::net::ipsec::ike
{
	class IkeSaProposal;
}

namespace android::net::ipsec::ike
{
	class IkeSaProposal_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeSaProposal_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IkeSaProposal_Builder(QAndroidJniObject obj);
		
		// Constructors
		IkeSaProposal_Builder();
		
		// Methods
		android::net::ipsec::ike::IkeSaProposal_Builder addDhGroup(jint arg0);
		android::net::ipsec::ike::IkeSaProposal_Builder addEncryptionAlgorithm(jint arg0, jint arg1);
		android::net::ipsec::ike::IkeSaProposal_Builder addIntegrityAlgorithm(jint arg0);
		android::net::ipsec::ike::IkeSaProposal_Builder addPseudorandomFunction(jint arg0);
		android::net::ipsec::ike::IkeSaProposal build();
	};
} // namespace android::net::ipsec::ike
