//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CRLSelectionPathAccessibility
{
}

+ (Class)crlaxBaseSafeCategoryClass;	// IMP=0x0020000000521357
+ (id)crlaxTargetClassName;	// IMP=0x001000000052134a
+ (id)crlaxCastFrom:(id)arg1;	// IMP=0x0010000000521371
- (void)crlaxEnumerateSelectionsLeastToMostSpecificInPathUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000521a31
- (void)crlaxEnumerateSelectionsMostToLeastSpecificInPathUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000521989
- (id)crlaxSelectionPathWithAppendedSelection:(id)arg1;	// IMP=0x00100000005217d9
- (id)crlaxMostSpecificSelectionOfClass:(Class)arg1;	// IMP=0x0010000000521691
@property(readonly, nonatomic) id crlaxMostSpecificTextSelection;
@property(readonly, nonatomic) id crlaxMostSpecificCellSelection;
@property(readonly, nonatomic) NSArray *crlaxOrderedSelections;
- (id)crlaxTarget;	// IMP=0x0010000000521368

@end

