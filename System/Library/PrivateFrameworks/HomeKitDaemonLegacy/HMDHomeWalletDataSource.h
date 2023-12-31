//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeWalletDataSource : HMFObject
{
    int _passCodeChangeNotificationToken;	// 8 = 0x8
}

@property int passCodeChangeNotificationToken; // @synthesize passCodeChangeNotificationToken=_passCodeChangeNotificationToken;
- (void)canNotifyAboutExpressModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006a6ff8
- (void)showExpressEnabledUserNotificationForWalletKeyWithPassUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006a6f8f
- (id)numberValueFromNoBackupStoreWithKey:(id)arg1;	// IMP=0x00000000006a6f3e
- (void)persistNumberValueToNoBackupStore:(id)arg1 withKey:(id)arg2;	// IMP=0x00000000006a6f15
- (_Bool)registerForPasscodeChangeNotificationWithQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000006a6de9
@property(readonly) long long walletKeyColor;
@property(readonly) double accessoryWriteRetryInterval;
@property(readonly) long long accessoryWriteMaxRetryCount;
@property(readonly, getter=isResidentCapable) _Bool residentCapable;
@property(readonly) _Bool isWatch;
- (void)dealloc;	// IMP=0x00000000006a6b27
- (id)init;	// IMP=0x00000000006a6ae5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

