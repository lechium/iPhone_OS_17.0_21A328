//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXPresentationState;

__attribute__((visibility("hidden")))
@interface PXOfficeArtClient
{
    PXPresentationState *mPresentationState;	// 8 = 0x8
}

+ (int)readPlaceholderBoundsTrackFromNode:(struct _xmlNode *)arg1;	// IMP=0x00600000001cacad
+ (int)readPlaceholderTypeFromNode:(struct _xmlNode *)arg1;	// IMP=0x00600000001caba3
- (void).cxx_destruct;	// IMP=0x0000000000448535
- (_Bool)chartAutoStrokeIsHollow;	// IMP=0x000000000044852d
- (_Bool)chartAutoFillIsHollow;	// IMP=0x0000000000448525
- (void)readBlipExtWithURI:(id)arg1 fromNode:(struct _xmlNode *)arg2 toDrawable:(id)arg3 state:(id)arg4;	// IMP=0x00000000004481c6
- (id)readOle:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00000000001ddc58
- (void)postprocessHyperlink:(id)arg1 relationship:(id)arg2 state:(id)arg3;	// IMP=0x00000000001da13f
- (id)readClientTextField:(struct _xmlNode *)arg1 identity:(id)arg2 paragraph:(id)arg3 state:(id)arg4;	// IMP=0x00000000004480ed
- (void)readClientDataFromGraphicalFramePropertiesNode:(struct _xmlNode *)arg1 toDrawable:(id)arg2 state:(id)arg3;	// IMP=0x00000000001de3a7
- (void)readClientDataFromPictureNode:(struct _xmlNode *)arg1 toImage:(id)arg2 state:(id)arg3;	// IMP=0x00000000001cdc3d
- (void)readClientDataFromShapeNode:(struct _xmlNode *)arg1 toShape:(id)arg2 state:(id)arg3;	// IMP=0x00000000001ca895
@property(readonly) __weak PXPresentationState *presentationState; // @synthesize presentationState=mPresentationState;
- (id)initWithState:(id)arg1;	// IMP=0x00000000001c695a

@end
