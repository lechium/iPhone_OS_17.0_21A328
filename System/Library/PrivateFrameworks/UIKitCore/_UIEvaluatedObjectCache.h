//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIEvaluatedObjectCache : NSObject
{
    CDUnknownBlockType _sortComparator;	// 8 = 0x8
    CDUnknownBlockType _evaluationBlock;	// 16 = 0x10
    NSMutableOrderedSet *_sortedObjects;	// 24 = 0x18
    id _topEvaluatedObject;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000085e78b
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000085dd6d
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000085dd1d
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000085dccd
- (id)succinctDescriptionBuilder;	// IMP=0x000000000085dbae
- (id)succinctDescription;	// IMP=0x000000000085db5e
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000000085da14

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
