//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/DevicePINController.h>

@class NSObject;

@interface WFServicePINEntryViewController : DevicePINController
{
    NSObject *_delegate;	// 152 = 0x98
}

+ (_Bool)settingEnabled;	// IMP=0x0040000000001c8d
- (void).cxx_destruct;	// IMP=0x0020000000001e36
@property(nonatomic) __weak NSObject *delegate; // @synthesize delegate=_delegate;
- (struct __CFString *)blockedStateKey;	// IMP=0x0010000000001dee
- (struct __CFString *)blockTimeIntervalKey;	// IMP=0x0010000000001dbf
- (struct __CFString *)failedAttemptsKey;	// IMP=0x0010000000001db2
- (struct __CFString *)defaultsID;	// IMP=0x0010000000001da5
- (_Bool)simplePIN;	// IMP=0x0010000000001d9d
- (_Bool)isNumericPIN;	// IMP=0x0010000000001d95
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000001d3b
- (_Bool)requiresKeyboard;	// IMP=0x0010000000001cec
- (void)setPIN:(id)arg1;	// IMP=0x0010000000001ce6
- (_Bool)validatePIN:(id)arg1;	// IMP=0x0010000000001ccd
- (_Bool)pinIsAcceptable:(id)arg1 outError:(id *)arg2;	// IMP=0x0010000000001cc5
- (void)performActionAfterPINRemove;	// IMP=0x0010000000001cbf
- (void)performActionAfterPINSet;	// IMP=0x0010000000001cb9
- (void)performActionAfterPINEntry;	// IMP=0x0010000000001cb3
- (id)stringsTable;	// IMP=0x0010000000001ca6
- (void)setPane:(id)arg1;	// IMP=0x0010000000001bfb
- (void)viewDidLoad;	// IMP=0x0010000000001a93
- (id)init;	// IMP=0x001000000000191e

@end

