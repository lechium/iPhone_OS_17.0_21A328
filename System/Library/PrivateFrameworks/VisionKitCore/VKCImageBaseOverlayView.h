//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VKCImageAnalysisResult, VKCTextRecognitionResult;
@protocol VKCImageBaseOverlayViewDelegate;

__attribute__((visibility("hidden")))
@interface VKCImageBaseOverlayView
{
    id <VKCImageBaseOverlayViewDelegate> _baseDelegate;	// 8 = 0x8
    VKCTextRecognitionResult *_recognitionResult;	// 16 = 0x10
    NSString *_customAnalyticsIdentifier;	// 24 = 0x18
    long long _identifierIndex;	// 32 = 0x20
    struct CGRect _contentsRect;	// 40 = 0x28
    struct CGRect _normalizedVisibleRect;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000d60e0
@property(nonatomic) struct CGRect normalizedVisibleRect; // @synthesize normalizedVisibleRect=_normalizedVisibleRect;
@property(nonatomic) struct CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
@property(nonatomic) long long identifierIndex; // @synthesize identifierIndex=_identifierIndex;
@property(copy, nonatomic) NSString *customAnalyticsIdentifier; // @synthesize customAnalyticsIdentifier=_customAnalyticsIdentifier;
@property(retain, nonatomic) VKCTextRecognitionResult *recognitionResult; // @synthesize recognitionResult=_recognitionResult;
@property(nonatomic) __weak id <VKCImageBaseOverlayViewDelegate> baseDelegate; // @synthesize baseDelegate=_baseDelegate;
- (void)updateSelectionRectsForWindowChange;	// IMP=0x00000000000d5fe6
- (void)normalizedVisibleRectDidChange;	// IMP=0x00000000000d5fe0
- (id)viewPathFromNormalizedPath:(id)arg1;	// IMP=0x00000000000d5f28
- (id)normalizedPathFromViewPath:(id)arg1;	// IMP=0x00000000000d5e70
- (id)viewQuadFromNormalizedQuad:(id)arg1;	// IMP=0x00000000000d5d4f
- (id)normalizedQuadFromViewQuad:(id)arg1;	// IMP=0x00000000000d5c2e
- (struct CGRect)viewRectFromNormalizedRect:(struct CGRect)arg1;	// IMP=0x00000000000d5b5d
- (struct CGRect)normalizedRectFromViewRect:(struct CGRect)arg1;	// IMP=0x00000000000d5a8c
- (struct CGPoint)viewPointFromNormalizedPoint:(struct CGPoint)arg1;	// IMP=0x00000000000d59d2
- (struct CGPoint)normalizedPointFromViewPoint:(struct CGPoint)arg1;	// IMP=0x00000000000d5918
@property(readonly, nonatomic) struct CGRect contentBounds;
@property(readonly, nonatomic) _Bool isPublicAPI;
@property(readonly, nonatomic) VKCImageAnalysisResult *analysisResult;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000d575d

@end

