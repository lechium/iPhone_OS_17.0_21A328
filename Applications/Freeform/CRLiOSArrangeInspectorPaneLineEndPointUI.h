//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;
@protocol CRLiOSInspectorPaneSectionTitle;

@interface CRLiOSArrangeInspectorPaneLineEndPointUI : NSObject
{
    MISSING_TYPE *_anchorChooser;	// 8 = 0x8
    MISSING_TYPE *maxCoordinateMagnitude;	// 16 = 0x10
    MISSING_TYPE *_editor;	// 24 = 0x18
    MISSING_TYPE *_cells;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0040000000d28230
- (id)init;	// IMP=0x0010000000d281d0
- (void)setEndY:(id)arg1;	// IMP=0x0010000000d28140
- (void)setEndX:(id)arg1;	// IMP=0x0010000000d27fa0
- (void)setStartY:(id)arg1;	// IMP=0x0010000000d27f90
- (void)setStartX:(id)arg1;	// IMP=0x0010000000d27f60
- (id)initWithEditor:(id)arg1;	// IMP=0x0010000000d27a00
- (void)updateCellsInPlaceWith:(id)arg1;	// IMP=0x0010000000d27990
@property(nonatomic, readonly) NSArray *cells;
@property(nonatomic, readonly) _Bool hasCustomShapeUI;
@property(nonatomic, readonly) id <CRLiOSInspectorPaneSectionTitle> sectionTitle;

@end

