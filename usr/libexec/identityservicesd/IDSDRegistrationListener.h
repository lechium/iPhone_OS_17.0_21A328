//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface IDSDRegistrationListener : NSObject
{
    NSMutableSet *_completionBlocks;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000001b5ca2
- (void).cxx_destruct;	// IMP=0x00200000001b6142
@property(retain, nonatomic) NSMutableSet *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
- (void)registrationController:(id)arg1 allRegistrationsSucceeded:(id)arg2;	// IMP=0x00100000001b6073
- (void)_callBlocksWithResult:(_Bool)arg1 registrations:(id)arg2 error:(id)arg3;	// IMP=0x00100000001b5f0f
- (void)removeBlockForIdentifier:(id)arg1;	// IMP=0x00100000001b5ef9
- (id)addBlockForRegistrationCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001b5e4b
- (void)dealloc;	// IMP=0x00100000001b5dd6
- (id)init;	// IMP=0x00100000001b5cf7

@end
