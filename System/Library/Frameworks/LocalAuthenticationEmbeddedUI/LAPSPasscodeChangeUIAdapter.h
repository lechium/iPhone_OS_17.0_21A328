//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LAPSPasscodeChangeUIAdapterOptions, LAPSPasscodeChangeUIPresentationController, NSString;
@protocol LAPSPasscodeChangeUIDelegate;

__attribute__((visibility("hidden")))
@interface LAPSPasscodeChangeUIAdapter : NSObject
{
    LAPSPasscodeChangeUIPresentationController *_presentationController;	// 8 = 0x8
    LAPSPasscodeChangeUIAdapterOptions *_options;	// 16 = 0x10
    id <LAPSPasscodeChangeUIDelegate> delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000019969
@property(nonatomic) __weak id <LAPSPasscodeChangeUIDelegate> delegate; // @synthesize delegate;
- (void)_presentPasscodesDidNotMatchErrorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019755
- (void)_presentPasscodeDoesNotMeetRequirementsError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000193f5
- (void)_presentPasscodeIsTooSimpleErrorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019126
- (void)fetchNewPasscodeViewController:(id)arg1 verifyPasscode:(id)arg2 matchesPasscode:(id)arg3;	// IMP=0x0000000000019032
- (void)fetchNewPasscodeViewController:(id)arg1 verifyPasscode:(id)arg2;	// IMP=0x0000000000018b74
- (id)fetchOldPasscodeViewController:(id)arg1 backoffMessageForTimeout:(long long)arg2;	// IMP=0x0000000000018aea
- (void)fetchOldPasscodeViewController:(id)arg1 verifyPasscode:(id)arg2;	// IMP=0x000000000001872d
- (void)deactivateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000186ea
- (void)fetchNewPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017fd4
- (void)fetchOldPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017a78
- (id)initWithParentVC:(id)arg1 options:(id)arg2;	// IMP=0x00000000000179b9
- (id)initWithParentVC:(id)arg1;	// IMP=0x0000000000017955

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

