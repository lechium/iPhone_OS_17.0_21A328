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

+ (id)logCategory;	// IMP=0x001000000070b329
- (void).cxx_destruct;	// IMP=0x000000000070b25e
@property(retain, nonatomic) INControlHomeIntent *intent; // @synthesize intent=_intent;
@property(retain, nonatomic) NSArray *homeKitObjects; // @synthesize homeKitObjects=_homeKitObjects;
- (void)_handleActionSetForExecution:(id)arg1 message:(id)arg2;	// IMP=0x000000000070b063
- (void)_handleActionSetForConfirmation:(id)arg1 message:(id)arg2;	// IMP=0x000000000070aed2
- (id)_getObjectsWithUUID;	// IMP=0x000000000070ad30
- (void)_handleIntentRequestMessage:(id)arg1;	// IMP=0x000000000070a799
- (void)performWithGather:(id)arg1 message:(id)arg2;	// IMP=0x000000000070a714
- (id)initWithIntent:(id)arg1;	// IMP=0x000000000070a6a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
