//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIDropAnimationHandlers : NSObject
{
    NSMutableArray *_alongsideAnimationHandlers;	// 8 = 0x8
    NSMutableArray *_completionHandlers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000048c7eb
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000048c788
- (void)addAnimations:(CDUnknownBlockType)arg1;	// IMP=0x000000000048c725
@property(readonly, nonatomic) NSArray *completionHandlers;
@property(readonly, nonatomic) NSArray *alongsideAnimationHandlers;
- (void)resetAllAnimationHandlers;	// IMP=0x000000000048c6ce
- (void)invokeAllCompletionHandlers;	// IMP=0x000000000048c5bd
- (id)init;	// IMP=0x000000000048c548

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

