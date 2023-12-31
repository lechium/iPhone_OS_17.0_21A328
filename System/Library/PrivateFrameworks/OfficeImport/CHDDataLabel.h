//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDResources, EDString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDDataLabel : NSObject
{
    EDResources *mResources;	// 8 = 0x8
    EDString *mString;	// 16 = 0x10
    unsigned long long mContentFormatId;	// 24 = 0x18
    int mPosition;	// 32 = 0x20
    _Bool mShowLeaderLines;	// 36 = 0x24
    _Bool mShowCategoryName;	// 37 = 0x25
    _Bool mShowSeriesName;	// 38 = 0x26
    _Bool mShowPercent;	// 39 = 0x27
    _Bool mShowBubbleSize;	// 40 = 0x28
    _Bool mShowValue;	// 41 = 0x29
    _Bool mShowLegendKey;	// 42 = 0x2a
    _Bool mIsPositionAffineTransform;	// 43 = 0x2b
    _Bool mContentFormatDerived;	// 44 = 0x2c
    _Bool mDeleted;	// 45 = 0x2d
    _Bool mExtensionDetected;	// 46 = 0x2e
    double mRotation;	// 48 = 0x30
    OADGraphicProperties *mGraphicProperties;	// 56 = 0x38
    OADGraphicProperties *mLeaderlineGraphicProperties;	// 64 = 0x40
}

+ (id)dataLabelWithResources:(id)arg1;	// IMP=0x006000000018c6fa
- (void).cxx_destruct;	// IMP=0x000000000038d5f2
@property(retain, nonatomic) EDString *string; // @synthesize string=mString;
- (void)setRotationAngle:(double)arg1;	// IMP=0x00000000001ed9aa
- (double)rotationAngle;	// IMP=0x000000000038d5dd
- (_Bool)isPositionAffineTransform;	// IMP=0x0000000000245746
- (void)setIsPositionAffineTransform:(_Bool)arg1;	// IMP=0x000000000024574f
- (void)setLeaderlineGraphicProperties:(id)arg1;	// IMP=0x000000000038d599
- (id)leaderlineGraphicProperties;	// IMP=0x000000000038d58b
- (void)setGraphicProperties:(id)arg1;	// IMP=0x000000000018c81c
- (id)graphicProperties;	// IMP=0x000000000038d57d
- (_Bool)isCustomLabelBlockingVisibility;	// IMP=0x000000000038d43d
- (void)setExtensionDetected:(_Bool)arg1;	// IMP=0x000000000038d434
- (_Bool)isLabelVisible;	// IMP=0x000000000038d404
- (_Bool)isExtensionDetected;	// IMP=0x000000000038d3fb
- (void)setDeleted:(_Bool)arg1;	// IMP=0x000000000038d3f2
- (_Bool)isDeleted;	// IMP=0x000000000038d3e9
- (void)setShowLegendKey:(_Bool)arg1;	// IMP=0x00000000001ed8f1
- (_Bool)isShowLegendKey;	// IMP=0x000000000024573d
- (void)setShowValue:(_Bool)arg1;	// IMP=0x000000000018c813
- (_Bool)isShowValue;	// IMP=0x00000000001f0992
- (void)setShowBubbleSize:(_Bool)arg1;	// IMP=0x000000000038d3e0
- (_Bool)isShowBubbleSize;	// IMP=0x000000000038d3d7
- (void)setShowPercent:(_Bool)arg1;	// IMP=0x000000000018c80a
- (_Bool)isShowPercent;	// IMP=0x0000000000245722
- (void)setShowSeriesName:(_Bool)arg1;	// IMP=0x00000000001ed8fa
- (_Bool)isShowSeriesName;	// IMP=0x0000000000245734
- (void)setShowCategoryName:(_Bool)arg1;	// IMP=0x000000000018c801
- (_Bool)isShowCategoryName;	// IMP=0x000000000024572b
- (void)setShowLeaderLines:(_Bool)arg1;	// IMP=0x000000000018c7f8
- (_Bool)hasLeaderLinesGraphics;	// IMP=0x000000000038d3c9
- (_Bool)isShowLeaderLines;	// IMP=0x000000000038d3c0
- (void)setPosition:(int)arg1;	// IMP=0x00000000001ed914
- (int)position;	// IMP=0x0000000000245719
- (void)setIsContentFormatDerivedFromDataPoints:(_Bool)arg1;	// IMP=0x000000000038d3b7
- (_Bool)isContentFormatDerivedFromDataPoints;	// IMP=0x000000000038d3ae
- (void)setContentFormat:(id)arg1;	// IMP=0x000000000024462e
- (id)contentFormat;	// IMP=0x000000000038d315
- (id)initWithResources:(id)arg1;	// IMP=0x000000000018c75f
- (id)description;	// IMP=0x000000000038d638
- (void)setContentFormatId:(unsigned long long)arg1;	// IMP=0x00000000002328b0
- (unsigned long long)contentFormatId;	// IMP=0x000000000038d62e

@end

