#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "./DevicePolicyManager_InstallSystemUpdateCallback.hpp"
#include "./SystemUpdateInfo.hpp"
#include "./SystemUpdatePolicy.hpp"
#include "../../content/ComponentName.hpp"
#include "../../content/Intent.hpp"
#include "../../content/IntentFilter.hpp"
#include "../../graphics/Bitmap.hpp"
#include "../../net/ProxyInfo.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/PersistableBundle.hpp"
#include "../../os/UserHandle.hpp"
#include "../../security/AttestedKeyPair.hpp"
#include "../../security/keystore/KeyGenParameterSpec.hpp"
#include "../../telephony/data/ApnSetting.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/cert/Certificate.hpp"
#include "./DevicePolicyManager.hpp"

namespace android::app::admin
{
	// Fields
	JString DevicePolicyManager::ACTION_ADD_DEVICE_ADMIN()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_ADD_DEVICE_ADMIN",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::ACTION_ADMIN_POLICY_COMPLIANCE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_ADMIN_POLICY_COMPLIANCE",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::ACTION_APPLICATION_DELEGATION_SCOPES_CHANGED()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_APPLICATION_DELEGATION_SCOPES_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::ACTION_DEVICE_ADMIN_SERVICE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_DEVICE_ADMIN_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::ACTION_DEVICE_OWNER_CHANGED()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_DEVICE_OWNER_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::ACTION_GET_PROVISIONING_MODE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_GET_PROVISIONING_MODE",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::ACTION_MANAGED_PROFILE_PROVISIONED()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_MANAGED_PROFILE_PROVISIONED",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::ACTION_PROFILE_OWNER_CHANGED()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_PROFILE_OWNER_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::ACTION_PROVISIONING_SUCCESSFUL()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_PROVISIONING_SUCCESSFUL",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::ACTION_PROVISION_MANAGED_DEVICE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_PROVISION_MANAGED_DEVICE",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::ACTION_PROVISION_MANAGED_PROFILE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_PROVISION_MANAGED_PROFILE",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::ACTION_SET_NEW_PARENT_PROFILE_PASSWORD()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_SET_NEW_PARENT_PROFILE_PASSWORD",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::ACTION_SET_NEW_PASSWORD()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_SET_NEW_PASSWORD",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::ACTION_START_ENCRYPTION()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_START_ENCRYPTION",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::ACTION_SYSTEM_UPDATE_POLICY_CHANGED()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"ACTION_SYSTEM_UPDATE_POLICY_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::DELEGATION_APP_RESTRICTIONS()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_APP_RESTRICTIONS",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::DELEGATION_BLOCK_UNINSTALL()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_BLOCK_UNINSTALL",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::DELEGATION_CERT_INSTALL()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_CERT_INSTALL",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::DELEGATION_CERT_SELECTION()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_CERT_SELECTION",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::DELEGATION_ENABLE_SYSTEM_APP()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_ENABLE_SYSTEM_APP",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::DELEGATION_INSTALL_EXISTING_PACKAGE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_INSTALL_EXISTING_PACKAGE",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::DELEGATION_KEEP_UNINSTALLED_PACKAGES()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_KEEP_UNINSTALLED_PACKAGES",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::DELEGATION_NETWORK_LOGGING()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_NETWORK_LOGGING",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::DELEGATION_PACKAGE_ACCESS()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_PACKAGE_ACCESS",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::DELEGATION_PERMISSION_GRANT()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"DELEGATION_PERMISSION_GRANT",
			"Ljava/lang/String;"
		);
	}
	jint DevicePolicyManager::ENCRYPTION_STATUS_ACTIVATING()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ENCRYPTION_STATUS_ACTIVATING"
		);
	}
	jint DevicePolicyManager::ENCRYPTION_STATUS_ACTIVE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ENCRYPTION_STATUS_ACTIVE"
		);
	}
	jint DevicePolicyManager::ENCRYPTION_STATUS_ACTIVE_DEFAULT_KEY()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ENCRYPTION_STATUS_ACTIVE_DEFAULT_KEY"
		);
	}
	jint DevicePolicyManager::ENCRYPTION_STATUS_ACTIVE_PER_USER()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ENCRYPTION_STATUS_ACTIVE_PER_USER"
		);
	}
	jint DevicePolicyManager::ENCRYPTION_STATUS_INACTIVE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ENCRYPTION_STATUS_INACTIVE"
		);
	}
	jint DevicePolicyManager::ENCRYPTION_STATUS_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ENCRYPTION_STATUS_UNSUPPORTED"
		);
	}
	JString DevicePolicyManager::EXTRA_ADD_EXPLANATION()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_ADD_EXPLANATION",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_DELEGATION_SCOPES()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_DELEGATION_SCOPES",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_DEVICE_ADMIN()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_DEVICE_ADMIN",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PASSWORD_COMPLEXITY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PASSWORD_COMPLEXITY",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_ACCOUNT_TO_MIGRATE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_ACCOUNT_TO_MIGRATE",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_ADMIN_EXTRAS_BUNDLE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_ADMIN_EXTRAS_BUNDLE",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_COMPONENT_NAME()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_COMPONENT_NAME",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_MINIMUM_VERSION_CODE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_MINIMUM_VERSION_CODE",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_CHECKSUM()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_CHECKSUM",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_DOWNLOAD_COOKIE_HEADER()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_DOWNLOAD_COOKIE_HEADER",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_DOWNLOAD_LOCATION()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_DOWNLOAD_LOCATION",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_NAME",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_DEVICE_ADMIN_SIGNATURE_CHECKSUM()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DEVICE_ADMIN_SIGNATURE_CHECKSUM",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_DISCLAIMERS()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DISCLAIMERS",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_DISCLAIMER_CONTENT()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DISCLAIMER_CONTENT",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_DISCLAIMER_HEADER()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_DISCLAIMER_HEADER",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_EMAIL_ADDRESS()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_EMAIL_ADDRESS",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_IMEI()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_IMEI",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_KEEP_ACCOUNT_ON_MIGRATION()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_KEEP_ACCOUNT_ON_MIGRATION",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_LEAVE_ALL_SYSTEM_APPS_ENABLED()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_LEAVE_ALL_SYSTEM_APPS_ENABLED",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_LOCALE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_LOCALE",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_LOCAL_TIME()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_LOCAL_TIME",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_LOGO_URI()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_LOGO_URI",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_MAIN_COLOR()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_MAIN_COLOR",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_MODE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_MODE",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_SERIAL_NUMBER()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_SERIAL_NUMBER",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_SKIP_EDUCATION_SCREENS()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_SKIP_EDUCATION_SCREENS",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_SKIP_ENCRYPTION()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_SKIP_ENCRYPTION",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_SKIP_USER_CONSENT()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_SKIP_USER_CONSENT",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_TIME_ZONE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_TIME_ZONE",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_ANONYMOUS_IDENTITY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_ANONYMOUS_IDENTITY",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_CA_CERTIFICATE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_CA_CERTIFICATE",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_DOMAIN()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_DOMAIN",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_EAP_METHOD()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_EAP_METHOD",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_HIDDEN()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_HIDDEN",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_IDENTITY()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_IDENTITY",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_PAC_URL()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_PAC_URL",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_PASSWORD()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_PASSWORD",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_PHASE2_AUTH()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_PHASE2_AUTH",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_PROXY_BYPASS()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_PROXY_BYPASS",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_PROXY_HOST()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_PROXY_HOST",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_PROXY_PORT()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_PROXY_PORT",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_SECURITY_TYPE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_SECURITY_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_SSID()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_SSID",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::EXTRA_PROVISIONING_WIFI_USER_CERTIFICATE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"EXTRA_PROVISIONING_WIFI_USER_CERTIFICATE",
			"Ljava/lang/String;"
		);
	}
	jint DevicePolicyManager::FLAG_EVICT_CREDENTIAL_ENCRYPTION_KEY()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"FLAG_EVICT_CREDENTIAL_ENCRYPTION_KEY"
		);
	}
	jint DevicePolicyManager::FLAG_MANAGED_CAN_ACCESS_PARENT()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"FLAG_MANAGED_CAN_ACCESS_PARENT"
		);
	}
	jint DevicePolicyManager::FLAG_PARENT_CAN_ACCESS_MANAGED()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"FLAG_PARENT_CAN_ACCESS_MANAGED"
		);
	}
	jint DevicePolicyManager::ID_TYPE_BASE_INFO()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ID_TYPE_BASE_INFO"
		);
	}
	jint DevicePolicyManager::ID_TYPE_IMEI()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ID_TYPE_IMEI"
		);
	}
	jint DevicePolicyManager::ID_TYPE_MEID()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ID_TYPE_MEID"
		);
	}
	jint DevicePolicyManager::ID_TYPE_SERIAL()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"ID_TYPE_SERIAL"
		);
	}
	jint DevicePolicyManager::INSTALLKEY_REQUEST_CREDENTIALS_ACCESS()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"INSTALLKEY_REQUEST_CREDENTIALS_ACCESS"
		);
	}
	jint DevicePolicyManager::INSTALLKEY_SET_USER_SELECTABLE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"INSTALLKEY_SET_USER_SELECTABLE"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_BIOMETRICS()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_BIOMETRICS"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_FACE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_FACE"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_FEATURES_ALL()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_FEATURES_ALL"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_FEATURES_NONE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_FEATURES_NONE"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_FINGERPRINT()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_FINGERPRINT"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_IRIS()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_IRIS"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_REMOTE_INPUT()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_REMOTE_INPUT"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_SECURE_CAMERA()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_SECURE_CAMERA"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_SECURE_NOTIFICATIONS()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_SECURE_NOTIFICATIONS"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_TRUST_AGENTS()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_TRUST_AGENTS"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_UNREDACTED_NOTIFICATIONS()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_UNREDACTED_NOTIFICATIONS"
		);
	}
	jint DevicePolicyManager::KEYGUARD_DISABLE_WIDGETS_ALL()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"KEYGUARD_DISABLE_WIDGETS_ALL"
		);
	}
	jint DevicePolicyManager::LEAVE_ALL_SYSTEM_APPS_ENABLED()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LEAVE_ALL_SYSTEM_APPS_ENABLED"
		);
	}
	jint DevicePolicyManager::LOCK_TASK_FEATURE_GLOBAL_ACTIONS()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_GLOBAL_ACTIONS"
		);
	}
	jint DevicePolicyManager::LOCK_TASK_FEATURE_HOME()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_HOME"
		);
	}
	jint DevicePolicyManager::LOCK_TASK_FEATURE_KEYGUARD()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_KEYGUARD"
		);
	}
	jint DevicePolicyManager::LOCK_TASK_FEATURE_NONE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_NONE"
		);
	}
	jint DevicePolicyManager::LOCK_TASK_FEATURE_NOTIFICATIONS()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_NOTIFICATIONS"
		);
	}
	jint DevicePolicyManager::LOCK_TASK_FEATURE_OVERVIEW()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_OVERVIEW"
		);
	}
	jint DevicePolicyManager::LOCK_TASK_FEATURE_SYSTEM_INFO()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"LOCK_TASK_FEATURE_SYSTEM_INFO"
		);
	}
	jint DevicePolicyManager::MAKE_USER_EPHEMERAL()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"MAKE_USER_EPHEMERAL"
		);
	}
	JString DevicePolicyManager::MIME_TYPE_PROVISIONING_NFC()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"MIME_TYPE_PROVISIONING_NFC",
			"Ljava/lang/String;"
		);
	}
	jint DevicePolicyManager::PASSWORD_COMPLEXITY_HIGH()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_COMPLEXITY_HIGH"
		);
	}
	jint DevicePolicyManager::PASSWORD_COMPLEXITY_LOW()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_COMPLEXITY_LOW"
		);
	}
	jint DevicePolicyManager::PASSWORD_COMPLEXITY_MEDIUM()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_COMPLEXITY_MEDIUM"
		);
	}
	jint DevicePolicyManager::PASSWORD_COMPLEXITY_NONE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_COMPLEXITY_NONE"
		);
	}
	jint DevicePolicyManager::PASSWORD_QUALITY_ALPHABETIC()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_ALPHABETIC"
		);
	}
	jint DevicePolicyManager::PASSWORD_QUALITY_ALPHANUMERIC()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_ALPHANUMERIC"
		);
	}
	jint DevicePolicyManager::PASSWORD_QUALITY_BIOMETRIC_WEAK()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_BIOMETRIC_WEAK"
		);
	}
	jint DevicePolicyManager::PASSWORD_QUALITY_COMPLEX()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_COMPLEX"
		);
	}
	jint DevicePolicyManager::PASSWORD_QUALITY_NUMERIC()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_NUMERIC"
		);
	}
	jint DevicePolicyManager::PASSWORD_QUALITY_NUMERIC_COMPLEX()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_NUMERIC_COMPLEX"
		);
	}
	jint DevicePolicyManager::PASSWORD_QUALITY_SOMETHING()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_SOMETHING"
		);
	}
	jint DevicePolicyManager::PASSWORD_QUALITY_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PASSWORD_QUALITY_UNSPECIFIED"
		);
	}
	jint DevicePolicyManager::PERMISSION_GRANT_STATE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERMISSION_GRANT_STATE_DEFAULT"
		);
	}
	jint DevicePolicyManager::PERMISSION_GRANT_STATE_DENIED()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERMISSION_GRANT_STATE_DENIED"
		);
	}
	jint DevicePolicyManager::PERMISSION_GRANT_STATE_GRANTED()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERMISSION_GRANT_STATE_GRANTED"
		);
	}
	jint DevicePolicyManager::PERMISSION_POLICY_AUTO_DENY()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERMISSION_POLICY_AUTO_DENY"
		);
	}
	jint DevicePolicyManager::PERMISSION_POLICY_AUTO_GRANT()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERMISSION_POLICY_AUTO_GRANT"
		);
	}
	jint DevicePolicyManager::PERMISSION_POLICY_PROMPT()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PERMISSION_POLICY_PROMPT"
		);
	}
	JString DevicePolicyManager::POLICY_DISABLE_CAMERA()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"POLICY_DISABLE_CAMERA",
			"Ljava/lang/String;"
		);
	}
	JString DevicePolicyManager::POLICY_DISABLE_SCREEN_CAPTURE()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyManager",
			"POLICY_DISABLE_SCREEN_CAPTURE",
			"Ljava/lang/String;"
		);
	}
	jint DevicePolicyManager::PRIVATE_DNS_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_MODE_OFF"
		);
	}
	jint DevicePolicyManager::PRIVATE_DNS_MODE_OPPORTUNISTIC()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_MODE_OPPORTUNISTIC"
		);
	}
	jint DevicePolicyManager::PRIVATE_DNS_MODE_PROVIDER_HOSTNAME()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_MODE_PROVIDER_HOSTNAME"
		);
	}
	jint DevicePolicyManager::PRIVATE_DNS_MODE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_MODE_UNKNOWN"
		);
	}
	jint DevicePolicyManager::PRIVATE_DNS_SET_ERROR_FAILURE_SETTING()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_SET_ERROR_FAILURE_SETTING"
		);
	}
	jint DevicePolicyManager::PRIVATE_DNS_SET_ERROR_HOST_NOT_SERVING()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_SET_ERROR_HOST_NOT_SERVING"
		);
	}
	jint DevicePolicyManager::PRIVATE_DNS_SET_NO_ERROR()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PRIVATE_DNS_SET_NO_ERROR"
		);
	}
	jint DevicePolicyManager::PROVISIONING_MODE_FULLY_MANAGED_DEVICE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PROVISIONING_MODE_FULLY_MANAGED_DEVICE"
		);
	}
	jint DevicePolicyManager::PROVISIONING_MODE_MANAGED_PROFILE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"PROVISIONING_MODE_MANAGED_PROFILE"
		);
	}
	jint DevicePolicyManager::RESET_PASSWORD_DO_NOT_ASK_CREDENTIALS_ON_BOOT()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"RESET_PASSWORD_DO_NOT_ASK_CREDENTIALS_ON_BOOT"
		);
	}
	jint DevicePolicyManager::RESET_PASSWORD_REQUIRE_ENTRY()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"RESET_PASSWORD_REQUIRE_ENTRY"
		);
	}
	jint DevicePolicyManager::SKIP_SETUP_WIZARD()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"SKIP_SETUP_WIZARD"
		);
	}
	jint DevicePolicyManager::WIPE_EUICC()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"WIPE_EUICC"
		);
	}
	jint DevicePolicyManager::WIPE_EXTERNAL_STORAGE()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"WIPE_EXTERNAL_STORAGE"
		);
	}
	jint DevicePolicyManager::WIPE_RESET_PROTECTION_DATA()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"WIPE_RESET_PROTECTION_DATA"
		);
	}
	jint DevicePolicyManager::WIPE_SILENTLY()
	{
		return getStaticField<jint>(
			"android.app.admin.DevicePolicyManager",
			"WIPE_SILENTLY"
		);
	}
	
	// QJniObject forward
	DevicePolicyManager::DevicePolicyManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void DevicePolicyManager::addCrossProfileIntentFilter(android::content::ComponentName arg0, android::content::IntentFilter arg1, jint arg2) const
	{
		callMethod<void>(
			"addCrossProfileIntentFilter",
			"(Landroid/content/ComponentName;Landroid/content/IntentFilter;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jboolean DevicePolicyManager::addCrossProfileWidgetProvider(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"addCrossProfileWidgetProvider",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jint DevicePolicyManager::addOverrideApn(android::content::ComponentName arg0, android::telephony::data::ApnSetting arg1) const
	{
		return callMethod<jint>(
			"addOverrideApn",
			"(Landroid/content/ComponentName;Landroid/telephony/data/ApnSetting;)I",
			arg0.object(),
			arg1.object()
		);
	}
	void DevicePolicyManager::addPersistentPreferredActivity(android::content::ComponentName arg0, android::content::IntentFilter arg1, android::content::ComponentName arg2) const
	{
		callMethod<void>(
			"addPersistentPreferredActivity",
			"(Landroid/content/ComponentName;Landroid/content/IntentFilter;Landroid/content/ComponentName;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void DevicePolicyManager::addUserRestriction(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"addUserRestriction",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jboolean DevicePolicyManager::bindDeviceAdminServiceAsUser(android::content::ComponentName arg0, android::content::Intent arg1, JObject arg2, jint arg3, android::os::UserHandle arg4) const
	{
		return callMethod<jboolean>(
			"bindDeviceAdminServiceAsUser",
			"(Landroid/content/ComponentName;Landroid/content/Intent;Landroid/content/ServiceConnection;ILandroid/os/UserHandle;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3,
			arg4.object()
		);
	}
	void DevicePolicyManager::clearApplicationUserData(android::content::ComponentName arg0, JString arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"clearApplicationUserData",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/util/concurrent/Executor;Landroid/app/admin/DevicePolicyManager$OnClearApplicationUserDataListener;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	void DevicePolicyManager::clearCrossProfileIntentFilters(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"clearCrossProfileIntentFilters",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	void DevicePolicyManager::clearDeviceOwnerApp(JString arg0) const
	{
		callMethod<void>(
			"clearDeviceOwnerApp",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DevicePolicyManager::clearPackagePersistentPreferredActivities(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"clearPackagePersistentPreferredActivities",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void DevicePolicyManager::clearProfileOwner(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"clearProfileOwner",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::clearResetPasswordToken(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"clearResetPasswordToken",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	void DevicePolicyManager::clearUserRestriction(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"clearUserRestriction",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::content::Intent DevicePolicyManager::createAdminSupportIntent(JString arg0) const
	{
		return callObjectMethod(
			"createAdminSupportIntent",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object<jstring>()
		);
	}
	android::os::UserHandle DevicePolicyManager::createAndManageUser(android::content::ComponentName arg0, JString arg1, android::content::ComponentName arg2, android::os::PersistableBundle arg3, jint arg4) const
	{
		return callObjectMethod(
			"createAndManageUser",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/content/ComponentName;Landroid/os/PersistableBundle;I)Landroid/os/UserHandle;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4
		);
	}
	jint DevicePolicyManager::enableSystemApp(android::content::ComponentName arg0, android::content::Intent arg1) const
	{
		return callMethod<jint>(
			"enableSystemApp",
			"(Landroid/content/ComponentName;Landroid/content/Intent;)I",
			arg0.object(),
			arg1.object()
		);
	}
	void DevicePolicyManager::enableSystemApp(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"enableSystemApp",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::security::AttestedKeyPair DevicePolicyManager::generateKeyPair(android::content::ComponentName arg0, JString arg1, android::security::keystore::KeyGenParameterSpec arg2, jint arg3) const
	{
		return callObjectMethod(
			"generateKeyPair",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/security/keystore/KeyGenParameterSpec;I)Landroid/security/AttestedKeyPair;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3
		);
	}
	JArray DevicePolicyManager::getAccountTypesWithManagementDisabled() const
	{
		return callObjectMethod(
			"getAccountTypesWithManagementDisabled",
			"()[Ljava/lang/String;"
		);
	}
	JObject DevicePolicyManager::getActiveAdmins() const
	{
		return callObjectMethod(
			"getActiveAdmins",
			"()Ljava/util/List;"
		);
	}
	JObject DevicePolicyManager::getAffiliationIds(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getAffiliationIds",
			"(Landroid/content/ComponentName;)Ljava/util/Set;",
			arg0.object()
		);
	}
	JObject DevicePolicyManager::getAlwaysOnVpnLockdownWhitelist(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getAlwaysOnVpnLockdownWhitelist",
			"(Landroid/content/ComponentName;)Ljava/util/Set;",
			arg0.object()
		);
	}
	JString DevicePolicyManager::getAlwaysOnVpnPackage(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getAlwaysOnVpnPackage",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.object()
		);
	}
	android::os::Bundle DevicePolicyManager::getApplicationRestrictions(android::content::ComponentName arg0, JString arg1) const
	{
		return callObjectMethod(
			"getApplicationRestrictions",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Landroid/os/Bundle;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	JString DevicePolicyManager::getApplicationRestrictionsManagingPackage(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getApplicationRestrictionsManagingPackage",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::getAutoTimeRequired() const
	{
		return callMethod<jboolean>(
			"getAutoTimeRequired",
			"()Z"
		);
	}
	JObject DevicePolicyManager::getBindDeviceAdminTargetUsers(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getBindDeviceAdminTargetUsers",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::getBluetoothContactSharingDisabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"getBluetoothContactSharingDisabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::getCameraDisabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"getCameraDisabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	JString DevicePolicyManager::getCertInstallerPackage(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getCertInstallerPackage",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JObject DevicePolicyManager::getCrossProfileCalendarPackages(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getCrossProfileCalendarPackages",
			"(Landroid/content/ComponentName;)Ljava/util/Set;",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::getCrossProfileCallerIdDisabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"getCrossProfileCallerIdDisabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::getCrossProfileContactsSearchDisabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"getCrossProfileContactsSearchDisabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	JObject DevicePolicyManager::getCrossProfileWidgetProviders(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getCrossProfileWidgetProviders",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	jint DevicePolicyManager::getCurrentFailedPasswordAttempts() const
	{
		return callMethod<jint>(
			"getCurrentFailedPasswordAttempts",
			"()I"
		);
	}
	JObject DevicePolicyManager::getDelegatePackages(android::content::ComponentName arg0, JString arg1) const
	{
		return callObjectMethod(
			"getDelegatePackages",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Ljava/util/List;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	JObject DevicePolicyManager::getDelegatedScopes(android::content::ComponentName arg0, JString arg1) const
	{
		return callObjectMethod(
			"getDelegatedScopes",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Ljava/util/List;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	JString DevicePolicyManager::getDeviceOwnerLockScreenInfo() const
	{
		return callObjectMethod(
			"getDeviceOwnerLockScreenInfo",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString DevicePolicyManager::getEndUserSessionMessage(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getEndUserSessionMessage",
			"(Landroid/content/ComponentName;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	JString DevicePolicyManager::getGlobalPrivateDnsHost(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getGlobalPrivateDnsHost",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.object()
		);
	}
	jint DevicePolicyManager::getGlobalPrivateDnsMode(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getGlobalPrivateDnsMode",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	JObject DevicePolicyManager::getInstalledCaCerts(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getInstalledCaCerts",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	JObject DevicePolicyManager::getKeepUninstalledPackages(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getKeepUninstalledPackages",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	jint DevicePolicyManager::getKeyguardDisabledFeatures(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getKeyguardDisabledFeatures",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	jint DevicePolicyManager::getLockTaskFeatures(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getLockTaskFeatures",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	JArray DevicePolicyManager::getLockTaskPackages(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getLockTaskPackages",
			"(Landroid/content/ComponentName;)[Ljava/lang/String;",
			arg0.object()
		);
	}
	JString DevicePolicyManager::getLongSupportMessage(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getLongSupportMessage",
			"(Landroid/content/ComponentName;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	jint DevicePolicyManager::getMaximumFailedPasswordsForWipe(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getMaximumFailedPasswordsForWipe",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	jlong DevicePolicyManager::getMaximumTimeToLock(android::content::ComponentName arg0) const
	{
		return callMethod<jlong>(
			"getMaximumTimeToLock",
			"(Landroid/content/ComponentName;)J",
			arg0.object()
		);
	}
	JObject DevicePolicyManager::getMeteredDataDisabledPackages(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getMeteredDataDisabledPackages",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	jint DevicePolicyManager::getOrganizationColor(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getOrganizationColor",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	JString DevicePolicyManager::getOrganizationName(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getOrganizationName",
			"(Landroid/content/ComponentName;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	JObject DevicePolicyManager::getOverrideApns(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getOverrideApns",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	android::app::admin::DevicePolicyManager DevicePolicyManager::getParentProfileInstance(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getParentProfileInstance",
			"(Landroid/content/ComponentName;)Landroid/app/admin/DevicePolicyManager;",
			arg0.object()
		);
	}
	jint DevicePolicyManager::getPasswordComplexity() const
	{
		return callMethod<jint>(
			"getPasswordComplexity",
			"()I"
		);
	}
	jlong DevicePolicyManager::getPasswordExpiration(android::content::ComponentName arg0) const
	{
		return callMethod<jlong>(
			"getPasswordExpiration",
			"(Landroid/content/ComponentName;)J",
			arg0.object()
		);
	}
	jlong DevicePolicyManager::getPasswordExpirationTimeout(android::content::ComponentName arg0) const
	{
		return callMethod<jlong>(
			"getPasswordExpirationTimeout",
			"(Landroid/content/ComponentName;)J",
			arg0.object()
		);
	}
	jint DevicePolicyManager::getPasswordHistoryLength(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPasswordHistoryLength",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	jint DevicePolicyManager::getPasswordMaximumLength(jint arg0) const
	{
		return callMethod<jint>(
			"getPasswordMaximumLength",
			"(I)I",
			arg0
		);
	}
	jint DevicePolicyManager::getPasswordMinimumLength(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPasswordMinimumLength",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	jint DevicePolicyManager::getPasswordMinimumLetters(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPasswordMinimumLetters",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	jint DevicePolicyManager::getPasswordMinimumLowerCase(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPasswordMinimumLowerCase",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	jint DevicePolicyManager::getPasswordMinimumNonLetter(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPasswordMinimumNonLetter",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	jint DevicePolicyManager::getPasswordMinimumNumeric(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPasswordMinimumNumeric",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	jint DevicePolicyManager::getPasswordMinimumSymbols(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPasswordMinimumSymbols",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	jint DevicePolicyManager::getPasswordMinimumUpperCase(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPasswordMinimumUpperCase",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	jint DevicePolicyManager::getPasswordQuality(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPasswordQuality",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	android::app::admin::SystemUpdateInfo DevicePolicyManager::getPendingSystemUpdate(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getPendingSystemUpdate",
			"(Landroid/content/ComponentName;)Landroid/app/admin/SystemUpdateInfo;",
			arg0.object()
		);
	}
	jint DevicePolicyManager::getPermissionGrantState(android::content::ComponentName arg0, JString arg1, JString arg2) const
	{
		return callMethod<jint>(
			"getPermissionGrantState",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	jint DevicePolicyManager::getPermissionPolicy(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"getPermissionPolicy",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	JObject DevicePolicyManager::getPermittedAccessibilityServices(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getPermittedAccessibilityServices",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	JObject DevicePolicyManager::getPermittedCrossProfileNotificationListeners(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getPermittedCrossProfileNotificationListeners",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	JObject DevicePolicyManager::getPermittedInputMethods(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getPermittedInputMethods",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	jlong DevicePolicyManager::getRequiredStrongAuthTimeout(android::content::ComponentName arg0) const
	{
		return callMethod<jlong>(
			"getRequiredStrongAuthTimeout",
			"(Landroid/content/ComponentName;)J",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::getScreenCaptureDisabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"getScreenCaptureDisabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	JObject DevicePolicyManager::getSecondaryUsers(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getSecondaryUsers",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	JString DevicePolicyManager::getShortSupportMessage(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getShortSupportMessage",
			"(Landroid/content/ComponentName;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	JString DevicePolicyManager::getStartUserSessionMessage(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getStartUserSessionMessage",
			"(Landroid/content/ComponentName;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::getStorageEncryption(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"getStorageEncryption",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	jint DevicePolicyManager::getStorageEncryptionStatus() const
	{
		return callMethod<jint>(
			"getStorageEncryptionStatus",
			"()I"
		);
	}
	android::app::admin::SystemUpdatePolicy DevicePolicyManager::getSystemUpdatePolicy() const
	{
		return callObjectMethod(
			"getSystemUpdatePolicy",
			"()Landroid/app/admin/SystemUpdatePolicy;"
		);
	}
	android::os::PersistableBundle DevicePolicyManager::getTransferOwnershipBundle() const
	{
		return callObjectMethod(
			"getTransferOwnershipBundle",
			"()Landroid/os/PersistableBundle;"
		);
	}
	JObject DevicePolicyManager::getTrustAgentConfiguration(android::content::ComponentName arg0, android::content::ComponentName arg1) const
	{
		return callObjectMethod(
			"getTrustAgentConfiguration",
			"(Landroid/content/ComponentName;Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	android::os::Bundle DevicePolicyManager::getUserRestrictions(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getUserRestrictions",
			"(Landroid/content/ComponentName;)Landroid/os/Bundle;",
			arg0.object()
		);
	}
	JString DevicePolicyManager::getWifiMacAddress(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getWifiMacAddress",
			"(Landroid/content/ComponentName;)Ljava/lang/String;",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::hasCaCertInstalled(android::content::ComponentName arg0, JByteArray arg1) const
	{
		return callMethod<jboolean>(
			"hasCaCertInstalled",
			"(Landroid/content/ComponentName;[B)Z",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	jboolean DevicePolicyManager::hasGrantedPolicy(android::content::ComponentName arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"hasGrantedPolicy",
			"(Landroid/content/ComponentName;I)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::installCaCert(android::content::ComponentName arg0, JByteArray arg1) const
	{
		return callMethod<jboolean>(
			"installCaCert",
			"(Landroid/content/ComponentName;[B)Z",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	jboolean DevicePolicyManager::installExistingPackage(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"installExistingPackage",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jboolean DevicePolicyManager::installKeyPair(android::content::ComponentName arg0, JObject arg1, java::security::cert::Certificate arg2, JString arg3) const
	{
		return callMethod<jboolean>(
			"installKeyPair",
			"(Landroid/content/ComponentName;Ljava/security/PrivateKey;Ljava/security/cert/Certificate;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object<jstring>()
		);
	}
	jboolean DevicePolicyManager::installKeyPair(android::content::ComponentName arg0, JObject arg1, JArray arg2, JString arg3, jboolean arg4) const
	{
		return callMethod<jboolean>(
			"installKeyPair",
			"(Landroid/content/ComponentName;Ljava/security/PrivateKey;[Ljava/security/cert/Certificate;Ljava/lang/String;Z)Z",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>(),
			arg3.object<jstring>(),
			arg4
		);
	}
	jboolean DevicePolicyManager::installKeyPair(android::content::ComponentName arg0, JObject arg1, JArray arg2, JString arg3, jint arg4) const
	{
		return callMethod<jboolean>(
			"installKeyPair",
			"(Landroid/content/ComponentName;Ljava/security/PrivateKey;[Ljava/security/cert/Certificate;Ljava/lang/String;I)Z",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>(),
			arg3.object<jstring>(),
			arg4
		);
	}
	void DevicePolicyManager::installSystemUpdate(android::content::ComponentName arg0, android::net::Uri arg1, JObject arg2, android::app::admin::DevicePolicyManager_InstallSystemUpdateCallback arg3) const
	{
		callMethod<void>(
			"installSystemUpdate",
			"(Landroid/content/ComponentName;Landroid/net/Uri;Ljava/util/concurrent/Executor;Landroid/app/admin/DevicePolicyManager$InstallSystemUpdateCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	jboolean DevicePolicyManager::isActivePasswordSufficient() const
	{
		return callMethod<jboolean>(
			"isActivePasswordSufficient",
			"()Z"
		);
	}
	jboolean DevicePolicyManager::isAdminActive(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isAdminActive",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::isAffiliatedUser() const
	{
		return callMethod<jboolean>(
			"isAffiliatedUser",
			"()Z"
		);
	}
	jboolean DevicePolicyManager::isAlwaysOnVpnLockdownEnabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isAlwaysOnVpnLockdownEnabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::isApplicationHidden(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"isApplicationHidden",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jboolean DevicePolicyManager::isBackupServiceEnabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isBackupServiceEnabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::isCallerApplicationRestrictionsManagingPackage() const
	{
		return callMethod<jboolean>(
			"isCallerApplicationRestrictionsManagingPackage",
			"()Z"
		);
	}
	jboolean DevicePolicyManager::isDeviceIdAttestationSupported() const
	{
		return callMethod<jboolean>(
			"isDeviceIdAttestationSupported",
			"()Z"
		);
	}
	jboolean DevicePolicyManager::isDeviceOwnerApp(JString arg0) const
	{
		return callMethod<jboolean>(
			"isDeviceOwnerApp",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean DevicePolicyManager::isEphemeralUser(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isEphemeralUser",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::isLockTaskPermitted(JString arg0) const
	{
		return callMethod<jboolean>(
			"isLockTaskPermitted",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean DevicePolicyManager::isLogoutEnabled() const
	{
		return callMethod<jboolean>(
			"isLogoutEnabled",
			"()Z"
		);
	}
	jboolean DevicePolicyManager::isManagedProfile(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isManagedProfile",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::isMasterVolumeMuted(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isMasterVolumeMuted",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::isNetworkLoggingEnabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isNetworkLoggingEnabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::isOverrideApnEnabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isOverrideApnEnabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::isPackageSuspended(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"isPackageSuspended",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jboolean DevicePolicyManager::isProfileOwnerApp(JString arg0) const
	{
		return callMethod<jboolean>(
			"isProfileOwnerApp",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean DevicePolicyManager::isProvisioningAllowed(JString arg0) const
	{
		return callMethod<jboolean>(
			"isProvisioningAllowed",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean DevicePolicyManager::isResetPasswordTokenActive(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isResetPasswordTokenActive",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::isSecurityLoggingEnabled(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isSecurityLoggingEnabled",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::isUninstallBlocked(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"isUninstallBlocked",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jboolean DevicePolicyManager::isUsingUnifiedPassword(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"isUsingUnifiedPassword",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	void DevicePolicyManager::lockNow() const
	{
		callMethod<void>(
			"lockNow",
			"()V"
		);
	}
	void DevicePolicyManager::lockNow(jint arg0) const
	{
		callMethod<void>(
			"lockNow",
			"(I)V",
			arg0
		);
	}
	jint DevicePolicyManager::logoutUser(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"logoutUser",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	void DevicePolicyManager::reboot(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"reboot",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	void DevicePolicyManager::removeActiveAdmin(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"removeActiveAdmin",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::removeCrossProfileWidgetProvider(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"removeCrossProfileWidgetProvider",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jboolean DevicePolicyManager::removeKeyPair(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"removeKeyPair",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jboolean DevicePolicyManager::removeOverrideApn(android::content::ComponentName arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"removeOverrideApn",
			"(Landroid/content/ComponentName;I)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::removeUser(android::content::ComponentName arg0, android::os::UserHandle arg1) const
	{
		return callMethod<jboolean>(
			"removeUser",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean DevicePolicyManager::requestBugreport(android::content::ComponentName arg0) const
	{
		return callMethod<jboolean>(
			"requestBugreport",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	jboolean DevicePolicyManager::resetPassword(JString arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"resetPassword",
			"(Ljava/lang/String;I)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	jboolean DevicePolicyManager::resetPasswordWithToken(android::content::ComponentName arg0, JString arg1, JByteArray arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"resetPasswordWithToken",
			"(Landroid/content/ComponentName;Ljava/lang/String;[BI)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jbyteArray>(),
			arg3
		);
	}
	JObject DevicePolicyManager::retrieveNetworkLogs(android::content::ComponentName arg0, jlong arg1) const
	{
		return callObjectMethod(
			"retrieveNetworkLogs",
			"(Landroid/content/ComponentName;J)Ljava/util/List;",
			arg0.object(),
			arg1
		);
	}
	JObject DevicePolicyManager::retrievePreRebootSecurityLogs(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"retrievePreRebootSecurityLogs",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	JObject DevicePolicyManager::retrieveSecurityLogs(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"retrieveSecurityLogs",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	void DevicePolicyManager::setAccountManagementDisabled(android::content::ComponentName arg0, JString arg1, jboolean arg2) const
	{
		callMethod<void>(
			"setAccountManagementDisabled",
			"(Landroid/content/ComponentName;Ljava/lang/String;Z)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	void DevicePolicyManager::setAffiliationIds(android::content::ComponentName arg0, JObject arg1) const
	{
		callMethod<void>(
			"setAffiliationIds",
			"(Landroid/content/ComponentName;Ljava/util/Set;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DevicePolicyManager::setAlwaysOnVpnPackage(android::content::ComponentName arg0, JString arg1, jboolean arg2) const
	{
		callMethod<void>(
			"setAlwaysOnVpnPackage",
			"(Landroid/content/ComponentName;Ljava/lang/String;Z)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	void DevicePolicyManager::setAlwaysOnVpnPackage(android::content::ComponentName arg0, JString arg1, jboolean arg2, JObject arg3) const
	{
		callMethod<void>(
			"setAlwaysOnVpnPackage",
			"(Landroid/content/ComponentName;Ljava/lang/String;ZLjava/util/Set;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3.object()
		);
	}
	jboolean DevicePolicyManager::setApplicationHidden(android::content::ComponentName arg0, JString arg1, jboolean arg2) const
	{
		return callMethod<jboolean>(
			"setApplicationHidden",
			"(Landroid/content/ComponentName;Ljava/lang/String;Z)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	void DevicePolicyManager::setApplicationRestrictions(android::content::ComponentName arg0, JString arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"setApplicationRestrictions",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void DevicePolicyManager::setApplicationRestrictionsManagingPackage(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"setApplicationRestrictionsManagingPackage",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void DevicePolicyManager::setAutoTimeRequired(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setAutoTimeRequired",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setBackupServiceEnabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setBackupServiceEnabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setBluetoothContactSharingDisabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setBluetoothContactSharingDisabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setCameraDisabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setCameraDisabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setCertInstallerPackage(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"setCertInstallerPackage",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void DevicePolicyManager::setCrossProfileCalendarPackages(android::content::ComponentName arg0, JObject arg1) const
	{
		callMethod<void>(
			"setCrossProfileCalendarPackages",
			"(Landroid/content/ComponentName;Ljava/util/Set;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DevicePolicyManager::setCrossProfileCallerIdDisabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setCrossProfileCallerIdDisabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setCrossProfileContactsSearchDisabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setCrossProfileContactsSearchDisabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setDefaultSmsApplication(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"setDefaultSmsApplication",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void DevicePolicyManager::setDelegatedScopes(android::content::ComponentName arg0, JString arg1, JObject arg2) const
	{
		callMethod<void>(
			"setDelegatedScopes",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/util/List;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void DevicePolicyManager::setDeviceOwnerLockScreenInfo(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"setDeviceOwnerLockScreenInfo",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void DevicePolicyManager::setEndUserSessionMessage(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"setEndUserSessionMessage",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jint DevicePolicyManager::setGlobalPrivateDnsModeOpportunistic(android::content::ComponentName arg0) const
	{
		return callMethod<jint>(
			"setGlobalPrivateDnsModeOpportunistic",
			"(Landroid/content/ComponentName;)I",
			arg0.object()
		);
	}
	jint DevicePolicyManager::setGlobalPrivateDnsModeSpecifiedHost(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jint>(
			"setGlobalPrivateDnsModeSpecifiedHost",
			"(Landroid/content/ComponentName;Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void DevicePolicyManager::setGlobalSetting(android::content::ComponentName arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"setGlobalSetting",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	void DevicePolicyManager::setKeepUninstalledPackages(android::content::ComponentName arg0, JObject arg1) const
	{
		callMethod<void>(
			"setKeepUninstalledPackages",
			"(Landroid/content/ComponentName;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean DevicePolicyManager::setKeyPairCertificate(android::content::ComponentName arg0, JString arg1, JObject arg2, jboolean arg3) const
	{
		return callMethod<jboolean>(
			"setKeyPairCertificate",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/util/List;Z)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3
		);
	}
	jboolean DevicePolicyManager::setKeyguardDisabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setKeyguardDisabled",
			"(Landroid/content/ComponentName;Z)Z",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setKeyguardDisabledFeatures(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setKeyguardDisabledFeatures",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setLockTaskFeatures(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setLockTaskFeatures",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setLockTaskPackages(android::content::ComponentName arg0, JArray arg1) const
	{
		callMethod<void>(
			"setLockTaskPackages",
			"(Landroid/content/ComponentName;[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	void DevicePolicyManager::setLogoutEnabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setLogoutEnabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setLongSupportMessage(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"setLongSupportMessage",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void DevicePolicyManager::setMasterVolumeMuted(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setMasterVolumeMuted",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setMaximumFailedPasswordsForWipe(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setMaximumFailedPasswordsForWipe",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setMaximumTimeToLock(android::content::ComponentName arg0, jlong arg1) const
	{
		callMethod<void>(
			"setMaximumTimeToLock",
			"(Landroid/content/ComponentName;J)V",
			arg0.object(),
			arg1
		);
	}
	JObject DevicePolicyManager::setMeteredDataDisabledPackages(android::content::ComponentName arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setMeteredDataDisabledPackages",
			"(Landroid/content/ComponentName;Ljava/util/List;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	void DevicePolicyManager::setNetworkLoggingEnabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setNetworkLoggingEnabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setOrganizationColor(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setOrganizationColor",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setOrganizationName(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"setOrganizationName",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void DevicePolicyManager::setOverrideApnsEnabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setOverrideApnsEnabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	JArray DevicePolicyManager::setPackagesSuspended(android::content::ComponentName arg0, JArray arg1, jboolean arg2) const
	{
		return callObjectMethod(
			"setPackagesSuspended",
			"(Landroid/content/ComponentName;[Ljava/lang/String;Z)[Ljava/lang/String;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2
		);
	}
	void DevicePolicyManager::setPasswordExpirationTimeout(android::content::ComponentName arg0, jlong arg1) const
	{
		callMethod<void>(
			"setPasswordExpirationTimeout",
			"(Landroid/content/ComponentName;J)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setPasswordHistoryLength(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setPasswordHistoryLength",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setPasswordMinimumLength(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setPasswordMinimumLength",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setPasswordMinimumLetters(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setPasswordMinimumLetters",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setPasswordMinimumLowerCase(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setPasswordMinimumLowerCase",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setPasswordMinimumNonLetter(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setPasswordMinimumNonLetter",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setPasswordMinimumNumeric(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setPasswordMinimumNumeric",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setPasswordMinimumSymbols(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setPasswordMinimumSymbols",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setPasswordMinimumUpperCase(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setPasswordMinimumUpperCase",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setPasswordQuality(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setPasswordQuality",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::setPermissionGrantState(android::content::ComponentName arg0, JString arg1, JString arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"setPermissionGrantState",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;I)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3
		);
	}
	void DevicePolicyManager::setPermissionPolicy(android::content::ComponentName arg0, jint arg1) const
	{
		callMethod<void>(
			"setPermissionPolicy",
			"(Landroid/content/ComponentName;I)V",
			arg0.object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::setPermittedAccessibilityServices(android::content::ComponentName arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"setPermittedAccessibilityServices",
			"(Landroid/content/ComponentName;Ljava/util/List;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean DevicePolicyManager::setPermittedCrossProfileNotificationListeners(android::content::ComponentName arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"setPermittedCrossProfileNotificationListeners",
			"(Landroid/content/ComponentName;Ljava/util/List;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean DevicePolicyManager::setPermittedInputMethods(android::content::ComponentName arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"setPermittedInputMethods",
			"(Landroid/content/ComponentName;Ljava/util/List;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void DevicePolicyManager::setProfileEnabled(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"setProfileEnabled",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	void DevicePolicyManager::setProfileName(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"setProfileName",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void DevicePolicyManager::setRecommendedGlobalProxy(android::content::ComponentName arg0, android::net::ProxyInfo arg1) const
	{
		callMethod<void>(
			"setRecommendedGlobalProxy",
			"(Landroid/content/ComponentName;Landroid/net/ProxyInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DevicePolicyManager::setRequiredStrongAuthTimeout(android::content::ComponentName arg0, jlong arg1) const
	{
		callMethod<void>(
			"setRequiredStrongAuthTimeout",
			"(Landroid/content/ComponentName;J)V",
			arg0.object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::setResetPasswordToken(android::content::ComponentName arg0, JByteArray arg1) const
	{
		return callMethod<jboolean>(
			"setResetPasswordToken",
			"(Landroid/content/ComponentName;[B)Z",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	void DevicePolicyManager::setRestrictionsProvider(android::content::ComponentName arg0, android::content::ComponentName arg1) const
	{
		callMethod<void>(
			"setRestrictionsProvider",
			"(Landroid/content/ComponentName;Landroid/content/ComponentName;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DevicePolicyManager::setScreenCaptureDisabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setScreenCaptureDisabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setSecureSetting(android::content::ComponentName arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"setSecureSetting",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	void DevicePolicyManager::setSecurityLoggingEnabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setSecurityLoggingEnabled",
			"(Landroid/content/ComponentName;Z)V",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setShortSupportMessage(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"setShortSupportMessage",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void DevicePolicyManager::setStartUserSessionMessage(android::content::ComponentName arg0, JString arg1) const
	{
		callMethod<void>(
			"setStartUserSessionMessage",
			"(Landroid/content/ComponentName;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jboolean DevicePolicyManager::setStatusBarDisabled(android::content::ComponentName arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setStatusBarDisabled",
			"(Landroid/content/ComponentName;Z)Z",
			arg0.object(),
			arg1
		);
	}
	jint DevicePolicyManager::setStorageEncryption(android::content::ComponentName arg0, jboolean arg1) const
	{
		return callMethod<jint>(
			"setStorageEncryption",
			"(Landroid/content/ComponentName;Z)I",
			arg0.object(),
			arg1
		);
	}
	void DevicePolicyManager::setSystemSetting(android::content::ComponentName arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"setSystemSetting",
			"(Landroid/content/ComponentName;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	void DevicePolicyManager::setSystemUpdatePolicy(android::content::ComponentName arg0, android::app::admin::SystemUpdatePolicy arg1) const
	{
		callMethod<void>(
			"setSystemUpdatePolicy",
			"(Landroid/content/ComponentName;Landroid/app/admin/SystemUpdatePolicy;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean DevicePolicyManager::setTime(android::content::ComponentName arg0, jlong arg1) const
	{
		return callMethod<jboolean>(
			"setTime",
			"(Landroid/content/ComponentName;J)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean DevicePolicyManager::setTimeZone(android::content::ComponentName arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"setTimeZone",
			"(Landroid/content/ComponentName;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void DevicePolicyManager::setTrustAgentConfiguration(android::content::ComponentName arg0, android::content::ComponentName arg1, android::os::PersistableBundle arg2) const
	{
		callMethod<void>(
			"setTrustAgentConfiguration",
			"(Landroid/content/ComponentName;Landroid/content/ComponentName;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void DevicePolicyManager::setUninstallBlocked(android::content::ComponentName arg0, JString arg1, jboolean arg2) const
	{
		callMethod<void>(
			"setUninstallBlocked",
			"(Landroid/content/ComponentName;Ljava/lang/String;Z)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	void DevicePolicyManager::setUserIcon(android::content::ComponentName arg0, android::graphics::Bitmap arg1) const
	{
		callMethod<void>(
			"setUserIcon",
			"(Landroid/content/ComponentName;Landroid/graphics/Bitmap;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jint DevicePolicyManager::startUserInBackground(android::content::ComponentName arg0, android::os::UserHandle arg1) const
	{
		return callMethod<jint>(
			"startUserInBackground",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)I",
			arg0.object(),
			arg1.object()
		);
	}
	jint DevicePolicyManager::stopUser(android::content::ComponentName arg0, android::os::UserHandle arg1) const
	{
		return callMethod<jint>(
			"stopUser",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)I",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean DevicePolicyManager::switchUser(android::content::ComponentName arg0, android::os::UserHandle arg1) const
	{
		return callMethod<jboolean>(
			"switchUser",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void DevicePolicyManager::transferOwnership(android::content::ComponentName arg0, android::content::ComponentName arg1, android::os::PersistableBundle arg2) const
	{
		callMethod<void>(
			"transferOwnership",
			"(Landroid/content/ComponentName;Landroid/content/ComponentName;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void DevicePolicyManager::uninstallAllUserCaCerts(android::content::ComponentName arg0) const
	{
		callMethod<void>(
			"uninstallAllUserCaCerts",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	void DevicePolicyManager::uninstallCaCert(android::content::ComponentName arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"uninstallCaCert",
			"(Landroid/content/ComponentName;[B)V",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	jboolean DevicePolicyManager::updateOverrideApn(android::content::ComponentName arg0, jint arg1, android::telephony::data::ApnSetting arg2) const
	{
		return callMethod<jboolean>(
			"updateOverrideApn",
			"(Landroid/content/ComponentName;ILandroid/telephony/data/ApnSetting;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void DevicePolicyManager::wipeData(jint arg0) const
	{
		callMethod<void>(
			"wipeData",
			"(I)V",
			arg0
		);
	}
	void DevicePolicyManager::wipeData(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"wipeData",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
} // namespace android::app::admin

