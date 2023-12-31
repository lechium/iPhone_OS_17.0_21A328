//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDPUIDeviceToDeviceEncryptionHelper, NSString;

__attribute__((visibility("hidden")))
@interface CKCloudKitAccountRepairController : NSObject
{
    CDPUIDeviceToDeviceEncryptionHelper *_encryptionHelper;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000006082aa
@property(retain, nonatomic) CDPUIDeviceToDeviceEncryptionHelper *encryptionHelper; // @synthesize encryptionHelper=_encryptionHelper;
- (void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000608276
- (void)beginRepairWithPresentingViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000607e5a
- (id)authenticationContext;	// IMP=0x0000000000607ca5
- (Class)authenticationContextClass;	// IMP=0x0000000000607c14
- (id)primaryAppleAccount;	// IMP=0x0000000000607b7a
- (id)AKSecurityUpgradeContextMessages;	// IMP=0x0000000000607ae2
- (id)accountStore;	// IMP=0x0000000000607a4c
- (id)CDPUIDeviceToDeviceEncryptionHelperWithPresentingViewController:(id)arg1;	// IMP=0x000000000060798a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

