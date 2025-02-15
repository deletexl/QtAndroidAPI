#include "./AccessControlProfile.hpp"
#include "./AccessControlProfileId.hpp"
#include "../../../java/security/cert/X509Certificate.hpp"
#include "./AccessControlProfile_Builder.hpp"

namespace android::security::identity
{
	// Fields
	
	// QJniObject forward
	AccessControlProfile_Builder::AccessControlProfile_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AccessControlProfile_Builder::AccessControlProfile_Builder(android::security::identity::AccessControlProfileId arg0)
		: JObject(
			"android.security.identity.AccessControlProfile$Builder",
			"(Landroid/security/identity/AccessControlProfileId;)V",
			arg0.object()
		) {}
	
	// Methods
	android::security::identity::AccessControlProfile AccessControlProfile_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/security/identity/AccessControlProfile;"
		);
	}
	android::security::identity::AccessControlProfile_Builder AccessControlProfile_Builder::setReaderCertificate(java::security::cert::X509Certificate arg0) const
	{
		return callObjectMethod(
			"setReaderCertificate",
			"(Ljava/security/cert/X509Certificate;)Landroid/security/identity/AccessControlProfile$Builder;",
			arg0.object()
		);
	}
	android::security::identity::AccessControlProfile_Builder AccessControlProfile_Builder::setUserAuthenticationRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setUserAuthenticationRequired",
			"(Z)Landroid/security/identity/AccessControlProfile$Builder;",
			arg0
		);
	}
	android::security::identity::AccessControlProfile_Builder AccessControlProfile_Builder::setUserAuthenticationTimeout(jlong arg0) const
	{
		return callObjectMethod(
			"setUserAuthenticationTimeout",
			"(J)Landroid/security/identity/AccessControlProfile$Builder;",
			arg0
		);
	}
} // namespace android::security::identity

