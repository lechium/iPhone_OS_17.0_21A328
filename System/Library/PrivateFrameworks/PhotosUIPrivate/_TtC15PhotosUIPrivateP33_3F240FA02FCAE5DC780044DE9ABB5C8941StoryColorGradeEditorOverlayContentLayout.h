//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGAbsoluteCompositeLayout.h>

@class MISSING_TYPE;

@interface _TtC15PhotosUIPrivateP33_3F240FA02FCAE5DC780044DE9ABB5C8941StoryColorGradeEditorOverlayContentLayout : PXGAbsoluteCompositeLayout
{
    MISSING_TYPE *viewModel;	// 8 = 0x8
    MISSING_TYPE *selectionSpritesIndexRange;	// 16 = 0x10
    MISSING_TYPE *sublayoutFrames;	// 32 = 0x20
    MISSING_TYPE *previewClip;	// 40 = 0x28
    MISSING_TYPE *previewClipTimeRange;	// 48 = 0x30
    MISSING_TYPE *captionHeightsByRow;	// 96 = 0x60
    MISSING_TYPE *storyModelObservation;	// 104 = 0x68
    MISSING_TYPE *viewModelObservation;	// 120 = 0x78
    MISSING_TYPE *updateFlags;	// 136 = 0x88
    MISSING_TYPE *hasVerticalScrollingContent;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0000000000045904
- (id)init;	// IMP=0x00000000000458b3
- (id)initWithComposition:(id)arg1;	// IMP=0x000000000004586e
- (id)layout:(id)arg1 navigationObjectReferenceForSublayoutAtIndex:(long long)arg2;	// IMP=0x00000000000457a9
- (struct CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize)arg3;	// IMP=0x000000000004577c
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;	// IMP=0x0000000000045712
@property(nonatomic, readonly) long long scrollableAxis;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(id *)arg3;	// IMP=0x00000000000437f9
- (void)referenceSizeDidChange;	// IMP=0x000000000004331b
- (void)update;	// IMP=0x00000000000432c0

@end
