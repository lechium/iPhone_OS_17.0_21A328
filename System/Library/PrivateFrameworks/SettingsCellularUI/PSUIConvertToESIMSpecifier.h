//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

@class NSString, PSListController, TSSIMSetupFlow, UINavigationController;

__attribute__((visibility("hidden")))
@interface PSUIConvertToESIMSpecifier : PSSpecifier
{
    TSSIMSetupFlow *_flow;	// 184 = 0xb8
    NSString *_phoneNumber;	// 192 = 0xc0
    NSString *_carrierName;	// 200 = 0xc8
    PSListController *_hostController;	// 208 = 0xd0
    UINavigationController *_navigationController;	// 216 = 0xd8
    _Bool _isViewControllerPopNeeded;	// 224 = 0xe0
    NSString *_iccid;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x0000000000027caf
- (id)getLogger;	// IMP=0x0000000000027c8f
- (void)_showWifiAlert;	// IMP=0x00000000000277db
- (void)_convertToeSIM;	// IMP=0x000000000002734f
- (void)simSetupFlowCompleted:(unsigned long long)arg1;	// IMP=0x0000000000027101
- (void)odcCanceled:(id)arg1;	// IMP=0x000000000002705f
- (void)odcFailed:(id)arg1;	// IMP=0x0000000000026fbd
- (void)odcSuccess:(id)arg1 isViewControllerPopNeeded:(_Bool)arg2;	// IMP=0x0000000000026ed3
- (void)convertToeSIMCellPressed:(id)arg1;	// IMP=0x0000000000026e61
- (void)dealloc;	// IMP=0x0000000000026dec
- (id)initWithPhoneNumber:(id)arg1 carrierName:(id)arg2 hostController:(id)arg3 isViewControllerPopNeeded:(_Bool)arg4 iccid:(id)arg5;	// IMP=0x0000000000026acd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

