//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CRLAccessibilitySummaryContainerElement
{
    NSArray *_containedElements;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000007472e
@property(readonly, nonatomic) NSArray *containedElements; // @synthesize containedElements=_containedElements;
- (id)accessibilityLabel;	// IMP=0x0010000000074541
- (struct CGRect)accessibilityFrame;	// IMP=0x0010000000074269
- (id)accessibilityElements;	// IMP=0x0010000000074261
- (_Bool)isAccessibilityElement;	// IMP=0x0010000000074259
- (id)initWithAccessibilityContainer:(id)arg1 containedElements:(id)arg2;	// IMP=0x00100000000740a6

@end
