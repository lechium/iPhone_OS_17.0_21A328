//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISDialog, NSString, NSURL;

@interface PurchaseResponseInfo : NSObject
{
    NSString *_changedBuyParameters;	// 8 = 0x8
    long long _delayedGotoRetryCount;	// 16 = 0x10
    ISDialog *_dialog;	// 24 = 0x18
    _Bool _didPasswordAuthenticate;	// 32 = 0x20
    long long _machineDataRetryCount;	// 40 = 0x28
    NSString *_machineDataSyncState;	// 48 = 0x30
    NSURL *_redirectURL;	// 56 = 0x38
    _Bool _shouldRetryForMachineData;	// 64 = 0x40
    _Bool _shouldRetryForDelayedGoto;	// 65 = 0x41
    _Bool _shouldRetryWithOriginalProductOwnerAccount;	// 66 = 0x42
}

- (void).cxx_destruct;	// IMP=0x0020000000027444
@property(nonatomic) _Bool shouldRetryWithOriginalProductOwnerAccount; // @synthesize shouldRetryWithOriginalProductOwnerAccount=_shouldRetryWithOriginalProductOwnerAccount;
- (_Bool);	// IMP=0x0010000000027432
@property(nonatomic) _Bool shouldRetryForMachineData; // @synthesize shouldRetryForMachineData=_shouldRetryForMachineData;
@property(nonatomic) _Bool shouldRetryForDelayedGoto; // @synthesize shouldRetryForDelayedGoto=_shouldRetryForDelayedGoto;
@property(copy, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(copy, nonatomic) NSString *machineDataSyncState; // @synthesize machineDataSyncState=_machineDataSyncState;
@property(nonatomic) long long machineDataRetryCount; // @synthesize machineDataRetryCount=_machineDataRetryCount;
@property(nonatomic) _Bool didPasswordAuthenticate; // @synthesize didPasswordAuthenticate=_didPasswordAuthenticate;
@property(retain, nonatomic) ISDialog *dialog; // @synthesize dialog=_dialog;
@property(nonatomic) long long delayedGotoRetryCount; // @synthesize delayedGotoRetryCount=_delayedGotoRetryCount;
@property(retain, nonatomic) NSString *changedBuyParameters; // @synthesize changedBuyParameters=_changedBuyParameters;
- (void)reset;	// IMP=0x001000000002731c

@end
