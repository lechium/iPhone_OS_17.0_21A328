//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CRLSelectionPath : NSObject
{
    NSArray *_currentSelection;	// 8 = 0x8
}

+ (id)selectionPathWithSelectionArray:(id)arg1;	// IMP=0x00400000005e04fc
- (void).cxx_destruct;	// IMP=0x00200000005e206a
@property(readonly, nonatomic) NSString *UUIDDescription;
- (id)description;	// IMP=0x00100000005e1df9
- (void)enumerateSelectionsLeastToMostSpecificInPathUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000005e1cab
- (void)enumerateSelectionsMostToLeastSpecificInPathUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000005e1b5d
- (id)leastSpecificSelectionOfClass:(Class)arg1;	// IMP=0x00100000005e19f6
- (id)mostSpecificSelectionConformingToProtocol:(id)arg1;	// IMP=0x00100000005e1878
- (id)mostSpecificSelectionOfClass:(Class)arg1;	// IMP=0x00100000005e1700
- (id)selectionPathByAppendingOrReplacingMostSpecificSelectionWithSelection:(id)arg1;	// IMP=0x00100000005e15db
- (id)selectionPathReplacingMostSpecificLocationOfSelection:(id)arg1 withSelection:(id)arg2;	// IMP=0x00100000005e0f5f
- (id)selectionPathPoppingToSelection:(id)arg1;	// IMP=0x00100000005e0cc8
- (id)selectionPathPoppingOffSelection:(id)arg1;	// IMP=0x00100000005e0a4c
- (id)selectionPathWithAppendedSelections:(id)arg1;	// IMP=0x00100000005e0618
- (id)selectionPathWithAppendedSelection:(id)arg1;	// IMP=0x00100000005e0549
- (unsigned long long)indexForSelection:(id)arg1;	// IMP=0x00100000005e04e6
- (id)selectionAtIndex:(unsigned long long)arg1;	// IMP=0x00100000005e02d4
@property(readonly, nonatomic) NSArray *orderedSelections;
- (unsigned long long)hash;	// IMP=0x00100000005e02b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000005e0137
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000005e012c
- (id)initWithSelectionArray:(id)arg1;	// IMP=0x00100000005e0095

@end

