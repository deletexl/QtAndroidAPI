#pragma once

#include "../../JObject.hpp"

namespace android::accounts
{
	class Account;
}
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
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
namespace java::util
{
	class ArrayList;
}

namespace android::accounts
{
	class AccountManager : public JObject
	{
	public:
		// Fields
		static jstring ACTION_ACCOUNT_REMOVED();
		static jstring ACTION_AUTHENTICATOR_INTENT();
		static jstring AUTHENTICATOR_ATTRIBUTES_NAME();
		static jstring AUTHENTICATOR_META_DATA_NAME();
		static jint ERROR_CODE_BAD_ARGUMENTS();
		static jint ERROR_CODE_BAD_AUTHENTICATION();
		static jint ERROR_CODE_BAD_REQUEST();
		static jint ERROR_CODE_CANCELED();
		static jint ERROR_CODE_INVALID_RESPONSE();
		static jint ERROR_CODE_NETWORK_ERROR();
		static jint ERROR_CODE_REMOTE_EXCEPTION();
		static jint ERROR_CODE_UNSUPPORTED_OPERATION();
		static jstring KEY_ACCOUNTS();
		static jstring KEY_ACCOUNT_AUTHENTICATOR_RESPONSE();
		static jstring KEY_ACCOUNT_MANAGER_RESPONSE();
		static jstring KEY_ACCOUNT_NAME();
		static jstring KEY_ACCOUNT_SESSION_BUNDLE();
		static jstring KEY_ACCOUNT_STATUS_TOKEN();
		static jstring KEY_ACCOUNT_TYPE();
		static jstring KEY_ANDROID_PACKAGE_NAME();
		static jstring KEY_AUTHENTICATOR_TYPES();
		static jstring KEY_AUTHTOKEN();
		static jstring KEY_AUTH_FAILED_MESSAGE();
		static jstring KEY_AUTH_TOKEN_LABEL();
		static jstring KEY_BOOLEAN_RESULT();
		static jstring KEY_CALLER_PID();
		static jstring KEY_CALLER_UID();
		static jstring KEY_ERROR_CODE();
		static jstring KEY_ERROR_MESSAGE();
		static jstring KEY_INTENT();
		static jstring KEY_LAST_AUTHENTICATED_TIME();
		static jstring KEY_PASSWORD();
		static jstring KEY_USERDATA();
		static jstring LOGIN_ACCOUNTS_CHANGED_ACTION();
		static jstring PACKAGE_NAME_KEY_LEGACY_NOT_VISIBLE();
		static jstring PACKAGE_NAME_KEY_LEGACY_VISIBLE();
		static jint VISIBILITY_NOT_VISIBLE();
		static jint VISIBILITY_UNDEFINED();
		static jint VISIBILITY_USER_MANAGED_NOT_VISIBLE();
		static jint VISIBILITY_USER_MANAGED_VISIBLE();
		static jint VISIBILITY_VISIBLE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccountManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccountManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::accounts::AccountManager get(android::content::Context arg0);
		static android::content::Intent newChooseAccountIntent(android::accounts::Account arg0, JObject arg1, jarray arg2, jstring arg3, jstring arg4, jarray arg5, android::os::Bundle arg6);
		static android::content::Intent newChooseAccountIntent(android::accounts::Account arg0, java::util::ArrayList arg1, jarray arg2, jboolean arg3, jstring arg4, jstring arg5, jarray arg6, android::os::Bundle arg7);
		JObject addAccount(jstring arg0, jstring arg1, jarray arg2, android::os::Bundle arg3, android::app::Activity arg4, JObject arg5, android::os::Handler arg6);
		jboolean addAccountExplicitly(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2);
		jboolean addAccountExplicitly(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2, JObject arg3);
		void addOnAccountsUpdatedListener(JObject arg0, android::os::Handler arg1, jboolean arg2);
		void addOnAccountsUpdatedListener(JObject arg0, android::os::Handler arg1, jboolean arg2, jarray arg3);
		jstring blockingGetAuthToken(android::accounts::Account arg0, jstring arg1, jboolean arg2);
		void clearPassword(android::accounts::Account arg0);
		JObject confirmCredentials(android::accounts::Account arg0, android::os::Bundle arg1, android::app::Activity arg2, JObject arg3, android::os::Handler arg4);
		JObject editProperties(jstring arg0, android::app::Activity arg1, JObject arg2, android::os::Handler arg3);
		JObject finishSession(android::os::Bundle arg0, android::app::Activity arg1, JObject arg2, android::os::Handler arg3);
		jint getAccountVisibility(android::accounts::Account arg0, jstring arg1);
		jarray getAccounts();
		JObject getAccountsAndVisibilityForPackage(jstring arg0, jstring arg1);
		jarray getAccountsByType(jstring arg0);
		JObject getAccountsByTypeAndFeatures(jstring arg0, jarray arg1, JObject arg2, android::os::Handler arg3);
		jarray getAccountsByTypeForPackage(jstring arg0, jstring arg1);
		JObject getAuthToken(android::accounts::Account arg0, jstring arg1, jboolean arg2, JObject arg3, android::os::Handler arg4);
		JObject getAuthToken(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2, android::app::Activity arg3, JObject arg4, android::os::Handler arg5);
		JObject getAuthToken(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2, jboolean arg3, JObject arg4, android::os::Handler arg5);
		JObject getAuthTokenByFeatures(jstring arg0, jstring arg1, jarray arg2, android::app::Activity arg3, android::os::Bundle arg4, android::os::Bundle arg5, JObject arg6, android::os::Handler arg7);
		jarray getAuthenticatorTypes();
		JObject getPackagesAndVisibilityForAccount(android::accounts::Account arg0);
		jstring getPassword(android::accounts::Account arg0);
		jstring getPreviousName(android::accounts::Account arg0);
		jstring getUserData(android::accounts::Account arg0, jstring arg1);
		JObject hasFeatures(android::accounts::Account arg0, jarray arg1, JObject arg2, android::os::Handler arg3);
		void invalidateAuthToken(jstring arg0, jstring arg1);
		JObject isCredentialsUpdateSuggested(android::accounts::Account arg0, jstring arg1, JObject arg2, android::os::Handler arg3);
		jboolean notifyAccountAuthenticated(android::accounts::Account arg0);
		jstring peekAuthToken(android::accounts::Account arg0, jstring arg1);
		JObject removeAccount(android::accounts::Account arg0, JObject arg1, android::os::Handler arg2);
		JObject removeAccount(android::accounts::Account arg0, android::app::Activity arg1, JObject arg2, android::os::Handler arg3);
		jboolean removeAccountExplicitly(android::accounts::Account arg0);
		void removeOnAccountsUpdatedListener(JObject arg0);
		JObject renameAccount(android::accounts::Account arg0, jstring arg1, JObject arg2, android::os::Handler arg3);
		jboolean setAccountVisibility(android::accounts::Account arg0, jstring arg1, jint arg2);
		void setAuthToken(android::accounts::Account arg0, jstring arg1, jstring arg2);
		void setPassword(android::accounts::Account arg0, jstring arg1);
		void setUserData(android::accounts::Account arg0, jstring arg1, jstring arg2);
		JObject startAddAccountSession(jstring arg0, jstring arg1, jarray arg2, android::os::Bundle arg3, android::app::Activity arg4, JObject arg5, android::os::Handler arg6);
		JObject startUpdateCredentialsSession(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2, android::app::Activity arg3, JObject arg4, android::os::Handler arg5);
		JObject updateCredentials(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2, android::app::Activity arg3, JObject arg4, android::os::Handler arg5);
	};
} // namespace android::accounts

