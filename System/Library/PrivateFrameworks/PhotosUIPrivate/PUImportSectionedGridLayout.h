//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUSectionedGridLayout.h"

@class NSArray, NSMutableDictionary, UIColor;
@protocol PUImportSectionedGridLayoutDelegate;

__attribute__((visibility("hidden")))
@interface PUImportSectionedGridLayout : PUSectionedGridLayout
{
    _Bool _delegateSupportsPerSectionHighlight;	// 8 = 0x8
    NSMutableDictionary *_sectionDecorationAttributesBySection;	// 16 = 0x10
    NSMutableDictionary *_preUpdateSectionDecorationAttributesBySection;	// 24 = 0x18
    UIColor *_emphasizedSectionBackgroundColor;	// 32 = 0x20
    UIColor *_emphasizedSectionBottomStrokeColor;	// 40 = 0x28
    double _emphasizedSectionBottomStrokeWidth;	// 48 = 0x30
    NSArray *_sectionIndexPathsBeingDeleted;	// 56 = 0x38
}

+ (Class)layoutAttributesClass;	// IMP=0x00600000002b2ce5
- (void).cxx_destruct;	// IMP=0x00000000002b2c81
@property(retain, nonatomic) NSArray *sectionIndexPathsBeingDeleted; // @synthesize sectionIndexPathsBeingDeleted=_sectionIndexPathsBeingDeleted;
@property(nonatomic) double emphasizedSectionBottomStrokeWidth; // @synthesize emphasizedSectionBottomStrokeWidth=_emphasizedSectionBottomStrokeWidth;
@property(retain, nonatomic) UIColor *emphasizedSectionBottomStrokeColor; // @synthesize emphasizedSectionBottomStrokeColor=_emphasizedSectionBottomStrokeColor;
@property(retain, nonatomic) UIColor *emphasizedSectionBackgroundColor; // @synthesize emphasizedSectionBackgroundColor=_emphasizedSectionBackgroundColor;
@property(retain, nonatomic) NSMutableDictionary *preUpdateSectionDecorationAttributesBySection; // @synthesize preUpdateSectionDecorationAttributesBySection=_preUpdateSectionDecorationAttributesBySection;
@property(retain, nonatomic) NSMutableDictionary *sectionDecorationAttributesBySection; // @synthesize sectionDecorationAttributesBySection=_sectionDecorationAttributesBySection;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;	// IMP=0x00000000002b28a7
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000002b27d3
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x00000000002b2586
- (void)finalizeCollectionViewUpdates;	// IMP=0x00000000002b252c
- (void)prepareForCollectionViewUpdates:(id)arg1;	// IMP=0x00000000002b2263
- (id)createLayoutAttributesForSectionBackgroundAtSection:(unsigned long long)arg1;	// IMP=0x00000000002b1e00
- (void)recreateSectionDecorationAttributes;	// IMP=0x00000000002b1b82
- (void)prepareLayout;	// IMP=0x00000000002b1ae2
@property(nonatomic) __weak id <PUImportSectionedGridLayoutDelegate> delegate; // @dynamic delegate;
- (id)init;	// IMP=0x00000000002b18c3

@end

