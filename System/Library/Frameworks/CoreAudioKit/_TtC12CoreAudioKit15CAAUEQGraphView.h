//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC12CoreAudioKit15CAAUEQGraphView
{
    MISSING_TYPE *controlList;	// 224 = 0xe0
    MISSING_TYPE *paramCache;	// 232 = 0xe8
    MISSING_TYPE *accessibleElements;	// 240 = 0xf0
    MISSING_TYPE *dataSource;	// 248 = 0xf8
    MISSING_TYPE *curve;	// 288 = 0x120
    MISSING_TYPE *gradientLayer;	// 296 = 0x128
    MISSING_TYPE *activePointIndex;	// 304 = 0x130
    MISSING_TYPE *drawActivePointOnly;	// 312 = 0x138
    MISSING_TYPE *plotActiveRangeOnly;	// 313 = 0x139
    MISSING_TYPE *touchedParts;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x0000000000079f10
- (void)layoutSublayersOfLayer:(id)arg1;	// IMP=0x0000000000079de0
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000799c0
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000079440
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000079380
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000078b70
- (void)handleEndGestureWithNotification:(id)arg1;	// IMP=0x0000000000077b10
- (void)handleBeginGestureWithNotification:(id)arg1;	// IMP=0x0000000000077b00
@property(nonatomic, copy) NSArray *accessibilityElements;
- (void)tintColorDidChange;	// IMP=0x00000000000775b0
- (void)removeFromSuperview;	// IMP=0x0000000000076ed0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000076ea0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000076d40

@end

