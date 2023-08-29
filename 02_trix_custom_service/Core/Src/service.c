#include "bluenrg1_gap.h"
#include "bluenrg1_gatt_aci.h"
#include "service.h"

uint8_t SERVICE_UUID[16] = {0x66,0x9a,0x0c,0x20,0x00,0x08,0x96,0x9e,0xe2,0x11,0x9e,0xb1,0xe0,0xf2,0x73,0xd9};

uint16_t my_service_handle;

tBleStatus add_simple_service(void)
{
	tBleStatus ret;
	Service_UUID_t service_uuid;

	BLUENRG_memcpy(service_uuid.Service_UUID_128, SERVICE_UUID, 16);

	// Add service
	ret = aci_gatt_add_service(UUID_TYPE_128, &service_uuid, PRIMARY_SERVICE, 7, &my_service_handle);

	return ret;

}
