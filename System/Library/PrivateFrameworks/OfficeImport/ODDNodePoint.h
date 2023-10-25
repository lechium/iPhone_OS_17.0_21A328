//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, ODDTransitionPoint;

__attribute__((visibility("hidden")))
@interface ODDNodePoint
{
    ODDNodePoint *mParent;	// 48 = 0x30
    NSMutableArray *mChildren;	// 56 = 0x38
    ODDTransitionPoint *mParentTransition;	// 64 = 0x40
    ODDTransitionPoint *mSiblingTransition;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000032f8be
- (void)setSiblingTransition:(id)arg1;	// IMP=0x00000000001e5c28
- (id)siblingTransition;	// IMP=0x0000000000215d51
- (void)setParentTransition:(id)arg1;	// IMP=0x00000000001e5b69
- (id)parentTransition;	// IMP=0x000000000023f719
- (void)addChild:(id)arg1 order:(unsigned long long)arg2;	// IMP=0x00000000001e588a
- (id)children;	// IMP=0x00000000001e6782
- (id)parent;	// IMP=0x000000000020113b
- (void)setType:(int)arg1;	// IMP=0x00000000001e4b25

@end
