#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace android::bluetooth
{
	class BluetoothGattCharacteristic;
}
namespace android::bluetooth
{
	class BluetoothGattService;
}
namespace java::util
{
	class UUID;
}

namespace android::bluetooth
{
	class BluetoothGattServer : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothGattServer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothGattServer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean addService(android::bluetooth::BluetoothGattService arg0);
		void cancelConnection(android::bluetooth::BluetoothDevice arg0);
		void clearServices();
		void close();
		jboolean connect(android::bluetooth::BluetoothDevice arg0, jboolean arg1);
		__JniBaseClass getConnectedDevices();
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0);
		__JniBaseClass getDevicesMatchingConnectionStates(jintArray arg0);
		android::bluetooth::BluetoothGattService getService(java::util::UUID arg0);
		__JniBaseClass getServices();
		jboolean notifyCharacteristicChanged(android::bluetooth::BluetoothDevice arg0, android::bluetooth::BluetoothGattCharacteristic arg1, jboolean arg2);
		void readPhy(android::bluetooth::BluetoothDevice arg0);
		jboolean removeService(android::bluetooth::BluetoothGattService arg0);
		jboolean sendResponse(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3, jbyteArray arg4);
		void setPreferredPhy(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::bluetooth
