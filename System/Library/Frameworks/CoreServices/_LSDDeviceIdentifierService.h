//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSDDeviceIdentifierService
{
}

+ (id)XPCInterface;	// IMP=0x00800000000a832b
+ (Class)clientClass;	// IMP=0x00800000000a831a
+ (unsigned short)connectionType;	// IMP=0x00800000000a830f
+ (void)generateIdentifiersForInstallationWithContext:(struct LSContext *)arg1 bundleUnit:(unsigned int)arg2 bundleData:(const struct LSBundleData *)arg3;	// IMP=0x00800000000a816f
+ (void)clearIdentifiersForUninstallationWithContext:(struct LSContext *)arg1 bundleUnit:(unsigned int)arg2 bundleData:(const struct LSBundleData *)arg3;	// IMP=0x00800000000a8081
+ (id)vendorNameForDeviceIdentifiersWithContext:(struct LSContext *)arg1 bundleUnit:(unsigned int)arg2 bundleData:(const struct LSBundleData *)arg3;	// IMP=0x00800000000a7e16

@end
