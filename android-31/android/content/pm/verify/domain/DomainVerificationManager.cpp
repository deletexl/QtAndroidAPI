#include "./DomainVerificationUserState.hpp"
#include "./DomainVerificationManager.hpp"

namespace android::content::pm::verify::domain
{
	// Fields
	
	// QAndroidJniObject forward
	DomainVerificationManager::DomainVerificationManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::content::pm::verify::domain::DomainVerificationUserState DomainVerificationManager::getDomainVerificationUserState(jstring arg0)
	{
		return callObjectMethod(
			"getDomainVerificationUserState",
			"(Ljava/lang/String;)Landroid/content/pm/verify/domain/DomainVerificationUserState;",
			arg0
		);
	}
} // namespace android::content::pm::verify::domain
