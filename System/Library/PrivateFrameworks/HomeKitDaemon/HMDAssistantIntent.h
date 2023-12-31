//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class INControlHomeIntent, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDAssistantIntent : NSObject
{
    NSArray *_homeKitObjects;	// 8 = 0x8
    INControlHomeIntent *_intent;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00100000007f7f19
- (void).cxx_destruct;	// IMP=0x00000000007f7e4e
@property(retain, nonatomic) INControlHomeIntent *intent; // @synthesize intent=_intent;
@property(retain, nonatomic) NSArray *homeKitObjects; // @synthesize homeKitObjects=_homeKitObjects;
- (void)_handleActionSetForExecution:(id)arg1 message:(id)arg2;	// IMP=0x00000000007f7c53
- (void)_handleActionSetForConfirmation:(id)arg1 message:(id)arg2;	// IMP=0x00000000007f7ac2
- (id)_getObjectsWithUUID;	// IMP=0x00000000007f7920
- (void)_handleIntentRequestMessage:(id)arg1;	// IMP=0x00000000007f7388
- (void)performWithGather:(id)arg1 message:(id)arg2;	// IMP=0x00000000007f7303
- (id)initWithIntent:(id)arg1;	// IMP=0x00000000007f7298

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

