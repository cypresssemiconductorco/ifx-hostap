/*
 * Infineon OUI and vendor specific assignments
 * Copyright (c) 2023, Cypress Semiconductor Corporation (an Infineon company)
 *
 * This software may be distributed under the terms of the BSD license.
 * See README for more details.
 */

#ifndef IFX_VENDOR_H
#define IFX_VENDOR_H

/*
 * This file is a registry of identifier assignments from the Infineon
 * OUI 00:03:19 for purposes other than MAC address assignment. New identifiers
 * can be assigned through normal review process for changes to the upstream
 * hostap.git repository.
 */
#define OUI_IFX		0x000319

/*
 * enum ifx_nl80211_vendor_subcmds - IFX nl80211 vendor command identifiers
 *
 * @IFX_VENDOR_SCMD_UNSPEC: Reserved value 0
 *
 * @IFX_VENDOR_SCMD_DCMD: Handle the Dongle commands triggered from the userspace utilities.
 *	These commands will be passed to the Dongle for processing.
 *
 * @IFX_VENDOR_SCMD_FRAMEBURST: Control the Frameburst feature in the Dongle. This feature
 *	allows more efficient use of the airtime between the transmitting and receiving WLAN
 *	devices.
 *
 * @IFX_VENDOR_SCMD_SET_MAC_P2P_DEV: Set MAC address for a P2P Discovery device.
 *	Uses Vendor attribute IFX_VENDOR_ATTR_MAC_ADDR to pass the MAC address.
 *
 * @IFX_VENDOR_SCMD_TWT_OFFLOAD: Offload Target Wake Time (TWT) Session configuration to the Dongle.
 *
 * @IFX_VENDOR_SCMD_RAND_MAC: Configure the Random MAC module in the Dongle.
 *
 * @IFX_VENDOR_SCMD_MPC: Control the Minimum Power Consumption (MPC) feature in the Dongle.
 *	This is a STA-only power saving feature and not related to 802.11 power save.
 *
 * @IFX_VENDOR_SCMD_GIANTRX: Allow handling RX MGMT Packts of size 1840 bytes in the Dongle.
 *
 * @IFX_VENDOR_SCMD_PFN_CONFIG: Send the Preferred Network (PFN) information to the Dongle
 *	through the driver.
 *
 * @IFX_VENDOR_SCMD_PFN_STATUS: Fetch the Preferred Network (PFN) information from the Dongle
 *	through the driver.
 *
 * @IFX_VENDOR_SCMD_MAX: This acts as a the tail of cmds list.
 *      Make sure it located at the end of the list.
 */
enum ifx_nl80211_vendor_subcmds {
	IFX_VENDOR_SCMD_UNSPEC			= 0,
	IFX_VENDOR_SCMD_DCMD			= 1,
	/* Reserved 2-5 */
	IFX_VENDOR_SCMD_FRAMEBURST		= 6,
	/* Reserved 7-9 */
	IFX_VENDOR_SCMD_SET_MAC_P2P_DEV		= 10,
	/* Reserved 11-13 */
	IFX_VENDOR_SCMD_TWT_OFFLOAD		= 14,
	/* Reserved 15-16 */
	IFX_VENDOR_SCMD_RAND_MAC		= 17,
	/* Reserved 18 */
	IFX_VENDOR_SCMD_MPC			= 19,
	IFX_VENDOR_SCMD_GIANTRX			= 20,
	IFX_VENDOR_SCMD_PFN_CONFIG		= 21,
	IFX_VENDOR_SCMD_PFN_STATUS		= 22,
	IFX_VENDOR_SCMD_MAX
};

/*
 * enum ifx_vendor_attr - IFX nl80211 vendor attributes
 *
 * @IFX_VENDOR_ATTR_UNSPEC: Reserved value 0
 *
 * @IFX_VENDOR_ATTR_LEN: Dongle Command Message Body Length.
 *
 * @IFX_VENDOR_ATTR_DATA: Dongle Commend Message Body.
 *
 * @IFX_VENDOR_ATTR_MAC_ADDR: Medium Access Control (MAC) address.
 *
 * @IFX_VENDOR_ATTR_MAX: This acts as a the tail of attrs list.
 *      Make sure it located at the end of the list.
 */
enum ifx_vendor_attr {
	IFX_VENDOR_ATTR_UNSPEC		= 0,
	IFX_VENDOR_ATTR_LEN		= 1,
	IFX_VENDOR_ATTR_DATA		= 2,
	IFX_VENDOR_ATTR_MAC_ADDR	= 3,
	IFX_VENDOR_ATTR_MAX
};

#endif /* IFX_VENDOR_H */
