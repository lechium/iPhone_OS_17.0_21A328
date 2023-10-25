//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IXSAppUninstaller : NSObject
{
}

+ (id)sharedUninstaller;	// IMP=0x00400000000149c6
- (void)uninstallAppWithIdentity:(id)arg1 clientName:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0040000000016a1a
- (void)_uninstallAppWithRecord:(id)arg1 identity:(id)arg2 clientName:(id)arg3 flags:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000001630f
- (void)_promptToOverrideManagedSettingsOfAppWithRecord:(id)arg1 identity:(id)arg2 clientName:(id)arg3 flags:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000015d27
- (void)_promptForDeletionWithRecord:(id)arg1 identity:(id)arg2 clientName:(id)arg3 flags:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5 isRemovable:(_Bool)arg6;	// IMP=0x0010000000015834
- (void)_promptForRelatedDataAndUninstallAppWithRecord:(id)arg1 identity:(id)arg2 clientName:(id)arg3 flags:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000001580f
- (void)_performUninstallOfAppWithIdentity:(id)arg1 clientName:(id)arg2 withFlags:(unsigned long long)arg3 record:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000015094
- (void)_postUninstallAlertsWithIdentity:(id)arg1 flags:(unsigned long long)arg2 record:(id)arg3;	// IMP=0x0010000000014f6b
- (void)_promptViewHealthKitDataWithIdentity:(id)arg1 record:(id)arg2;	// IMP=0x0010000000014bcc
- (void)uninstallParallelPlaceholderForIdentity:(id)arg1 reason:(id)arg2;	// IMP=0x0010000000014a53

@end
