#include "../../app/PendingIntent.hpp"
#include "../../graphics/drawable/Icon.hpp"
#include "./WalletCard.hpp"
#include "./WalletCard_Builder.hpp"

namespace android::service::quickaccesswallet
{
	// Fields
	
	// QAndroidJniObject forward
	WalletCard_Builder::WalletCard_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WalletCard_Builder::WalletCard_Builder(jstring arg0, android::graphics::drawable::Icon arg1, jstring arg2, android::app::PendingIntent arg3)
		: __JniBaseClass(
			"android.service.quickaccesswallet.WalletCard$Builder",
			"(Ljava/lang/String;Landroid/graphics/drawable/Icon;Ljava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0,
			arg1.object(),
			arg2,
			arg3.object()
		) {}
	
	// Methods
	android::service::quickaccesswallet::WalletCard WalletCard_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/quickaccesswallet/WalletCard;"
		);
	}
	android::service::quickaccesswallet::WalletCard_Builder WalletCard_Builder::setCardIcon(android::graphics::drawable::Icon arg0)
	{
		return callObjectMethod(
			"setCardIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/service/quickaccesswallet/WalletCard$Builder;",
			arg0.object()
		);
	}
	android::service::quickaccesswallet::WalletCard_Builder WalletCard_Builder::setCardLabel(jstring arg0)
	{
		return callObjectMethod(
			"setCardLabel",
			"(Ljava/lang/CharSequence;)Landroid/service/quickaccesswallet/WalletCard$Builder;",
			arg0
		);
	}
} // namespace android::service::quickaccesswallet
