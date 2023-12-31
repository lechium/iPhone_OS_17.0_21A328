//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ODIState;

__attribute__((visibility("hidden")))
@interface ODIHorizonalList3 : NSObject
{
    unsigned int mMaxPointCount;	// 8 = 0x8
    ODIState *mState;	// 16 = 0x10
}

+ (_Bool)mapIdentifier:(id)arg1 state:(id)arg2;	// IMP=0x006000000033eb3f
- (void).cxx_destruct;	// IMP=0x000000000033ed30
- (void)mapBaseStyleFromPoint:(id)arg1 shape:(id)arg2;	// IMP=0x000000000033f60c
- (void)mapOnePillarStyleFromPoint:(id)arg1 shape:(id)arg2;	// IMP=0x000000000033f5df
- (void)mapRoofStyleFromPoint:(id)arg1 shape:(id)arg2;	// IMP=0x000000000033f5bf
- (void)mapPillarPoints:(id)arg1 bounds:(struct CGRect)arg2;	// IMP=0x000000000033f375
- (void)map;	// IMP=0x000000000033edd0
- (void)setMaxPointCount:(unsigned int)arg1;	// IMP=0x000000000033edc7
- (id)initWithState:(id)arg1;	// IMP=0x000000000033ed40

@end

