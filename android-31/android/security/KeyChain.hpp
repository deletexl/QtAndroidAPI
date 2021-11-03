#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class Activity;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::net
{
	class Uri;
}
namespace android::security
{
	class AppUriAuthenticationPolicy;
}

namespace android::security
{
	class KeyChain : public JObject
	{
	public:
		// Fields
		static jstring ACTION_KEYCHAIN_CHANGED();
		static jstring ACTION_KEY_ACCESS_CHANGED();
		static jstring ACTION_STORAGE_CHANGED();
		static jstring ACTION_TRUST_STORE_CHANGED();
		static jstring EXTRA_CERTIFICATE();
		static jstring EXTRA_KEY_ACCESSIBLE();
		static jstring EXTRA_KEY_ALIAS();
		static jstring EXTRA_NAME();
		static jstring EXTRA_PKCS12();
		static jstring KEY_ALIAS_SELECTION_DENIED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyChain(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyChain(QAndroidJniObject obj);
		
		// Constructors
		KeyChain();
		
		// Methods
		static void choosePrivateKeyAlias(android::app::Activity arg0, JObject arg1, jarray arg2, jarray arg3, android::net::Uri arg4, jstring arg5);
		static void choosePrivateKeyAlias(android::app::Activity arg0, JObject arg1, jarray arg2, jarray arg3, jstring arg4, jint arg5, jstring arg6);
		static android::content::Intent createInstallIntent();
		static android::content::Intent createManageCredentialsIntent(android::security::AppUriAuthenticationPolicy arg0);
		static jarray getCertificateChain(android::content::Context arg0, jstring arg1);
		static android::security::AppUriAuthenticationPolicy getCredentialManagementAppPolicy(android::content::Context arg0);
		static JObject getPrivateKey(android::content::Context arg0, jstring arg1);
		static jboolean isBoundKeyAlgorithm(jstring arg0);
		static jboolean isCredentialManagementApp(android::content::Context arg0);
		static jboolean isKeyAlgorithmSupported(jstring arg0);
		static jboolean removeCredentialManagementApp(android::content::Context arg0);
	};
} // namespace android::security

