//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (EmailFoundationAdditions)
- (id)ef_popElement;	// IMP=0x006000000001b45c
- (id)ef_removeFirst;	// IMP=0x006000000001b3da
- (void)ef_trimToCount:(unsigned long long)arg1 fromStart:(_Bool)arg2;	// IMP=0x006000000001b381
- (void)ef_addOptionalObject:(id)arg1;	// IMP=0x006000000001b332
- (unsigned long long)ef_removeObject:(id)arg1 usingSortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;	// IMP=0x006000000001b262
- (unsigned long long)ef_removeObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x006000000001b1c0
- (unsigned long long)ef_insertObjectIfAbsent:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x006000000001b096
- (unsigned long long)ef_insertObject:(id)arg1 usingSortFunction:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3 allowDuplicates:(_Bool)arg4;	// IMP=0x006000000001afc0
- (unsigned long long)ef_insertObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2 allowDuplicates:(_Bool)arg3;	// IMP=0x006000000001aea2
- (unsigned long long)ef_insertObject:(id)arg1 usingSortDescriptors:(id)arg2;	// IMP=0x006000000001abfa
- (void)ef_reverseObjects;	// IMP=0x006000000001aae6
- (void)ef_addAbsentObjectsFromArrayAccordingToEquals:(id)arg1;	// IMP=0x006000000001a980
- (void)ef_moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x006000000001a8ee
- (void)ef_addObject:(id)arg1 orPlaceholder:(id)arg2;	// IMP=0x006000000001a8d5
- (_Bool)ef_addObjectIfAbsentAccordingToEquals:(id)arg1;	// IMP=0x006000000001a853
- (_Bool)ef_addObjectIfAbsent:(id)arg1;	// IMP=0x006000000001a7d1
@end
