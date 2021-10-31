#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::admin
{
	class DevicePolicyManager_InstallSystemUpdateCallback;
}
namespace android::app::admin
{
	class FactoryResetProtectionPolicy;
}
namespace android::app::admin
{
	class SystemUpdateInfo;
}
namespace android::app::admin
{
	class SystemUpdatePolicy;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Intent;
}
namespace android::content
{
	class IntentFilter;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::net
{
	class ProxyInfo;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class PersistableBundle;
}
namespace android::os
{
	class UserHandle;
}
namespace android::security
{
	class AttestedKeyPair;
}
namespace android::security::keystore
{
	class KeyGenParameterSpec;
}
namespace android::telephony::data
{
	class ApnSetting;
}
namespace java::security::cert
{
	class Certificate;
}

namespace android::app::admin
{
	class DevicePolicyManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_ADD_DEVICE_ADMIN();
		static jstring ACTION_ADMIN_POLICY_COMPLIANCE();
		static jstring ACTION_APPLICATION_DELEGATION_SCOPES_CHANGED();
		static jstring ACTION_CHECK_POLICY_COMPLIANCE();
		static jstring ACTION_DEVICE_ADMIN_SERVICE();
		static jstring ACTION_DEVICE_OWNER_CHANGED();
		static jstring ACTION_GET_PROVISIONING_MODE();
		static jstring ACTION_MANAGED_PROFILE_PROVISIONED();
		static jstring ACTION_PROFILE_OWNER_CHANGED();
		static jstring ACTION_PROVISIONING_SUCCESSFUL();
		static jstring ACTION_PROVISION_MANAGED_DEVICE();
		static jstring ACTION_PROVISION_MANAGED_PROFILE();
		static jstring ACTION_SET_NEW_PARENT_PROFILE_PASSWORD();
		static jstring ACTION_SET_NEW_PASSWORD();
		static jstring ACTION_START_ENCRYPTION();
		static jstring ACTION_SYSTEM_UPDATE_POLICY_CHANGED();
		static jstring DELEGATION_APP_RESTRICTIONS();
		static jstring DELEGATION_BLOCK_UNINSTALL();
		static jstring DELEGATION_CERT_INSTALL();
		static jstring DELEGATION_CERT_SELECTION();
		static jstring DELEGATION_ENABLE_SYSTEM_APP();
		static jstring DELEGATION_INSTALL_EXISTING_PACKAGE();
		static jstring DELEGATION_KEEP_UNINSTALLED_PACKAGES();
		static jstring DELEGATION_NETWORK_LOGGING();
		static jstring DELEGATION_PACKAGE_ACCESS();
		static jstring DELEGATION_PERMISSION_GRANT();
		static jint ENCRYPTION_STATUS_ACTIVATING();
		static jint ENCRYPTION_STATUS_ACTIVE();
		static jint ENCRYPTION_STATUS_ACTIVE_DEFAULT_KEY();
		static jint ENCRYPTION_STATUS_ACTIVE_PER_USER();
		static jint ENCRYPTION_STATUS_INACTIVE();
		static jint ENCRYPTION_STATUS_UNSUPPORTED();
		static jstring EXTRA_ADD_EXPLANATION();
		static jstring EXTRA_DELEGATION_SCOPES();
		static jstring EXTRA_DEVICE_ADMIN();
		static jstring EXTRA_PASSWORD_COMPLEXITY();
		static jstring EXTRA_PROVISIONING_ACCOUNT_TO_MIGRATE();
		static jstring EXTRA_PROVISIONING_ADMIN_EXTRAS_BUNDLE();
		static jstring EXTRA_PROVISIONING_DEVICE_ADMIN_COMPONENT_NAME();
		static jstring EXTRA_PROVISIONING_DEVICE_ADMIN_MINIMUM_VERSION_CODE();
		static jstring EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_CHECKSUM();
		static jstring EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_DOWNLOAD_COOKIE_HEADER();
		static jstring EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_DOWNLOAD_LOCATION();
		static jstring EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_NAME();
		static jstring EXTRA_PROVISIONING_DEVICE_ADMIN_SIGNATURE_CHECKSUM();
		static jstring EXTRA_PROVISIONING_DISCLAIMERS();
		static jstring EXTRA_PROVISIONING_DISCLAIMER_CONTENT();
		static jstring EXTRA_PROVISIONING_DISCLAIMER_HEADER();
		static jstring EXTRA_PROVISIONING_EMAIL_ADDRESS();
		static jstring EXTRA_PROVISIONING_IMEI();
		static jstring EXTRA_PROVISIONING_KEEP_ACCOUNT_ON_MIGRATION();
		static jstring EXTRA_PROVISIONING_LEAVE_ALL_SYSTEM_APPS_ENABLED();
		static jstring EXTRA_PROVISIONING_LOCALE();
		static jstring EXTRA_PROVISIONING_LOCAL_TIME();
		static jstring EXTRA_PROVISIONING_LOGO_URI();
		static jstring EXTRA_PROVISIONING_MAIN_COLOR();
		static jstring EXTRA_PROVISIONING_MODE();
		static jstring EXTRA_PROVISIONING_SERIAL_NUMBER();
		static jstring EXTRA_PROVISIONING_SKIP_EDUCATION_SCREENS();
		static jstring EXTRA_PROVISIONING_SKIP_ENCRYPTION();
		static jstring EXTRA_PROVISIONING_SKIP_USER_CONSENT();
		static jstring EXTRA_PROVISIONING_TIME_ZONE();
		static jstring EXTRA_PROVISIONING_WIFI_ANONYMOUS_IDENTITY();
		static jstring EXTRA_PROVISIONING_WIFI_CA_CERTIFICATE();
		static jstring EXTRA_PROVISIONING_WIFI_DOMAIN();
		static jstring EXTRA_PROVISIONING_WIFI_EAP_METHOD();
		static jstring EXTRA_PROVISIONING_WIFI_HIDDEN();
		static jstring EXTRA_PROVISIONING_WIFI_IDENTITY();
		static jstring EXTRA_PROVISIONING_WIFI_PAC_URL();
		static jstring EXTRA_PROVISIONING_WIFI_PASSWORD();
		static jstring EXTRA_PROVISIONING_WIFI_PHASE2_AUTH();
		static jstring EXTRA_PROVISIONING_WIFI_PROXY_BYPASS();
		static jstring EXTRA_PROVISIONING_WIFI_PROXY_HOST();
		static jstring EXTRA_PROVISIONING_WIFI_PROXY_PORT();
		static jstring EXTRA_PROVISIONING_WIFI_SECURITY_TYPE();
		static jstring EXTRA_PROVISIONING_WIFI_SSID();
		static jstring EXTRA_PROVISIONING_WIFI_USER_CERTIFICATE();
		static jint FLAG_EVICT_CREDENTIAL_ENCRYPTION_KEY();
		static jint FLAG_MANAGED_CAN_ACCESS_PARENT();
		static jint FLAG_PARENT_CAN_ACCESS_MANAGED();
		static jint ID_TYPE_BASE_INFO();
		static jint ID_TYPE_IMEI();
		static jint ID_TYPE_INDIVIDUAL_ATTESTATION();
		static jint ID_TYPE_MEID();
		static jint ID_TYPE_SERIAL();
		static jint INSTALLKEY_REQUEST_CREDENTIALS_ACCESS();
		static jint INSTALLKEY_SET_USER_SELECTABLE();
		static jint KEYGUARD_DISABLE_BIOMETRICS();
		static jint KEYGUARD_DISABLE_FACE();
		static jint KEYGUARD_DISABLE_FEATURES_ALL();
		static jint KEYGUARD_DISABLE_FEATURES_NONE();
		static jint KEYGUARD_DISABLE_FINGERPRINT();
		static jint KEYGUARD_DISABLE_IRIS();
		static jint KEYGUARD_DISABLE_REMOTE_INPUT();
		static jint KEYGUARD_DISABLE_SECURE_CAMERA();
		static jint KEYGUARD_DISABLE_SECURE_NOTIFICATIONS();
		static jint KEYGUARD_DISABLE_TRUST_AGENTS();
		static jint KEYGUARD_DISABLE_UNREDACTED_NOTIFICATIONS();
		static jint KEYGUARD_DISABLE_WIDGETS_ALL();
		static jint LEAVE_ALL_SYSTEM_APPS_ENABLED();
		static jint LOCK_TASK_FEATURE_BLOCK_ACTIVITY_START_IN_TASK();
		static jint LOCK_TASK_FEATURE_GLOBAL_ACTIONS();
		static jint LOCK_TASK_FEATURE_HOME();
		static jint LOCK_TASK_FEATURE_KEYGUARD();
		static jint LOCK_TASK_FEATURE_NONE();
		static jint LOCK_TASK_FEATURE_NOTIFICATIONS();
		static jint LOCK_TASK_FEATURE_OVERVIEW();
		static jint LOCK_TASK_FEATURE_SYSTEM_INFO();
		static jint MAKE_USER_EPHEMERAL();
		static jstring MIME_TYPE_PROVISIONING_NFC();
		static jint PASSWORD_COMPLEXITY_HIGH();
		static jint PASSWORD_COMPLEXITY_LOW();
		static jint PASSWORD_COMPLEXITY_MEDIUM();
		static jint PASSWORD_COMPLEXITY_NONE();
		static jint PASSWORD_QUALITY_ALPHABETIC();
		static jint PASSWORD_QUALITY_ALPHANUMERIC();
		static jint PASSWORD_QUALITY_BIOMETRIC_WEAK();
		static jint PASSWORD_QUALITY_COMPLEX();
		static jint PASSWORD_QUALITY_NUMERIC();
		static jint PASSWORD_QUALITY_NUMERIC_COMPLEX();
		static jint PASSWORD_QUALITY_SOMETHING();
		static jint PASSWORD_QUALITY_UNSPECIFIED();
		static jint PERMISSION_GRANT_STATE_DEFAULT();
		static jint PERMISSION_GRANT_STATE_DENIED();
		static jint PERMISSION_GRANT_STATE_GRANTED();
		static jint PERMISSION_POLICY_AUTO_DENY();
		static jint PERMISSION_POLICY_AUTO_GRANT();
		static jint PERMISSION_POLICY_PROMPT();
		static jint PERSONAL_APPS_NOT_SUSPENDED();
		static jint PERSONAL_APPS_SUSPENDED_EXPLICITLY();
		static jint PERSONAL_APPS_SUSPENDED_PROFILE_TIMEOUT();
		static jstring POLICY_DISABLE_CAMERA();
		static jstring POLICY_DISABLE_SCREEN_CAPTURE();
		static jint PRIVATE_DNS_MODE_OFF();
		static jint PRIVATE_DNS_MODE_OPPORTUNISTIC();
		static jint PRIVATE_DNS_MODE_PROVIDER_HOSTNAME();
		static jint PRIVATE_DNS_MODE_UNKNOWN();
		static jint PRIVATE_DNS_SET_ERROR_FAILURE_SETTING();
		static jint PRIVATE_DNS_SET_ERROR_HOST_NOT_SERVING();
		static jint PRIVATE_DNS_SET_NO_ERROR();
		static jint PROVISIONING_MODE_FULLY_MANAGED_DEVICE();
		static jint PROVISIONING_MODE_MANAGED_PROFILE();
		static jint RESET_PASSWORD_DO_NOT_ASK_CREDENTIALS_ON_BOOT();
		static jint RESET_PASSWORD_REQUIRE_ENTRY();
		static jint SKIP_SETUP_WIZARD();
		static jint WIPE_EUICC();
		static jint WIPE_EXTERNAL_STORAGE();
		static jint WIPE_RESET_PROTECTION_DATA();
		static jint WIPE_SILENTLY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DevicePolicyManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DevicePolicyManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addCrossProfileIntentFilter(android::content::ComponentName arg0, android::content::IntentFilter arg1, jint arg2);
		jboolean addCrossProfileWidgetProvider(android::content::ComponentName arg0, jstring arg1);
		jint addOverrideApn(android::content::ComponentName arg0, android::telephony::data::ApnSetting arg1);
		void addPersistentPreferredActivity(android::content::ComponentName arg0, android::content::IntentFilter arg1, android::content::ComponentName arg2);
		void addUserRestriction(android::content::ComponentName arg0, jstring arg1);
		jboolean bindDeviceAdminServiceAsUser(android::content::ComponentName arg0, android::content::Intent arg1, __JniBaseClass arg2, jint arg3, android::os::UserHandle arg4);
		void clearApplicationUserData(android::content::ComponentName arg0, jstring arg1, __JniBaseClass arg2, __JniBaseClass arg3);
		void clearCrossProfileIntentFilters(android::content::ComponentName arg0);
		void clearDeviceOwnerApp(jstring arg0);
		void clearPackagePersistentPreferredActivities(android::content::ComponentName arg0, jstring arg1);
		void clearProfileOwner(android::content::ComponentName arg0);
		jboolean clearResetPasswordToken(android::content::ComponentName arg0);
		void clearUserRestriction(android::content::ComponentName arg0, jstring arg1);
		android::content::Intent createAdminSupportIntent(jstring arg0);
		android::os::UserHandle createAndManageUser(android::content::ComponentName arg0, jstring arg1, android::content::ComponentName arg2, android::os::PersistableBundle arg3, jint arg4);
		jint enableSystemApp(android::content::ComponentName arg0, android::content::Intent arg1);
		void enableSystemApp(android::content::ComponentName arg0, jstring arg1);
		android::security::AttestedKeyPair generateKeyPair(android::content::ComponentName arg0, jstring arg1, android::security::keystore::KeyGenParameterSpec arg2, jint arg3);
		jarray getAccountTypesWithManagementDisabled();
		__JniBaseClass getActiveAdmins();
		__JniBaseClass getAffiliationIds(android::content::ComponentName arg0);
		__JniBaseClass getAlwaysOnVpnLockdownWhitelist(android::content::ComponentName arg0);
		jstring getAlwaysOnVpnPackage(android::content::ComponentName arg0);
		android::os::Bundle getApplicationRestrictions(android::content::ComponentName arg0, jstring arg1);
		jstring getApplicationRestrictionsManagingPackage(android::content::ComponentName arg0);
		jboolean getAutoTimeEnabled(android::content::ComponentName arg0);
		jboolean getAutoTimeRequired();
		jboolean getAutoTimeZoneEnabled(android::content::ComponentName arg0);
		__JniBaseClass getBindDeviceAdminTargetUsers(android::content::ComponentName arg0);
		jboolean getBluetoothContactSharingDisabled(android::content::ComponentName arg0);
		jboolean getCameraDisabled(android::content::ComponentName arg0);
		jstring getCertInstallerPackage(android::content::ComponentName arg0);
		__JniBaseClass getCrossProfileCalendarPackages(android::content::ComponentName arg0);
		jboolean getCrossProfileCallerIdDisabled(android::content::ComponentName arg0);
		jboolean getCrossProfileContactsSearchDisabled(android::content::ComponentName arg0);
		__JniBaseClass getCrossProfilePackages(android::content::ComponentName arg0);
		__JniBaseClass getCrossProfileWidgetProviders(android::content::ComponentName arg0);
		jint getCurrentFailedPasswordAttempts();
		__JniBaseClass getDelegatePackages(android::content::ComponentName arg0, jstring arg1);
		__JniBaseClass getDelegatedScopes(android::content::ComponentName arg0, jstring arg1);
		jstring getDeviceOwnerLockScreenInfo();
		jstring getEndUserSessionMessage(android::content::ComponentName arg0);
		android::app::admin::FactoryResetProtectionPolicy getFactoryResetProtectionPolicy(android::content::ComponentName arg0);
		jstring getGlobalPrivateDnsHost(android::content::ComponentName arg0);
		jint getGlobalPrivateDnsMode(android::content::ComponentName arg0);
		__JniBaseClass getInstalledCaCerts(android::content::ComponentName arg0);
		__JniBaseClass getKeepUninstalledPackages(android::content::ComponentName arg0);
		jint getKeyguardDisabledFeatures(android::content::ComponentName arg0);
		jint getLockTaskFeatures(android::content::ComponentName arg0);
		jarray getLockTaskPackages(android::content::ComponentName arg0);
		jstring getLongSupportMessage(android::content::ComponentName arg0);
		jlong getManagedProfileMaximumTimeOff(android::content::ComponentName arg0);
		jint getMaximumFailedPasswordsForWipe(android::content::ComponentName arg0);
		jlong getMaximumTimeToLock(android::content::ComponentName arg0);
		__JniBaseClass getMeteredDataDisabledPackages(android::content::ComponentName arg0);
		jint getOrganizationColor(android::content::ComponentName arg0);
		jstring getOrganizationName(android::content::ComponentName arg0);
		__JniBaseClass getOverrideApns(android::content::ComponentName arg0);
		android::app::admin::DevicePolicyManager getParentProfileInstance(android::content::ComponentName arg0);
		jint getPasswordComplexity();
		jlong getPasswordExpiration(android::content::ComponentName arg0);
		jlong getPasswordExpirationTimeout(android::content::ComponentName arg0);
		jint getPasswordHistoryLength(android::content::ComponentName arg0);
		jint getPasswordMaximumLength(jint arg0);
		jint getPasswordMinimumLength(android::content::ComponentName arg0);
		jint getPasswordMinimumLetters(android::content::ComponentName arg0);
		jint getPasswordMinimumLowerCase(android::content::ComponentName arg0);
		jint getPasswordMinimumNonLetter(android::content::ComponentName arg0);
		jint getPasswordMinimumNumeric(android::content::ComponentName arg0);
		jint getPasswordMinimumSymbols(android::content::ComponentName arg0);
		jint getPasswordMinimumUpperCase(android::content::ComponentName arg0);
		jint getPasswordQuality(android::content::ComponentName arg0);
		android::app::admin::SystemUpdateInfo getPendingSystemUpdate(android::content::ComponentName arg0);
		jint getPermissionGrantState(android::content::ComponentName arg0, jstring arg1, jstring arg2);
		jint getPermissionPolicy(android::content::ComponentName arg0);
		__JniBaseClass getPermittedAccessibilityServices(android::content::ComponentName arg0);
		__JniBaseClass getPermittedCrossProfileNotificationListeners(android::content::ComponentName arg0);
		__JniBaseClass getPermittedInputMethods(android::content::ComponentName arg0);
		jint getPersonalAppsSuspendedReasons(android::content::ComponentName arg0);
		jlong getRequiredStrongAuthTimeout(android::content::ComponentName arg0);
		jboolean getScreenCaptureDisabled(android::content::ComponentName arg0);
		__JniBaseClass getSecondaryUsers(android::content::ComponentName arg0);
		jstring getShortSupportMessage(android::content::ComponentName arg0);
		jstring getStartUserSessionMessage(android::content::ComponentName arg0);
		jboolean getStorageEncryption(android::content::ComponentName arg0);
		jint getStorageEncryptionStatus();
		android::app::admin::SystemUpdatePolicy getSystemUpdatePolicy();
		android::os::PersistableBundle getTransferOwnershipBundle();
		__JniBaseClass getTrustAgentConfiguration(android::content::ComponentName arg0, android::content::ComponentName arg1);
		__JniBaseClass getUserControlDisabledPackages(android::content::ComponentName arg0);
		android::os::Bundle getUserRestrictions(android::content::ComponentName arg0);
		jstring getWifiMacAddress(android::content::ComponentName arg0);
		jboolean grantKeyPairToApp(android::content::ComponentName arg0, jstring arg1, jstring arg2);
		jboolean hasCaCertInstalled(android::content::ComponentName arg0, jbyteArray arg1);
		jboolean hasGrantedPolicy(android::content::ComponentName arg0, jint arg1);
		jboolean hasLockdownAdminConfiguredNetworks(android::content::ComponentName arg0);
		jboolean installCaCert(android::content::ComponentName arg0, jbyteArray arg1);
		jboolean installExistingPackage(android::content::ComponentName arg0, jstring arg1);
		jboolean installKeyPair(android::content::ComponentName arg0, __JniBaseClass arg1, java::security::cert::Certificate arg2, jstring arg3);
		jboolean installKeyPair(android::content::ComponentName arg0, __JniBaseClass arg1, jarray arg2, jstring arg3, jboolean arg4);
		jboolean installKeyPair(android::content::ComponentName arg0, __JniBaseClass arg1, jarray arg2, jstring arg3, jint arg4);
		void installSystemUpdate(android::content::ComponentName arg0, android::net::Uri arg1, __JniBaseClass arg2, android::app::admin::DevicePolicyManager_InstallSystemUpdateCallback arg3);
		jboolean isActivePasswordSufficient();
		jboolean isAdminActive(android::content::ComponentName arg0);
		jboolean isAffiliatedUser();
		jboolean isAlwaysOnVpnLockdownEnabled(android::content::ComponentName arg0);
		jboolean isApplicationHidden(android::content::ComponentName arg0, jstring arg1);
		jboolean isBackupServiceEnabled(android::content::ComponentName arg0);
		jboolean isCallerApplicationRestrictionsManagingPackage();
		jboolean isCommonCriteriaModeEnabled(android::content::ComponentName arg0);
		jboolean isDeviceIdAttestationSupported();
		jboolean isDeviceOwnerApp(jstring arg0);
		jboolean isEphemeralUser(android::content::ComponentName arg0);
		jboolean isLockTaskPermitted(jstring arg0);
		jboolean isLogoutEnabled();
		jboolean isManagedProfile(android::content::ComponentName arg0);
		jboolean isMasterVolumeMuted(android::content::ComponentName arg0);
		jboolean isNetworkLoggingEnabled(android::content::ComponentName arg0);
		jboolean isOrganizationOwnedDeviceWithManagedProfile();
		jboolean isOverrideApnEnabled(android::content::ComponentName arg0);
		jboolean isPackageSuspended(android::content::ComponentName arg0, jstring arg1);
		jboolean isProfileOwnerApp(jstring arg0);
		jboolean isProvisioningAllowed(jstring arg0);
		jboolean isResetPasswordTokenActive(android::content::ComponentName arg0);
		jboolean isSecurityLoggingEnabled(android::content::ComponentName arg0);
		jboolean isUninstallBlocked(android::content::ComponentName arg0, jstring arg1);
		jboolean isUniqueDeviceAttestationSupported();
		jboolean isUsingUnifiedPassword(android::content::ComponentName arg0);
		void lockNow();
		void lockNow(jint arg0);
		jint logoutUser(android::content::ComponentName arg0);
		void reboot(android::content::ComponentName arg0);
		void removeActiveAdmin(android::content::ComponentName arg0);
		jboolean removeCrossProfileWidgetProvider(android::content::ComponentName arg0, jstring arg1);
		jboolean removeKeyPair(android::content::ComponentName arg0, jstring arg1);
		jboolean removeOverrideApn(android::content::ComponentName arg0, jint arg1);
		jboolean removeUser(android::content::ComponentName arg0, android::os::UserHandle arg1);
		jboolean requestBugreport(android::content::ComponentName arg0);
		jboolean resetPassword(jstring arg0, jint arg1);
		jboolean resetPasswordWithToken(android::content::ComponentName arg0, jstring arg1, jbyteArray arg2, jint arg3);
		__JniBaseClass retrieveNetworkLogs(android::content::ComponentName arg0, jlong arg1);
		__JniBaseClass retrievePreRebootSecurityLogs(android::content::ComponentName arg0);
		__JniBaseClass retrieveSecurityLogs(android::content::ComponentName arg0);
		jboolean revokeKeyPairFromApp(android::content::ComponentName arg0, jstring arg1, jstring arg2);
		void setAccountManagementDisabled(android::content::ComponentName arg0, jstring arg1, jboolean arg2);
		void setAffiliationIds(android::content::ComponentName arg0, __JniBaseClass arg1);
		void setAlwaysOnVpnPackage(android::content::ComponentName arg0, jstring arg1, jboolean arg2);
		void setAlwaysOnVpnPackage(android::content::ComponentName arg0, jstring arg1, jboolean arg2, __JniBaseClass arg3);
		jboolean setApplicationHidden(android::content::ComponentName arg0, jstring arg1, jboolean arg2);
		void setApplicationRestrictions(android::content::ComponentName arg0, jstring arg1, android::os::Bundle arg2);
		void setApplicationRestrictionsManagingPackage(android::content::ComponentName arg0, jstring arg1);
		void setAutoTimeEnabled(android::content::ComponentName arg0, jboolean arg1);
		void setAutoTimeRequired(android::content::ComponentName arg0, jboolean arg1);
		void setAutoTimeZoneEnabled(android::content::ComponentName arg0, jboolean arg1);
		void setBackupServiceEnabled(android::content::ComponentName arg0, jboolean arg1);
		void setBluetoothContactSharingDisabled(android::content::ComponentName arg0, jboolean arg1);
		void setCameraDisabled(android::content::ComponentName arg0, jboolean arg1);
		void setCertInstallerPackage(android::content::ComponentName arg0, jstring arg1);
		void setCommonCriteriaModeEnabled(android::content::ComponentName arg0, jboolean arg1);
		void setConfiguredNetworksLockdownState(android::content::ComponentName arg0, jboolean arg1);
		void setCrossProfileCalendarPackages(android::content::ComponentName arg0, __JniBaseClass arg1);
		void setCrossProfileCallerIdDisabled(android::content::ComponentName arg0, jboolean arg1);
		void setCrossProfileContactsSearchDisabled(android::content::ComponentName arg0, jboolean arg1);
		void setCrossProfilePackages(android::content::ComponentName arg0, __JniBaseClass arg1);
		void setDefaultSmsApplication(android::content::ComponentName arg0, jstring arg1);
		void setDelegatedScopes(android::content::ComponentName arg0, jstring arg1, __JniBaseClass arg2);
		void setDeviceOwnerLockScreenInfo(android::content::ComponentName arg0, jstring arg1);
		void setEndUserSessionMessage(android::content::ComponentName arg0, jstring arg1);
		void setFactoryResetProtectionPolicy(android::content::ComponentName arg0, android::app::admin::FactoryResetProtectionPolicy arg1);
		jint setGlobalPrivateDnsModeOpportunistic(android::content::ComponentName arg0);
		jint setGlobalPrivateDnsModeSpecifiedHost(android::content::ComponentName arg0, jstring arg1);
		void setGlobalSetting(android::content::ComponentName arg0, jstring arg1, jstring arg2);
		void setKeepUninstalledPackages(android::content::ComponentName arg0, __JniBaseClass arg1);
		jboolean setKeyPairCertificate(android::content::ComponentName arg0, jstring arg1, __JniBaseClass arg2, jboolean arg3);
		jboolean setKeyguardDisabled(android::content::ComponentName arg0, jboolean arg1);
		void setKeyguardDisabledFeatures(android::content::ComponentName arg0, jint arg1);
		void setLocationEnabled(android::content::ComponentName arg0, jboolean arg1);
		void setLockTaskFeatures(android::content::ComponentName arg0, jint arg1);
		void setLockTaskPackages(android::content::ComponentName arg0, jarray arg1);
		void setLogoutEnabled(android::content::ComponentName arg0, jboolean arg1);
		void setLongSupportMessage(android::content::ComponentName arg0, jstring arg1);
		void setManagedProfileMaximumTimeOff(android::content::ComponentName arg0, jlong arg1);
		void setMasterVolumeMuted(android::content::ComponentName arg0, jboolean arg1);
		void setMaximumFailedPasswordsForWipe(android::content::ComponentName arg0, jint arg1);
		void setMaximumTimeToLock(android::content::ComponentName arg0, jlong arg1);
		__JniBaseClass setMeteredDataDisabledPackages(android::content::ComponentName arg0, __JniBaseClass arg1);
		void setNetworkLoggingEnabled(android::content::ComponentName arg0, jboolean arg1);
		void setOrganizationColor(android::content::ComponentName arg0, jint arg1);
		void setOrganizationName(android::content::ComponentName arg0, jstring arg1);
		void setOverrideApnsEnabled(android::content::ComponentName arg0, jboolean arg1);
		jarray setPackagesSuspended(android::content::ComponentName arg0, jarray arg1, jboolean arg2);
		void setPasswordExpirationTimeout(android::content::ComponentName arg0, jlong arg1);
		void setPasswordHistoryLength(android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumLength(android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumLetters(android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumLowerCase(android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumNonLetter(android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumNumeric(android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumSymbols(android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumUpperCase(android::content::ComponentName arg0, jint arg1);
		void setPasswordQuality(android::content::ComponentName arg0, jint arg1);
		jboolean setPermissionGrantState(android::content::ComponentName arg0, jstring arg1, jstring arg2, jint arg3);
		void setPermissionPolicy(android::content::ComponentName arg0, jint arg1);
		jboolean setPermittedAccessibilityServices(android::content::ComponentName arg0, __JniBaseClass arg1);
		jboolean setPermittedCrossProfileNotificationListeners(android::content::ComponentName arg0, __JniBaseClass arg1);
		jboolean setPermittedInputMethods(android::content::ComponentName arg0, __JniBaseClass arg1);
		void setPersonalAppsSuspended(android::content::ComponentName arg0, jboolean arg1);
		void setProfileEnabled(android::content::ComponentName arg0);
		void setProfileName(android::content::ComponentName arg0, jstring arg1);
		void setRecommendedGlobalProxy(android::content::ComponentName arg0, android::net::ProxyInfo arg1);
		void setRequiredStrongAuthTimeout(android::content::ComponentName arg0, jlong arg1);
		jboolean setResetPasswordToken(android::content::ComponentName arg0, jbyteArray arg1);
		void setRestrictionsProvider(android::content::ComponentName arg0, android::content::ComponentName arg1);
		void setScreenCaptureDisabled(android::content::ComponentName arg0, jboolean arg1);
		void setSecureSetting(android::content::ComponentName arg0, jstring arg1, jstring arg2);
		void setSecurityLoggingEnabled(android::content::ComponentName arg0, jboolean arg1);
		void setShortSupportMessage(android::content::ComponentName arg0, jstring arg1);
		void setStartUserSessionMessage(android::content::ComponentName arg0, jstring arg1);
		jboolean setStatusBarDisabled(android::content::ComponentName arg0, jboolean arg1);
		jint setStorageEncryption(android::content::ComponentName arg0, jboolean arg1);
		void setSystemSetting(android::content::ComponentName arg0, jstring arg1, jstring arg2);
		void setSystemUpdatePolicy(android::content::ComponentName arg0, android::app::admin::SystemUpdatePolicy arg1);
		jboolean setTime(android::content::ComponentName arg0, jlong arg1);
		jboolean setTimeZone(android::content::ComponentName arg0, jstring arg1);
		void setTrustAgentConfiguration(android::content::ComponentName arg0, android::content::ComponentName arg1, android::os::PersistableBundle arg2);
		void setUninstallBlocked(android::content::ComponentName arg0, jstring arg1, jboolean arg2);
		void setUserControlDisabledPackages(android::content::ComponentName arg0, __JniBaseClass arg1);
		void setUserIcon(android::content::ComponentName arg0, android::graphics::Bitmap arg1);
		jint startUserInBackground(android::content::ComponentName arg0, android::os::UserHandle arg1);
		jint stopUser(android::content::ComponentName arg0, android::os::UserHandle arg1);
		jboolean switchUser(android::content::ComponentName arg0, android::os::UserHandle arg1);
		void transferOwnership(android::content::ComponentName arg0, android::content::ComponentName arg1, android::os::PersistableBundle arg2);
		void uninstallAllUserCaCerts(android::content::ComponentName arg0);
		void uninstallCaCert(android::content::ComponentName arg0, jbyteArray arg1);
		jboolean updateOverrideApn(android::content::ComponentName arg0, jint arg1, android::telephony::data::ApnSetting arg2);
		void wipeData(jint arg0);
		void wipeData(jint arg0, jstring arg1);
	};
} // namespace android::app::admin
